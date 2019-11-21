#include <iostream>
#include <string> 
#include <iostream>
#include "story.h"
#include "Dragon.h"
#include "castle.h"
#include "forest.h"


using namespace std; 

int main() 
{
string answer; 

  
start();
cout << "\n" << endl; 
Dragon();
cout << "\n" << endl; 
castle();
cout << "\n" << endl; 
forest();

cout << "\nYou finished all the levels! Your score is " << point << endl; 
 // This is super basic and easy for this in class assignment. we can add randomness to it to make it a lot more fun. 
 return 0; 
}