#ifndef LOCATION_H
#define LOCATION_H

#include<string>
using std::string;
#include<deque>
using std::deque;

//#include "NPC.h"
//#include "Item.h"
//#include "Quest.h"
//#include "Skill.h"
//#include "Location.h"
//#include "Attributes.h"

class Location{
    string name;
    string description;
    string status; //in or out
    //bool visited = 0; //if player has been here already or not
    //deque<pair<location*,bool>> destinations; //bool true if path open
    //deque<NPC> NPCS;
    //deque<Object> objects;
    //deque<Event> events;
    //deque<Item> items;
};

#endif /* LOCATION_H */
