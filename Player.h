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
  deque<Skill> playerSkills;
  deque<NPC> companions;
  Location* currentLocation;
  Attributes playerAttributes;
  Clothing playerClothing;
};

#endif
