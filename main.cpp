#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <deque>
using std::deque;
#include <utility>
using std::make_pair; using std::pair;
#include "Location.h"

int main(){
	Location tester;
	Location linker;
	tester.name = "your mother";
	linker.name = "dan's mother";
	tester.destinations.push_back(make_pair(&linker,0));
	cout << tester.destinations[0].first->name << endl;
	return 0;
}
