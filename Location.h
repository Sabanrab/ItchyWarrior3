#ifndef LOCATION_H
#define LOCATION_H

#include<string>
using std::string;
#include<deque>
using std::deque;

#include "NPC.h"
#include "Item.h"
#include "Quest.h"
#include "Skill.h"
#include "Location.h"
#include "Attributes.h"

class Location{
    string name;
    string status; //in or out
    location* north;
    location* south;
    location* east;
    location* west;
    location* northEast;
    location* northWest;
    location* southEast; 
    location* southWest;
};


#endif /* LOCATION_H */
