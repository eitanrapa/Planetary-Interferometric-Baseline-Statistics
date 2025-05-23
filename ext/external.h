// -*- c++ -*-
//
// the pibs development team
// (c) 2024-2025 all rights reserved


// code guard
#pragma once

// STL
#include <string>

// journal
#include <pyre/journal.h>

// pybind support
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>

namespace py = pybind11;

// type aliases
namespace pibs::py {
    // import {pybind11}
    namespace py = pybind11;
    // get the special {pybind11} literals
    using namespace py::literals;

    // sizes of things
    using size_t = std::size_t;
    // strings
    using string_t = std::string;
}


// end of file
