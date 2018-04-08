#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>

using std::vector;

vector<int> list_foo(vector<int>& in_list) {
    vector<int> ret_vec;
    ret_vec.clear();
    ret_vec.reserve(in_list.size());
    for (size_t i = 0; i < in_list.size(); ++i) {
        int v = in_list[i];
        ret_vec.push_back(2*v);
    }
    return ret_vec;
}

PYBIND11_MODULE(list_exp, m) {
    m.doc() = "pass and return a list";
    m.def("list_foo", &list_foo, "example function");
}