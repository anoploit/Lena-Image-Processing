#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "lenaArray.h"

/*
First time programming in C
By Anoploit
08-03-2022
*/

// REF: http://paulbourke.net/dataformats/asciiart/, I used 70 ASCII values.

const char symbols[70] = "$@B%8&WM#*oahkbdpqwmZO0QLCJUYXzcvunxrjft/\\|()1{}[]?-_+~<>i!lI;:,^`'.";

// Fill values for x and y (100 and 400)

// Parameters in a function that should print both Lena images.
// Average grayscale value in a separate function.

int lenaCol = 512;
double grayvalueNormaliser = 255.0;

void GrayscaleValue(int xStart, int yStart, int xEnd, int yEnd)
{
    float totalValue = 0;
    for(int i = xStart; i < xEnd; i++){
        for(int j = yStart; j < yEnd; j++){
            totalValue += lena[i][j];
        }        
    }
    int xSum = xEnd - xStart;
    int ySum = yEnd - yStart;
    printf("The average pixel value is: %f", totalValue / (xSum * xSum));
}

void LenaMirror()
{
    for (int i = 0; i < lenaCol; i++)
    {
        for (int j = lenaCol; j > 0; j--)
        {
            int pixelValue = (lena[i][j] / grayvalueNormaliser) * 5;
            printf("%c", symbols[pixelValue]);
        }
        printf("\n");
    }
}

void PrintLena(int x, int y, int i, int j) 
{
    for (int s = i; s < x; s++)
    {
        for (int v = j; v < y; v++)
        {
            int pixelValue = (lena[s][v] / grayvalueNormaliser) * 5;
            printf("%c", symbols[pixelValue]);
        }
        printf("\n");
    }
}

int main()
{
    PrintLena(400, 400, 100, 100);
    printf("\n");
    GrayscaleValue(300, 300, 400, 400); // Fixed missing parameters
    printf("\n");
    PrintLena(lenaCol, lenaCol, 0, 0);
    printf("\n");
    GrayscaleValue(0, 0, lenaCol, lenaCol); // Fixed missing parameters
    printf("\n");
    LenaMirror();
    return 0;
}
