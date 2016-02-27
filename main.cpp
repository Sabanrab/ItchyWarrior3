#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <deque>
using std::deque;
#include <utility>
using std::make_pair; using std::pair;
#include "Location.h"
#include "Character.h"

int main(){
	NPC testerNPC;
	testerNPC.name = "philip";
	Location testerPlace;
	Item testerItem;
	testerItem.name = "sword";
	testerPlace.objects.push_back(testerItem);
	cout << testerPlace.objects[0].name << endl;
	return 0;
}
