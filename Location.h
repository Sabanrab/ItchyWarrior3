#ifndef LOCATION_H
#define LOCATION_H

#include <string>
using std::string;
#include <deque>
using std::deque;
#include <utility>
using std::pair;

#include "Character.h"

class NPC;

class Location{
public:
	string name;
	deque<pair<Location*,bool>> destinations;
	deque<NPC> NPCS;
};

#endif
