#ifndef PLAYER_H
#define PLAYER_H

#include <sting>
using std::string;
#include <deque>
using std::deque;
#include <iostream>
using std::cout; using std::endl;

#include "NPC.h"
#include "Item.h"
#include "Quest.h"
#include "Skill.h"
#include "Location.h"
#include "Attributes.h"

class Player{
  string name; 
  string gender; //m or f
  string hairColor; //from hairColor deque
  string body; //from bodyType deque
  string skinColor; //from skinColor deque
  deque<Item> inventory;
  deque<Quest> questDeque;
  deque<NPC> companions;
  Location* currentLocation;
  Attributes playerAttributes;
  Clothing playerClothing;
  
  //dest is requested destination
  void move (string dest,Location* start){
    for(auto elem : location->destinations){ //go through possible destinations
      if(elem.first->name==dest && elem.second ==1){ //if destination exists and path is open
        currentLocation = elem.first; //perform the move
        cout << "***" << currentLocation.name << "***" << endl;
        if(currentLocation.status == 0){ //if the location has not been visited before
          cout << currentLocation.description << endl; //print the description
          currentLocation.status = 1; //record that location has been visited
        }
      }
      else{
        cout << "Invalid move";
      }
    }
  }
  
//  void pickUp (string target, Location* current){
//    for(auto elem : location->)
//  }
};

#endif
