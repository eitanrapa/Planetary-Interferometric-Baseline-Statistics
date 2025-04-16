// -*- C++ -*-
//
// the pibs development team
// (c) 2024-2025 all rights reserved


// external
#include "external.h"
// namespace setup
#include "forward.h"


// the module entry point
PYBIND11_MODULE(pibs, m)
{

    // the doc string
    m.doc() = "the libpibs bindings";

    // bind the opaque types
    pibs::py::opaque(m);
    // register the exception types
    pibs::py::exceptions(m);
    // version info
    pibs::py::version(m);

    return;
}


// end of file
