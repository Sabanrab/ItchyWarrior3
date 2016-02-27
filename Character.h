#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string;
#include <deque>
using std::deque;

#include "Location.h"
class Location;
#include "Item.h"
class Item;

class Character{
public:
	string name;
	Location* charLocation;
	deque<Item> inventory;
};

class Player : public Character {
public:
	
};

class NPC :public Character {
public:

};


#endif
