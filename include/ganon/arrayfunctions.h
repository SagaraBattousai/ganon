#ifndef __ARRAY_FUNCTIONS_H__
#define __ARRAY_FUNCTIONS_H__


//#ifndef MODULE_ARRAY_API_NAME
//#define MODULE_ARRAY_API_NAME UNNAMED_AND_WILL_PROBABLY_CAUSE_ERROR
//#endif

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
//#define NO_IMPORT_ARRAY
//#define PY_ARRAY_UNIQUE_SYMBOL MODULE_ARRAY_API_NAME

#include <stdarg.h>
#include <numpy/ndarraytypes.h>

typedef void (*mappable_function)(void *, va_list args);

PyArrayObject *map_array(PyArrayObject *arr, mappable_function func, ...);

PyArrayObject *sum_array(PyArrayObject *arr, int rtype);

//PyObject *nearest_convolve(PyObject *arr);

#endif