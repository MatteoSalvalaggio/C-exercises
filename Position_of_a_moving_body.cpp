#include <iostream>
using namespace std;
float position (float x0, float v, float t, float a) {
  return x0 + v*t + t*t/(2*a);
}
int main() {
  float x0, v, a, t;
  float count = 0;
  int i;
  cout << "Enter the initial position, the speed and the acceleration: ";
  cin >> x0;
  cin >> v;
  cin >> a;
  cout << "How many times you want to display the position of the moving body? ";
  cin >> i;
  cout << "How often (in seconds) you want to update the position of the moving object? ";
  cin >> t;
  for (int f = 0; f < i; f++) {
    cout << "At time " << count << " the position is " << position(x0, v, count, a) << endl;
    count +=t;
    }
}