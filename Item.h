#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;
#include <deque>
using std::deque;

#include "Location.h"
class Location;

class Item {
public:
	string _name;
	string _description;
	bool _pickUp; //if the item can be picked up or not
	bool _visable; //if the player can see this item
	Location* _itemLocation;
};

#endif
