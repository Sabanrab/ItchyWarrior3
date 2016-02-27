#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string;
#include <deque>
using std::deque;

#include "Location.h"

class Location;

class Character{
public:
	string name;
	Location* charLocation;
};

class Player : public Character {
public:
	
};

class NPC :public Character {
public:

};


#endif
