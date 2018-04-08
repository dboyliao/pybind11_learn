#include <pybind11/pybind11.h>
#include <iostream>

using namespace std;
namespace py = pybind11;

int add(int i, int j) {
    return i + j;
}

void talk(void) {
    cout << "Hello plugin with pybind11!" << endl;
    return;
}

PYBIND11_MODULE(pybind11_exp, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers");

    m.def("talk", &talk, "A function which talks");
}
