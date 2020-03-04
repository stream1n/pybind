#include <pybind11/embed.h>
#include <iostream>
using namespace std;

int main() {
    pybind11::scoped_interpreter guard{};

    pybind11::module calc = pybind11::module::import("calc");
    pybind11::object result = calc.attr("add")("Jim");
    std::string n = result.cast<std::string>();
    cout << n << endl;

}