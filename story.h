using namespace std; 

 int point =5 ;
void start()
{
cout << "You are walking down a road when you are suddenly attacked by a bear!\n What will you do? \n";

cout<< "1. Fight the Bear\n";

cout<< "2. Run away\n";

string answer;

cin >> answer;

if (answer == "1")

{

cout<<"You grab a sword and fight the bear and kill it! \n";
cout << "Your life score is: " << ++point << endl;  
}

else if (answer == "2")

{

cout<<"You run for your life. But the bear catches you. ";
cout << "\nYour life score is now : " << --point << endl; 
}

 
if(point == 0 ) 
{
  cout << "Sorry you lose" << endl; 
  exit(0);
}

}