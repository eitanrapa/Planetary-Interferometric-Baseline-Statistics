#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
# the pibs development team
# california institute of technology
# (c) 2024-2025 all rights reserved
#


"""
Version check
"""


def test():
    # access the {pibs} extension
    from pibs import libpibs
    # verify that the static and dynamic versions match
    assert libpibs.version.static() == libpibs.version.dynamic()
    # all done
    return


# main
if __name__ == "__main__":
    # do...
    test()


# end of file
