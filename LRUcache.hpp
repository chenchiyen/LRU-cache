// LRUcache.hpp
// Definition of LRU cache and operations
// 
// Created by Chi-Yen Chen on 04/2019.
// Copyright © 2019 chenchiyen. All rights reserved.

#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;

/** LRUcache
 *  Definition of LRU cache
 *  
 *  Data Structure:
 *  * capaticy to define the capatity of this LRU cache
 *  * list to keep track current state of this LRU cache
 *  * unordered_map to keep track of each key's most recent usage
 * 
 *  Space Complexity: O(n)
 *  n is term of capacity of this LRU cache
 */
class LRUcache {
private:
    int capacity;
    list<int> li;
    unordered_map<int, list<int>::iterator> um;
public:
    /** LRUcache::LRUcache(int _capacity)
     *  Constructor of LRUcache
     *  @param capacity of LRU cache
     */
    LRUcache(int _capacity);

    /** LRUcache::~LRUcache()
     *  Destructor of LRUcache
     */
    ~LRUcache();

    /** LRUcache::put(int key)
     *  @param the integer to be put in the LRU cache
     */
    void put(int key);

    /** LRUcache::get(int key)
     *  @param the integer key to be got
     *  @return if the operation is successful
     */
    bool get(int key);
};