cmake_minimum_required(VERSION 3.24)

project(MyCompiler)

set(CMAKE_C_STANDARD 11)

find_package(FLEX)

find_package(BISON)

FLEX_TARGET(flexer L.l lex.yy.c)

BISON_TARGET(parser L.y y.tab.c)