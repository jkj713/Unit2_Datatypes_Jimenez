//Jennifer_Jimenez_COSC 1436-57002
//Repl.it tool 1-23-2020
//Counting Pennies

#include <iostream>
using namespace std;

int main ()
{
  //variable declaration and initialization
  int input = 0;
  int Dollars = 0, Quaters = 0, Dimes = 0, Nickels = 0, Pennies = 0;
  int Dollar_Remainder = 0, Quaters_Remainder = 0, Dimes_Remainder = 0, Nickels_Remainder = 0, Pennies_Left_Over = 0;

  //Ask the user to input the number of pennies
  cout << "Please enter the number of pennies you have: ";
  cin >> input;

  //Process
  Dollars = (input/100);
  Dollar_Remainder = (input%100);
  Quaters = (Dollar_Remainder/25);
  Quaters_Remainder = (Dollar_Remainder%25);
  Dimes = (Quaters_Remainder/10);
  Dimes_Remainder = (Quaters_Remainder%10);
  Nickels = (Dimes_Remainder/5);
  Nickels_Remainder = (Dimes_Remainder%5);
  Pennies_Left_Over = Nickels_Remainder;

  //Output
  cout << "Dollars: " << Dollars << endl;
  cout << "Quaters: " << Quaters << endl;
  cout << "Dimes: " << Dimes << endl;
  cout << "Nickels: " << Nickels << endl;
  cout << "Pennies: " << Pennies_Left_Over << endl;
 return 0;
}
