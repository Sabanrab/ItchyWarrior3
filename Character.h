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
	string gender;
	string hairColor;
	string skinColor;
	string bodyType;
	Location* charLocation;
	deque<Item> inventory;
};

class Player : public Character {
public:
    //these are the types of attributes each character has but we don't know
    //what they do yet
    long intelligence = 0;  // 
    long strength = 0;      //  
    long relationship = 0;  // 
    long charisma = 0;      // 
    long positivity = 0;    //
    long manipulation = 0;  // 
    long reliability = 0;   //
    long intimidation = 0;  // player can choose to go the intimidation route
    long reputation = 0;    //
};

class NPC :public Character {
public:
	long opinion; //what the npc thinks about the player
};


#endif
