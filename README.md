# Least recently used cache (LRU Cache) Implementation
This repository is an implementation of LRU Cache with unit test design.

Apply C++ Automated Test Cases in a Header from [Catch2](https://github.com/catchorg/Catch2) for unit test.


# Structure
``` cpp
LRUcache // Definition and implementation of LRU Cache
testcase // Testcases design
Catch2   // For C++ Automated Test Cases in a Header
```

# Usage
## Run Tests
``` Shell
$ make clean
$ make
$ ./RunTest
```
## Use LRU Cache Library
Just include the header file and cpp file in your project.
``` cpp 
#include "LRUcache.hpp"
```
### To compile
``` shell
g++ -g -std=c++11 -o LRUcache.o -c LRUcache.cpp
```