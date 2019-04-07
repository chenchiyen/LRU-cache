CXX=g++
CXXFLAGS=-g -std=c++11
OBJ = LRUcache.o testcases.o
EXEC = RunTest

# Compile all necessary files to get exacutable file
make:
	make LRUcache
	make testcase
	make RunTest
# Compile elements
LRUcache: LRUcache.cpp
	$(CXX) $(CXXFLAGS) -o LRUcache.o -c LRUcache.cpp
testcase: testcases.cpp
	$(CXX) $(CXXFLAGS) -o testcases.o -c testcases.cpp
RunTest: $(OBJ)
	$(CXX) $(CXXFLAGS) -o RunTest $(OBJ)
# Clean the object files and exacutable file
clean:
	rm *.o $(EXEC)