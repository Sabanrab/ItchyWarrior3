#ifndef PLAYER_H
#define PLAYER_H

#include <sting>
using std::string;

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
