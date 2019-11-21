using namespace std; 

 
void Dragon()
{
cout << "You are going to a cave when you are suddenly attacked by a Red Dragon \n What will you do? \n";

cout<< "1. Battle the Red Dragon\n";

cout<< "2. Run away again \n";

string answer;

cin >> answer;

if (answer == "1")

{

cout<<"You grab a sword and shield to defend and kill it! \n";
cout << "Your life score is: " << ++point << endl;  
}

else if (answer == "2")

{

cout<<"You retreat. But the dragon burns you to cinders. ";
cout << "\nYour life score is: " << --point << endl;  
}


if(point == 0 ) 
{
  cout << "Sorry you lose" << endl; 
  exit(0);
}


}