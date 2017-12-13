#include "main.h"

void drawPixel(char c){
    cout << c;
}

char pixelSelect(){
    char c;
    string input; //hold input value for validation
    cout << "Choose a charecter you would like to use as a pixel\n";
    cin >> input;
    while(input.length() > 1){
        cerr << "Invalid input. Please reenter\n";
        cin >> input;
    }
    c = input[0];
    return c;
} 
