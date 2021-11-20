#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *
kadd(PyObject *self, PyObject *args)
{
    const int a, b;
    int sum;

    if (!PyArg_ParseTuple(args, "ii", &a, &b)) // ii because we have two int args
        return NULL;
    sum = a + b;
    return PyLong_FromLong(sum);
}

static PyMethodDef kmoduleMethods[] = {
  
    {"kadd",  kadd, METH_VARARGS,  "Add two numbers."},
  
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef kmodule = {
    PyModuleDef_HEAD_INIT,
    "kmodule",   /* name of module */
    NULL,     /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    kmoduleMethods
};

PyMODINIT_FUNC
PyInit_kmodule(void)
{
    return PyModule_Create(&kmodule);
}
