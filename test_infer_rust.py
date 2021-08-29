from infercode.client.infercode_client import InferCodeClient
import os
import logging
import sklearn.metrics.pairwise
logging.basicConfig(level=logging.INFO)

# Change from -1 to 0 to enable GPU
os.environ['CUDA_VISIBLE_DEVICES'] = "-1"

infercode = InferCodeClient(language="rust")
infercode.init_from_config()
vectors = infercode.encode(["""
# [inline] fn some < T > (_ : Option < T > , x : T) -> Option < T > { Some (x) }
""", """
# [doc (hidden)] # [stable (feature = "rust1" , since = "1.0.0")] pub fn from_elem < T : Clone > (elem : T , n : usize) -> Vec < T > { < T as SpecFromElem > :: from_elem (elem , n) }
"""])
print(vectors)
x = vectors[0].reshape(1, -1)
y = vectors[1].reshape(1, -1)
print(sklearn.metrics.pairwise.cosine_similarity(x, y))
