#include "main.h"

void rectangle(int w, int h){
    char c = pixelSelect();
    int count = 0;
    while (count < w){
        drawPixel(c);
        count++;
    }
    cout << endl;
    if (h <=1){
        return; //this is for if the rectangle is only one line high.
    }
    int countTwo = 2; //countTwo = 2 becuse 2 lines will be full of *.
    int countThree = 2; //countThree = 2 becuse there are * on either end.
    while (countTwo < h){ //This while loop loops during the poi
        drawPixel(c);
        countTwo++;
        while (countThree < w){
            cout << " ";
            countThree++;
        }
        drawPixel(c);
        cout << endl;
        countThree = 2; //This resets the above while loop.
    }
    int countFour = 0;
    while (countFour < w){
        drawPixel(c);
        countFour++;
    }
    cout << endl;
    return;
}
