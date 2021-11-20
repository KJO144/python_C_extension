from distutils.core import setup, Extension

module1 = Extension('kmodule', sources = ['kfuncs.c'])

setup (name = 'kpackage',
       version = '1.0',
       description = 'This is a demo package',
       ext_modules = [module1])
