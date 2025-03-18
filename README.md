# ASCII Lena Image Processor

## Overview
This C program processes and displays an ASCII representation of the Lena image using different transformations. It includes functions for:
- Printing a section of the Lena image as ASCII art
- Calculating the average grayscale value of a section of the image
- Displaying a mirrored version of the Lena image

## Features
- **PrintLena(x, y, i, j):** Displays an ASCII representation of the Lena image from coordinates `(i, j)` to `(x, y)`.
- **GrayscaleValue(xStart, yStart, xEnd, yEnd):** Computes and prints the average grayscale value for a given section of the image.
- **LenaMirror():** Prints a horizontally mirrored version of the Lena image.

## Installation & Usage
1. Ensure you have a C compiler (such as GCC) installed.
2. Include the `lenaArray.h` file, which contains the pixel values of the Lena image.
3. Compile the program using:
   ```sh
   g++ -o lena main.c 
   ```
4. Run the program:
   ```sh
   ./lena.exe
   ```

## Example Output
The program will print ASCII representations of the Lena image and display the average grayscale values for selected sections.

## Notes
- The ASCII symbols used for rendering are based on intensity mapping to 70 different characters.
- The grayscale computation works within a defined region of the Lena image.

## Author
- **Anoploit**
- First written on **08-03-2022**
- First ever C project
