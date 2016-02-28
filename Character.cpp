#include <iostream>
using std::cout; using std::endl;

#include <string>
using std::string;

#include <utility>
using std::pair;

#include "Location.h"
#include "Character.h"
#include <algorithm>
using std::find;

//input is the string that the user types into the terminal
//pl is the address of the object Player
//cur is the current location
	//cur has pointers to all locations that can be accessed at the player's current position
void Player::move (string input){
	//loop through possible location destinations
        for(auto elem : _charLocation->_destinations){
		//if the string the user gives matches a visitable location, cur becomes that address
                if((elem.first->_name == input) && (elem.second == 1)){
			_charLocation = elem.first;
                        cout<< "***" << elem.first->_name << "***"<<endl;
			if(elem.first->_visited==0){
				cout << elem.first->_description << endl;	
				elem.first->_visited=1;
			}
		}
		else{
			cout<< "You cannot access this location."<< endl;
                }
        }
}

//if an item is in the same location as the user, put item into user's inventory
//input is the item name that the player is attempting to pick up
//pl is the player, cur is the current location
void Player::pickUp (string input){
	//go through a deque of all the items in the cur(rent) location
	if(_charLocation->_objects.size()==0){
		cout << "There are no items to pick up." << endl;
	}
	for(auto elem : _charLocation->_objects){
		//make sure item name is entered in correctly and can be picked up
		if((elem->_name == input) && (elem->_pickUp == 1) && (elem->_visable == 1)){
			_inventory.push_back(elem);//push back item onto inventory
			cout<< elem->_name<< " added to inventory."<< endl;
			_charLocation->_objects.erase(find(_charLocation->_objects.begin(),\
_charLocation->_objects.end(),elem));
		}
		else{
			if(elem->_name == input && elem->_pickUp == 0 && elem->_visable ==1){
				cout << "You cannot pick up this item." << endl;
			}
			else{
				cout << "The item \"" << input <<  "\" does not exist." << endl;
			}
		}
	}
}


//Gives info about the object in question
//item name parameter is the item we are examining
//pl is the player's address so we can find out info on him
//loc is the current location
void Player::examine(string input){
	bool printed = 0;
	//loop for items in location
	for(auto elem : _charLocation->_objects){
		if((elem->_name == input) && elem->_visable == 1){
			cout << elem->_description << endl;
			printed = 1;
		}
	}
	for(auto elem : _inventory){
		if(elem->_name == input){
			cout << elem->_description << endl;
			printed = 1;
		}

	}
	if(printed == 0){
		cout << "This item does not exist." << endl;
	}
}
	
//this needs to be expanded to describe the items that are in a location
void Player::lookAround(){
	cout << _charLocation->_description << endl;	
}



