#ifndef PLAYER_H
#define PLAYER_H

#include <sting>
using std::string;
#include <deque>
using std::deque;

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
    bool valid = 0; //if the destination location is ok
    for(auto elem : location->destinations){
      if(elem.first->name==dest && elem.second ==1){
        playerLocation
      }
    }
  }
};

#endif
