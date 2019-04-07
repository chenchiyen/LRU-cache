// LRUcache.cpp
// Implementation of LRU cache and operations
// 
// Created by Chi-Yen Chen on 04/2019.
// Copyright © 2019 chenchiyen. All rights reserved.

#include "LRUcache.hpp"

using namespace std;

/** LRUcache::LRUcache(int _capacity)
 *  Constructor of LRUcache
 *  @param capacity of LRU cache
 * 
 *  Time Complexity: O(1)
 */
LRUcache::LRUcache(int _capacity) {
    this->capacity = _capacity;
}
LRUcache::~LRUcache(){}

/** LRUcache::put(int key)
 *  @param the integer to be put in the LRU cache
 * 
 *  Time Complexity: O(1) on average case, O(n) in worst case
 *  * unordered_map.count(): constant on average, linear in size of container (i.e. capacity+1) in worst case
 *  * list.front(): constant
 *  * list.push_front(): constant
 *  * list.begin(): constant
 *  * unordered_map.size(): constant
 *  * unordered_map.erase(): constant on average cases, linear in size of container (i.e. capaticy+1) in worst case
 *  * list.pop_back(): constant
 */
void LRUcache::put(int key) {
    if (um.count(key)) {
        li.remove(key);
    }
    li.push_front(key);
    um[key] = li.begin();
    if (um.size() > this->capacity) {
        um.erase(li.back());
        li.pop_back();
    }
}

/** LRUcache::get(int key)
 *  @param the integer key to be got
 *  @return if the operation is successful
 * 
 *  Time Complexity: O(1) on average case, O(n) in worst case
 *  * unordered_map.count(): constant on average, linear in size of container (i.e. capacity+1) in worst case
 *  * list.push_front(): constant
 *  * list.erase(element): constant
 *  * unordered_map.erase(): constant on average cases, linear in size of container (i.e. capaticy+1) in worst case
 *  * list.begin(): constant
 * 
 */
bool LRUcache::get(int key) {
    if (um.count(key)) {
        li.push_front(*um[key]);
        li.erase(um[key]);
        um.erase(key);
        um[key] = li.begin();
        return true;
    }
    return false;
}
