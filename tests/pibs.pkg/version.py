#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
# the pibs development team
# (c) 2024-2025 all rights reserved


"""
Version check
"""


def test():
    # access the {pibs} package
    import pibs
    from pibs import libpibs
    # verify that the static and current versions match
    assert libpibs.version.static() == pibs.version()
    # verify that the dynamic and current versions match
    assert libpibs.version.dynamic() == pibs.version()
    # all done
    return


# main
if __name__ == "__main__":
    # do...
    test()

# end of file
