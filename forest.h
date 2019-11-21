using namespace std; 


void forest()
{
cout << "You are walking through the forest you hear footsteps and a growl from behind a flapping sound suddenly looking up you see a Dragon \n What will you do? \n";

cout<< "1. Battle the Dragon\n";

cout<< "2. Run away\n";

string answer;

cin >> answer;

if (answer == "1")

{

cout<<"You grab a sword and shield to defend and kill it! \n";
cout << "Your life score is: " << ++point << endl;  
}

else if (answer == "2")

{

cout<<"You retreat. But the dragon burns flyies after you. ";
cout << "\nYour life score is: " << --point << endl; 
}

 
if(point == 0 ) 
{
  cout << "Sorry you lose" << endl; 
  exit(0);
}


}