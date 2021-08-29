from infercode.client.infercode_client import InferCodeClient
import os
import logging
import sklearn.metrics.pairwise
logging.basicConfig(level=logging.INFO)

# Change from -1 to 0 to enable GPU
os.environ['CUDA_VISIBLE_DEVICES'] = "-1"

infercode = InferCodeClient(language="c")
infercode.init_from_config()
vectors = infercode.encode(["for (i = 0; i < n; i++)", "struct book{ int num; char s[27]; }shu[1000];"])

print(vectors)
x = vectors[0].reshape(1, -1)
y = vectors[1].reshape(1, -1)
print(sklearn.metrics.pairwise.cosine_similarity(x, y))
