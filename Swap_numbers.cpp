#include <iostream>
using namespace std;
void swap (int &x, int &y) {
  int a = x; 
  x = y; 
  y = a; 
  }

int main() {
  int x, y;
  cout << "Enter a number x: ";
  cin >> x;
  cout << "Enter a number y: ";
  cin >> y;
  swap(x,y);
  cout << "The new value of x is " << x<< endl;
  cout << "The new value of y is " << y<< endl;
  }