#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <deque>
using std::deque;
#include <utility>
using std::make_pair; using std::pair;
#include "Location.h"
#include "Character.h"
#include "Item.h"

int main(){
	Location startLoc("start loc");
	Location hell("hell");
	pair<Location*,bool> destPair = make_pair (&hell,1);
	startLoc._destinations.push_back(destPair);
	deque<Item*> stuff;
	Player dan("Dan","f","brown","white","fat",&startLoc,stuff,0,0,0,0,0,0,0,0,0);
	dan.move("hell",&dan,&startLoc);
	
	cout<< endl;
	
	Item pickfork("pickfork", "Item1", 1,1, &hell);
	hell._objects.push_back(&pickfork);

	Item pitchaxe("pitchaxe", "Item2", 1,1, &startLoc);
	startLoc._objects.push_back(&pitchaxe);
	
	dan.pickUp("pickfork", &dan, &hell);
	dan.pickUp("pickfork", &dan, &hell);
	cout << hell._objects.size() << endl;	
	cout<<hell._objects[0]->_description<<endl;

	return 0;

}
