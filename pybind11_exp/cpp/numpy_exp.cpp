#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <iostream>

namespace py = pybind11;
using std::cout;
using std::endl;

py::array copy_array(py::array in_arr){
    py::array ret_arr = py::array(in_arr.dtype(),
                                  {in_arr.shape(), in_arr.shape()+in_arr.ndim()},
                                  {in_arr.strides(), in_arr.strides()+in_arr.ndim()},
                                  in_arr.data(),
                                  in_arr);
    return ret_arr;
}

PYBIND11_MODULE(numpy_exp, m) {
    m.doc() = "numpy example";
    m.def("copy_arr", &copy_array, "copy array (generic)");
}
