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
	string _name;
	string _gender;
	string _hairColor;
	string _skinColor;
	string _bodyType;
	Location* _charLocation;
	deque<Item> _inventory;

	Character(string name, string gender, string hairColor, string skinColor\
string bodyType, location* charLocation,deque<Item> inventory){
	_name = name;
	_gender = gender;
	_hairColor = hairColor;
	_skinColor = skinColor;
	_bodyType = bodyType;
	_charLocation = charLocation;
	for(auto elem : inventory){
		_inventory.push_back(elem);	
	}
}

	Character() = default;

};

class Player : public Character {
public:
    //these are the types of attributes each character has but we don't know
    //what they do yet
    long _intelligence = 0;  // 
    long _strength = 0;      //  
    long _friendliness = 0;  // 
    long _charisma = 0;      // 
    long _positivity = 0;    //
    long _manipulation = 0;  // 
    long _reliability = 0;   //
    long _intimidation = 0;  // player can choose to go the intimidation route
    long _reputation = 0;    //

	Player(string name, string gender, string hairColor, string skinColor,\
string bodyType, location* charLocation, deque<Item> inventory, long intelligence,\
long strength, long friendliness, long charisma, long positivity,\
long manipulation, long reliability, long intimidation, long reputation) :
	Character(name, gender, hairColor, skinColor, bodyType, charLocation, inventory),
	_intelligence(intelligence),_strength(strength),_friendliness(friendliness)\
,_charisma(charisma),_positivity(positivity),_manipulation(manipulation),_reliability(reliability),\
_intimidation(intimidation),_repuation(reputation) {}


	Player() = default;



};

class NPC :public Character {
public:
	long opinion; //what the npc thinks about the player
};


#endif
