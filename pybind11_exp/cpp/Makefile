CXX_FLAGS = -std=c++11 -shared -fPIC -O3 -Wall `python3 -m pybind11 --includes`
PYTHON_LD = `python3-config --ldflags`

% : %.cpp
	make $@.so

%.so : %.cpp
	g++ -o $@ $^ $(CXX_FLAGS) $(PYTHON_LD)

# pybind11_exp: pybind11_exp.cpp
# 	g++ -o $@`python3-config --extension-suffix` $^ $(CXX_FLAGS) $(PYTHON_LD)

.PHONY: clean
clean:
	rm -f *.so
