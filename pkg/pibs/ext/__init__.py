# -*- coding: utf-8 -*-
#
# the pibs development team
# (c) 2024-2025 all rights reserved

# attempt to
try:
    # pull the extension module
    from . import pibs as libpibs
# if this fails
except ImportError:
    # indicate the bindings are not accessible
    libpibs = None


# end of file 
