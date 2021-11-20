# python_C_extension
Example of how to write a C extension to Python.

To build:
```console
python setup.py build_ext --inplace
```
The inplace flag causes the resulting shared object to be copied into the current directory, which means you can import it into a python session.
```console
python test.py
```

