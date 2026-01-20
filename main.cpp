#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
  int age = 0;

  cout << "What is your age?";
  cin >> age;

  // condition determines if old enough to ride the ride
  
  if (age > 6)
  {
    cout << "You can ride the roller coaster!";
  }
  
  int height = 0;
  
  cout << "What is your height?";
  cin >> height;

  // condition determines tall enough to ride the ride
  
  if (height > 5)
  {
    cout << "You can ride the roller coaster!";
  }
  return 0;
}

// g++ main.cpp -o main
// ./main