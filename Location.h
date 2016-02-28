#ifndef LOCATION_H
#define LOCATION_H

#include <string>
using std::string;
#include <deque>
using std::deque;
#include <utility>
using std::pair;

//#include "Character.h"
class Character;
class NPC;

#include "Item.h"
class Item;

class Location{
public:
	string _name;
	string _description;
	bool _visited = 0; //if the player has already visited this destination
	deque<pair<Location*,bool>> _destinations;
	deque<NPC*> _NPCS;
	deque<Item*> _objects;

	Location(string nm){
		_name = nm;
	}

};

#endif
