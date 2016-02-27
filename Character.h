#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
using std::string
#include <deque>
using std::deque;

#include "Location.h"

class Character{
public:
	string name;
	Location* charLocation;
};

#endif
