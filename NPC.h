#ifndef NPC_H
#define NPC_H

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
#include "Clothing.h"

class NPC{
  string name;
  string gender;
  string hairColor;
  string body;
  string skinColor;
  long opinion = 0;
  deque<Item> inventory;
  deque<Skill> NPCSkills;
  deque<Quest> NPCQuests;
  Location* currentLocation;
  Attributes NPCAttributes;
  Clothing NPCClothing;
};

#endif /* NPC_H */
