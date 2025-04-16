# -*- makefile -*-
#
# the pibs development team
# (c) 2024-2025 all rights reserved


# pibs consists of a python package
pibs.packages := pibs.pkg
# libraries
pibs.libraries := pibs.lib
# python extensions
pibs.extensions := pibs.ext
# a ux bundle
pibs.webpack :=
# and some tests
pibs.tests := pibs.lib.tests pibs.ext.tests pibs.pkg.tests


# load the packages
include $(pibs.packages)
# the libraries
include $(pibs.libraries)
# the extensions
include $(pibs.extensions)
# the ux
include $(pibs.webpack)
# and the test suites
include $(pibs.tests)


# end of file
