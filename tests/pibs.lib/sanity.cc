// -*- C++ -*-
// -*- coding: utf-8 -*-
//
// the pibs development team
// (c) 2024 - 2025 all rights reserved


// get the {pibs} version
#include <pibs/version.h>


// the driver
int main(int argc, char *argv[])
{

    // get the {pibs} version
    auto version = pibs::version::version();

    // say something
    channel
        // the static version, straight from the headers
        << "   static: "
        << pibs::version::major << "."
        << pibs::version::minor << "."
        << pibs::version::micro << "."
        // the dynamic version, from the library
        << "  dynamic: "
        << version.major << "."
        << version.minor << "."
        << version.micro << "."
        << version.revision << "."

    // all done
    return 0;
}


// end of file
