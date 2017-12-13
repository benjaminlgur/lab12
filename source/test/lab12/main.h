/*
  Author: <Benjamin Gur>
  Course: {136}
  Instructor: <Prof. Pajula>
  Assignment: <Lab 12>

  This program is a multifile implementation of the input validation lab with a option to choese charecter for the pixels.
*/

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
//postcondition: Will draw a circle based on the arguments.
extern void drawPixel(char c);
//Precondition: Any ASCII char should be used to output a pixel for shapes.
//Postcondition: Will output a single char as defined by c. 
extern char pixelSelect();
//Postcondition: Will propmpt the user to select a charcter to use as a pixel will then return that inputed charecter.

/*
In step 2 I am unable to create any of the object files except for pixel.o becuse the program can't see the interdependent functions of the programs due to not having prototypes.

Test cases
The program acts the same in regards to the shape parameters

In regards to the draw pixel function using any charcter  such as %, f, 1, +, or ? will lead to using that charecter as a pixel in the program.

Using more than one charecter such as apple, we. 1234, or @#$@$#, will lead to an error message being output and the user will be reprompted this will continue until a single charecter input.
*/
