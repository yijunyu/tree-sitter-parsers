from setuptools import setup, find_packages

install_requires=[
    "tree_sitter==0.19.0"
]

setup(
  name = 'tree_sitter_parsers',
  version = "0.0.1",
  py_modules = ['tree_sitter_parsers'],
  description = 'generate the shared libraries of tree-sitter parsers',
  author = 'Yijun Yu',
  author_email = 'yijun.yu@huawei.com',
  license="MIT",
  url = 'https://github.com/yijunyu/tree-sitter-parsers',
  classifiers = [
    'Development Status :: 3 - Alpha',
    'License :: OSI Approved :: MIT License',
    'Operating System :: OS Independent',
    'Programming Language :: Python :: 3',
    'Intended Audience :: Developers',
  ],
  package_dir={"tree_sitter_parsers": "tree_sitter_parsers"},
  install_requires=install_requires,
  include_package_data=True,
)
