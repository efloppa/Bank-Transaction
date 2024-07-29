#include <iostream>

using namespace std;

int main() {

char repeat = 'y';

do{

double savings = 99000;
int transaction;
double transaction2;
char depwith;
  
  cout << "lecome to DDK bank, how many transactions today?: ";
cin >> transaction;

for (int i = 0 ; i < transaction ; i++ ){
 
cout << "would you like to depsit or withdraw? (d/w): ";

// fohe user

cin >> depwith;

      if (depwith == 'd'){

    cout << "You currently have " << savings << " dollars in your bank account, how much would you like to deposit?: ";

    cin >> transaction2;

    savings = transaction2 + savings;

    cout << "You now have " << savings << " dollars in your bank account.";
      }
        
      if (depwith == 'w'){

      cout << "You currently have " << savings << " dollars in your bank account, how much would you like to withdrawl?: ";

    cin >> transaction2;

    savings = savings - transaction2;

    cout << "You now have " << savings << " dollars in your bank account ";

  
    
  }//end of if statement for deposit

   //end of for statement


}// end of loop 

  
  cout << "Would you like to make another transaction? (y/n): ";
  
  cin >> repeat;
} while (repeat == 'y' || repeat == 'Y');
  
cout << "Thank you for using DDK bank, have a nice day!";
  
return 0;

}