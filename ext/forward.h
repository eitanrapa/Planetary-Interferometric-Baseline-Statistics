// -*- c++ -*-
//
// the pibs development team
// (c) 2024-2025 all rights reserved


// code guard
#pragma once

// the {project.name} namespace
namespace pibs::py {

    // bindings of opaque types
    void opaque(py::module &);
    // exceptions
    void exceptions(py::module &);
    // version info
    void version(py::module &);

}


// end of file
