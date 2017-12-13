/*
  Author: <Benjamin Gur>
  Course: {136}
  Instructor: <Prof. Pajula>
  Assignment: <Lab 12>

  This program is a multifile implementation of the input validation lab with a option to choese charecter for the pixels.
*/

#include "main.h"

void triangle(int side){
    char c = pixelSelect();
    int  count, countTwo;
    count = side;
    countTwo = side;
    while (countTwo > 0){
        while (count > 0){
            drawPixel(c);
            count--;
    }
        cout << endl;
        countTwo--;
        count = countTwo; //Becuse countTwo is decremented in the above line not only does it limit the loop but when count is eqalised to it it make the * per row one less.
    }
    return;
}
