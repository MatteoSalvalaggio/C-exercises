#include <iostream>
#include <cmath>
using namespace std;

float distance (float cx, float cy, float x, float y) {
  return sqrt((cx-x)*(cx-x) + (cy-y)*(cy-y));
  }

int main() {
    float x1, y1, c1, c2, radius;
    cout << "Program to find the given point inside or outside the circle\n";
    cout << "Enter the coordinate x of the center of the circle: ";
    cin >> c1;
    cout << "Enter the coordinate y of the center of the circle: ";
    cin >> c2;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "Enter the coordinate x of the point: ";
    cin >> x1;
    cout << "Enter the coordinate y of the point: ";
    cin >> y1;
    if(distance(c1, c2, x1, y1) <= radius)
      cout << "The given point is inside the circle";
    else
      cout << "The given point is outside the circle";
  }