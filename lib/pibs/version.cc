// -*- C++ -*-
// -*- coding: utf-8 -*-
//
// the pibs development team
// (c) 2024-2025 all rights reserved

// my declarations
#include "version.h"

// build and return the version tuple
auto
pibs::version::version() -> version_t
{
    // easy enough
    return version_t { major, minor, micro, revision };
}

// end of file
