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
	Player testerPlayer;
	Location testerPlace;
	testerPlace._name = "bobty";
	Item testerItem;
	Item testerItem9;
	Speech testerSpeech;
	deque<Item> stuff = {};
	Item thing;
	thing._name = "YES IT IS";
	stuff.push_back(thing);
	Character Gry = Character("gary", "f","bule","prapel","fat as fuck",&testerPlace,stuff);

//	cout << Gry._name << endl << Gry._gender << endl << Gry._hairColor << endl << Gry._skinColor\
//<< endl << Gry._bodyType << endl;
//	cout << Gry._charLocation->_name << endl;
//	cout << Gry._inventory[0]->_name << endl;
	


	return 0;
}
