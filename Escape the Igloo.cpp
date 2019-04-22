/* 
Husky Hacks 3 Entry
Nikhil Bhat
Program Description: Text Based Penguin Themed Escape the Room
*/

#include <iostream>
#include "string"
#include <iomanip>
#include <fstream> 

using namespace std;

int main(){


//Intro 
	std::ifstream f("penguin.txt");
	    if (f.is_open())
		std::cout << f.rdbuf();	
	cout <<endl <<"Press any key & enter to begin.";
	string intro_entry;
	cin >> intro_entry;
	system("CLS");	
	
//Game Start	
cout <<"Pippin the polar bear pilfered our pet Puffle!" <<endl <<"Escape the igloo to rescue him!" <<endl; 
do{	
	cout <<"You're in a cold igloo. The wind howls outside the room." <<endl <<"Do you want to look around the room?" <<endl;
	cout <<"Y or N" <<endl;
	string lookresponse;
	cin >> lookresponse;	
	
	if (lookresponse == "Y"){
			
		cout <<"A window on the wall, a map across from it, a big aquarium and a suitcase on a lounge chair." <<endl;
		cout <<"Which one do you want to explore?" <<endl <<"Map, Suitecase, Window, Aquarium, Bookshelf, Door, Table" <<endl;
		
		string mainresponse;
		cin >>mainresponse;
		
		if (mainresponse == "Window") {
			system("CLS");
			cout << "You see a window. What part of it do you want to look at?"  <<endl;
			
			string windowresponse;
			cin >> windowresponse;
			
			if (windowresponse=="pane" or windowresponse=="windowpane" or windowresponse=="window pane" or windowresponse=="the pane" or windowresponse=="the windowpane") {
				cout << "There seems to be frost covering it. Do you want to clear the frost?" <<endl << "Y or N" <<endl;
				string frost;
				cin >> frost;
					if (frost == "Y"){
						cout << endl <<"You have found a fish! This clue is crucial to solving the final puzzle to escape." <<endl << "Great Job!" <<endl;
					}
					else{
						cout << "Guess we will never know what this frost is covering.";
					}
			}
			else if (windowresponse == "the edge" or windowresponse=="edge" or windowresponse=="panel") {
				cout <<"It looks like there's a note hidden in here!" <<endl <<"Do you want to examine it?" <<endl <<"Y or N?";
				string edgeresponse;
				cin >> edgeresponse;
				if (edgeresponse == "Y") {
					cout <<"Khdu wkh fdoo ri wkh Edug ri Dyrq - kh zloo ohdg brx wr wkh vdsskluh vdoprq." <<endl;
				}
			}
		}
		else if (mainresponse == "Table"){
			//system("CLS");
			cout << "There is a note on the table." <<endl <<"Rubies make a great business deal." <<endl <<"0010 0110 1000 0011" <<endl;
		}
		else if (mainresponse == "Suitecase") {
			cout << "Enter the code to unlock the suitcase?" <<endl;
			string suitcase_response;
			cin >> suitcase_response;
			cout << "\n";
			   if (suitcase_response=="2683") {
					cout << endl <<"You have found a fish! This clue is crucial to solving the final puzzle to escape." <<endl << "Great job!";
				}
				else{
					cout << "You missed out on a good business deal.";
				}
		}
		else if (mainresponse == "Map"){
			system("CLS");
			cout << "You see a map!" <<endl <<"Oh, it looks like you can put something in here. It is set up like a chess board with columns A-G and rows 1-8. In fact, it seems like it requires 3 fish!" <<endl <<"Do you have all 3 fish? If so, enter in the keyword ";
			string mapresponse;
			cin >> mapresponse;
				if (mapresponse=="Y"){
					cout << endl << "Great!" <<endl <<"Time to solve the final puzzle: " <<endl <<"Befour everything, there was the one-fish. Then, in through the geight came the two-fish. Finally, late from the detwour, the red-fish arrived." <<endl ;
					cout << "Where do you want the one-fish to go?";
						string onefresponse;
						cin >> onefresponse;
						if (onefresponse=="B4"){
							cout <<endl << "Great! One down.";
						}
						else{
							cout <<endl <<"Oh no! Incorrect.";
						}
					cout << "Where do you want the two-fish to go?" <<endl;
						string twofishresponse;
						cin >> twofishresponse;
						if (twofishresponse=="G8"){
							cout << endl <<"Great! Two down.";
						}
						else{
							cout <<endl << "Oh no! Incorrect.";
							}
					cout << "Where do you want the red-fish to go?" <<endl;
						string redfishresponse;
						cin >> redfishresponse;
						if (redfishresponse=="D2"){
							cout <<endl << "Great! We're all done!";
						}
						else{
						cout <<endl << "Oh no! Incorrect.";
						}
				
				}
				else{
					cout <<endl << "Hopefully soon!";
				}

		}					
		else if (mainresponse == "Aquarium") {
			system("CLS");
			cout << "You see a fishtank." <<endl <<"Do you want to go over to it?" <<endl;
			cout << "Y or N" <<endl;
			string fishresponse;
			cin >> fishresponse;
				if (fishresponse=="Y"){
					cout << "\n";
					cout << endl << "Hey! Look, that's just the one-fish we need!" <<endl <<"Take the fish in order to solve the final puzzle.";
						
				}
				else{
					cout <<endl << "Maybe later...";
				}

		}
		else if (mainresponse == "Bookshelf") {
		
				system("CLS");
				cout <<"You see a gargantuan bookshelf, with several books along the walls." <<endl <<"Do you want to look at the books? " <<"Y or N" <<endl;
				string bookresponse;
				cin >>bookresponse;
			do {
			
				if (bookresponse == "Y") {
					system("CLS");
					std::ifstream f("books.txt");
					    if (f.is_open())
	       				std::cout << f.rdbuf();	
				cout <<"Which book do you want to read?" <<endl <<"A-J" <<endl;
				char bookchoice;
				cin >>bookchoice;
				
					switch(bookchoice)	{
						case 'A' :	
							cout << "Now that is one of the funniest books I've ever read!";
							break;
						case 'B' :
							cout <<"You like cooking, dont you?" <<endl;
							break;
						case 'C' :
							cout <<"I mean...you read what you want there" <<endl;
							break;
						case 'D':
							cout <<"War won't get your puffle back, I'll tell you that" <<endl;
							break;
						case 'E' :	
						case 'F' :
						case 'G' :
							cout <<"That is definetely a book" <<endl;
							break;
						case 'J':
							cout<<"Low key one of my fav books" <<endl;
							break;	
						default : 
							switch (bookchoice){
								case 'H' :
								std::ifstream f("nicknames.txt");
									if (f.is_open())
									std::cout << f.rdbuf();
									cout<<endl;
									break;
							}
							cout <<"Are you sure about that?" <<endl;
							break;
						case 'I' :
							cout <<"The Tempest" <<endl <<"By William Shakespeare" <<endl <<"Published in 1601" <<endl <<"Turn Page?" <<endl <<"Y or N?" <<endl;
							string turnpage;
							cin >> turnpage;
								if (turnpage == "Y"){
									cout << "Once you have reached the bottom, you can rise again." <<endl <<"The birth of this novel, the birth of an idea, many things start from the lowest place." <<endl << "Find the lowest place, and the birth of the novel will lead you to what you seek. " <<endl;
								}
								else {
									
								}
							break;
					
					}
			
				cout <<"Do you want to keep looking at books?" <<endl <<"Y or N" <<endl;
				cin >> bookresponse;
				
				}
				else {
					cout <<"Maybe next time!" <<endl;
				}
			}while(bookresponse == "Y");
			
		}
			
	}
	
	else if (lookresponse == "N") {
	cout <<"Are you sure?" <<endl;
	cout <<"Type STOP to end the game ";
	cin >> intro_entry;
	}
	else{
		cout <<"Response Invalid" <<endl;
	}
}while(intro_entry != "STOP");

return 0;
}




