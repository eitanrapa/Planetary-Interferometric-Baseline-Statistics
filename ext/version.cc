// -*- c++ -*-
//
// the pibs development team
// (c) 2024-2025 all rights reserved


// externals
#include "external.h"
// namespace setup
#include "forward.h"

// the pibs library
#include <pibs/version.h>


// access to the version tags from the headers and the library
void
pibs::py::version(py::module & m)
{
    // make a {version} submodule
    auto version = m.def_submodule(
        // its name
        "version",
        // its docstring
        "the static and dynamic version of the bindings");


    // add the static version
    version.def(
        // the name
        "static",
        // the implementation
        []() {
            // build a tuple from the static info in the headers
            auto extver = std::make_tuple(
                pibs::version::major,
                pibs::version::minor,
                pibs::version::micro,
                pibs::version::revision);
            // all done
            return extver;
        },
        // the docstring
        "the pibs version visible at compile time");


    // add the dynamic version
    version.def(
        // the name
        "dynamic",
        // the implementation
        []() {
            // get the version as known to the pibs shared library
            auto version = pibs::version::version();
            // make a tuple
            auto libver = std::make_tuple(
                version.major,
                version.minor,
                version.micro,
                version.revision);
            // all done
            return libver;
        },
        // the docstring
        "the pibs version visible through its shared library");


    // all done
    return;
}


// end of file
