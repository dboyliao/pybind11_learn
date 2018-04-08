#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <map>
#include <string>
#include <vector>

using std::map;
using std::pair;
using std::string;
using std::vector;

map<string, vector<int> > group_by(vector<pair<string, int> > data) {
    map<string, vector<int> > ret_map;
    for (pair<string, int> d : data) {
        string key = d.first;
        int value = d.second;
        ret_map[key].push_back(value);
    }
    return ret_map;
}

PYBIND11_MODULE(map_exp, m) {
    m.doc() = "simple groupby";
    m.def("group_by", &group_by, "simple groupby: (str, int) -> dict(str, list[int])");
}