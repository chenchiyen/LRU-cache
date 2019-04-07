// testcase.cpp
// Testcases design for LRU cache
// 
// Created by Chi-Yen Chen on 04/2019.
// Copyright © 2019 chenchiyen. All rights reserved.

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "LRUcache.hpp"

TEST_CASE("get element from empty LRU cache", ) {
    LRUcache cache(3);
    REQUIRE(cache.get(1)==false);
    cache.put(3);
    REQUIRE(cache.get(2)==false);
    cache.put(4);
    REQUIRE(cache.get(1)==false);
    REQUIRE(cache.get(2)==false);
    REQUIRE(cache.get(3)==true);
    REQUIRE(cache.get(4)==true);
}

TEST_CASE("general test for LRU cache") {
    LRUcache cache(2);
    cache.put(1);
    cache.put(2);
    REQUIRE(cache.get(1)==true);
    cache.put(3);
    REQUIRE(cache.get(2)==false);
    REQUIRE(cache.get(1)==true);
    REQUIRE(cache.get(3)==true);
    REQUIRE(cache.get(4)==false);
}
TEST_CASE("general test") {
    LRUcache cache(3);
    cache.put(1);
    cache.put(2);
    REQUIRE(cache.get(1)==true);
    cache.put(3);
    REQUIRE(cache.get(2)==true);
    cache.put(4);
    REQUIRE(cache.get(1)==false);
    REQUIRE(cache.get(2)==true);
    REQUIRE(cache.get(3)==true);
    REQUIRE(cache.get(4)==true);
}
// 4, 2, 3