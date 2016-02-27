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
	string name;
	string description;
	bool pickUp; //if the item can be picked up or not
	Location* itemLocation;
};

#endif
