#ifndef PLAYER_H
#define PLAYER_H

#include <sting>
using std::string;
#include <deque>
using std::deque;

#include "NPC.h"
#include "Items.h"
#include "Quests.h"
#include "Skilss.h"
#include "Location.h"

class Player{
  string name;
  string gender;
  string hairColor;
  string body;
  string skinColor;
  deque<Items> inventory;
  deque<Quests> questDeque;
  deque<Skills> playerSkills;
  deque<NPC> companions;
  Location currentLocation;
}

#endif
