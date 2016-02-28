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
	//making locations
	Location startLoc("start loc");
	startLoc._description = "stratin the game";
	Location hell("hell");
	hell._description = "fiery abyss mother fucker";
	//making paths
	hell._destinations.push_back(make_pair (&startLoc,1));
	pair<Location*,bool> destPair = make_pair (&hell,1);
	startLoc._destinations.push_back(destPair);
	//building Player
	deque<Item*> stuff;
	Player dan("Dan","f","brown","white","fat",&startLoc,stuff,0,0,0,0,0,0,0,0,0);
	//creating Items
	Item pickfork("pickfork", "pickfork. minors use it to pick their teetch", 1,1, &hell);
	hell._objects.push_back(&pickfork);
	Item pitchaxe("pitchaxe", "a heavy axe to be thrown by a pitcher", 1,1, &startLoc);
	startLoc._objects.push_back(&pitchaxe);

	//actions
	dan.move("hell",&dan,&startLoc);
	dan.pickUp("pickfork", &dan, &hell);
	dan.examine("pickfork",&dan,dan._charLocation);
	dan.move("start loc", &dan, &hell);
	dan.examine("pitchaxe",&dan,dan._charLocation);
	dan.move("hell",&dan,&startLoc);

	return 0;

}
