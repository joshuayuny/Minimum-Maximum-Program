// Print greater number
#include <iostream>
using namespace std;

int main()
{
  //Define variable
  int num1, num2;
  //Ask user for first number
  cout << "Please enter the first number: ";
  cin >> num1;
  //Ask user for second number
  cout << "Please enter the second number: ";
  cin >> num2;
  //checks the number that is bigger
  cout << "The larger number is: " << (num1 > num2 ? num1 : num2 );
  
}
