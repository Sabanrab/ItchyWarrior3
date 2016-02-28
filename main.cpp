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
	Location heaven("heaven");
	heaven._description = "stratin the game";
	Location hell("hell");
	hell._description = "fiery abyss mother fucker";
	//making paths
	Location startLocation("");
	startLocation._destinations.push_back(make_pair(&heaven,1));
	hell._destinations.push_back(make_pair (&heaven,1));
	pair<Location*,bool> destPair = make_pair (&hell,1);
	heaven._destinations.push_back(destPair);
	//building Player
	deque<Item*> danStuff;
	deque<Item*> godStuff;
	deque<Item*> satanStuff;
	Player pl("Dan","f","brown","white","fat",&startLocation,danStuff,0,0,0,0,0,0,0,0,0);
	//Building NPCs
	NPC god("God", "m", "white","really fucking white.. like he's never seen the sun or something",\
"Kinda pudgy but you have a feeling he's hiding some strength",&heaven,godStuff,0);
	NPC satan("Satan", "m", "brown","skin so red you feel like making a joke about it","ripped af",&hell,\
satanStuff, 1);
	//creating Items
	Item pickfork("pickfork", "pickfork. minors use it to pick their teetch", "under Satan",1,1, &hell);
	hell._objects.push_back(&pickfork);
	Item pitchaxe("pitchaxe", "a heavy axe to be thrown by a pitcher", "on a fucking cloud",1,1, &heaven);
	heaven._objects.push_back(&pitchaxe);

	deque<string> move = {"move","go"};
	deque<string> pickUp = {"pick","pickup"};
	deque<string> examine = {"examine","look at"};
	deque<string> lookAround = {"look around"};
	string input; //the command that the user gives
	//deque of string deques holds possible commands
	//outer deque contains categories that each corrospond to a possible action
	//the strings in the inner deques are synonyms that corrospond to these actions
	deque<deque<string>> actions = {move,pickUp,examine,lookAround};
	long actionNum;
	long todo;
	bool success;
	
	cout<<endl<<"Welcome to ItchyWarrior3: part I"<< endl << endl;
	pl.move("heaven");

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
		else if(todo == 2){//perform examine action
			for(auto elem : pl._charLocation->_objects){ 
				if(input.find(elem->_name)!=string::npos && success == 0){
					pl.examine(elem->_name); 
					success = 1;
				}
			}
			for(auto elem : pl._inventory){ 
				if(input.find(elem->_name)!=string::npos && success == 0){
					pl.examine(elem->_name); 
					success = 1;
				}
			}
			if(success == 0){
				cout << "Invalid item name." << endl;
			}

		} 
		else if(todo == 3){//perform look around action
			pl.lookAround();
		} 
		cout << endl;
	}
	return 0;

}
