#include "main.h"

void drawPixel(char c){
    cout << c;
}

char pixelSelect(){
    char c;
    cout << "Choose a charecter you would like to use as a pixel\n";
    cin >> c;
    return c;
} 
