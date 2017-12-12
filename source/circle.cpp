#include "main.h"

void circle(int r){ //I used internet code as I didnt make the circle in lab 4.
    char c = pixelSelect();
    float console_ratio = 4.0/3.0;
    float a = console_ratio*r;
    float b = r;

    for (int y = -r; y <= r; y++)
    {
        for (int x = -console_ratio*r; x <= console_ratio*r; x++)
        {
            float d = (x/a)*(x/a) + (y/b)*(y/b);
            if (d > 0.90 && d < 1.1)
            {
                drawPixel(c);
            }
            else
            {
                 cout << " ";
            }
        }
        cout << endl;
    }
    return;
}
