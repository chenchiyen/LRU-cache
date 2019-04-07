CXX=g++
CXXFLAGS=-g -std=c++11
OBJ = LRUcache.o testcases.o
EXEC = RunTest

make:
	make LRUcache
	make testcase
	make RunTest

LRUcache: LRUcache.cpp
	$(CXX) $(CXXFLAGS) -o LRUcache.o -c LRUcache.cpp
testcase: testcases.cpp
	$(CXX) $(CXXFLAGS) -o testcases.o -c testcases.cpp
RunTest: $(OBJ)
	$(CXX) $(CXXFLAGS) -o RunTest $(OBJ)

clean:
	rm *.o $(EXEC)