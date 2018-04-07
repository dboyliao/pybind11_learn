pybind11_exp: pybind11_exp.cpp
	g++ -o $@`python3-config --extension-suffix` $^ -O3 -Wall -shared -std=c++11 -fPIC `python3 -m pybind11 --includes` `python3-config --ldflags`

.PHONY: clean
clean:
	rm -f pybind11_exp`python3-config --extension-suffix`
