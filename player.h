#ifndef __PLAYER_H_INCLUDED__
#define __PLAYER_H_INCLUDED__

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
  Location currentLocation;
}

#endif
