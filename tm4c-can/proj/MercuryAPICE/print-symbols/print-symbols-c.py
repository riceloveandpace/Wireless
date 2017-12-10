#!/usr/bin/env python

import sys

def main():
    for line in open(sys.argv[1],'r'):
        print write_c_code(line.strip())

def write_c_code(name):
    tmpl = """
    printf("%%s %%s\\n",
#ifdef %(name)s
           "D"
#else
           "u"
#endif
           , "%(name)s"
           );"""
    return tmpl % locals()

if '__main__' == __name__:
    main()
