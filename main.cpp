#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <deque>
using std::deque;
#include <utility>
using std::make_pair; using std::pair;
#include "Location.h"
#include "Character.h"
#include "Item.h"

int main(){
	//making locations
	Location startLoc("heaven");
	startLoc._description = "stratin the game";
	Location hell("hell");
	hell._description = "fiery abyss mother fucker";
	//making paths
	hell._destinations.push_back(make_pair (&startLoc,1));
	pair<Location*,bool> destPair = make_pair (&hell,1);
	startLoc._destinations.push_back(destPair);
	//building Player
	deque<Item*> stuff;
	Player pl("Dan","f","brown","white","fat",&startLoc,stuff,0,0,0,0,0,0,0,0,0);
	//creating Items
	Item pickfork("pickfork", "pickfork. minors use it to pick their teetch", 1,1, &hell);
	hell._objects.push_back(&pickfork);
	Item pitchaxe("pitchaxe", "a heavy axe to be thrown by a pitcher", 1,1, &startLoc);
	startLoc._objects.push_back(&pitchaxe);

/*
	//actions
	dan.move("hell");
	dan.pickUp("pickfork");
	dan.examine("pickfork");
	dan.move("start loc");
	dan.examine("pitchaxe");
	dan.move("hell");
	dan.lookAround();
*/	




	deque<string> move = {"move","go"};
	deque<string> pickUp = {"pick up"};
	deque<string> examine = {"examine"};
	deque<string> lookAround = {"look around"};
	string input; //the command that the user gives
	//deque of string deques holds possible commands
	//outer deque contains categories that each corrospond to a possible action
	//the strings in the inner deques are synonyms that corrospond to these actions
	deque<deque<string>> actions = {move,pickUp,examine,lookAround};
	long actionNum;
	long todo;
	bool success;
	//main game loop. will continue until saved or exited
	for(;;){ 
		success = 0; //used in all actions to determine if action was completed
		actionNum = -1; //index in actions deque
		todo = -1; //if a viable command is found, it is saved here
		getline(cin, input,'\n'); //do not count spaces as separate input
		cout << endl;
		for(auto elem : actions){
			++actionNum; //increment through actions elements
			for(auto word : elem){ //increment through synonyms
				if(input.find(word)!=string::npos){ //if viable word is found
					todo = actionNum; //save current actions inxdex
				}
			}
		}		
		if(todo == -1){ //if no viable action was found
			cout << "Invalid command." << endl;			
		}
		else if(todo == 0){ //perform action move
			for(auto elem : pl._charLocation->_destinations){ //iterate through possible destinations
				//if a viable destination is found and a move has not already been made
				if(input.find(elem.first->_name)!=string::npos && success ==0){
					pl.move(elem.first->_name); //make the move
					success = 1; //update to reflect move having been made	
				}
			}
			if(success == 0){ //no valid destination found
				cout << "Invalid move." << endl;
			}
		} 
		else if(todo == 1){ //perform action pick up
			for(auto elem : pl._charLocation->_objects){ //iterate through available objects
				//if a viable object is found and an object has not already been picked up
				if(input.find(elem->_name)!=string::npos && success == 0){
					pl.pickUp(elem->_name); //perform pickup action
					success = 1; //indicates item has been picked up
				}
			}
			if(success == 0){ //if no valid item was found to pick up
				cout << "Invalid item name." << endl;
			}
		} 
		else if(todo == 2){

		} 
		else if(todo == 3){

		} 
		cout << endl;
	}
	return 0;

}
