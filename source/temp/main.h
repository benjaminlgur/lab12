#include <iostream>
#include <string>
#include <limits>
using namespace std;

extern void rectangle(int w, int h);
//precondition: Give hight and width greater then 0
//postcondition: Will draw a rectangle given based on the arguments. 
extern void triangle(int side);
//precondition: Give a non negetive side length.
//postcondtion: Will draw a triangle base on the arguments.
extern void circle(int r);
//preconditon: Give a value greater then 0 for radius.
//postcondition: Willd draw a circle based on the arguments.
extern void drawPixel(char c);
extern char pixelSelect();
