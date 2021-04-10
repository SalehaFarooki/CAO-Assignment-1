#include "print.h"

// Number of lines for the alphabet's pattern
int height = 5;
// Number of character width in each line
int width = (2 * 5) - 1;
void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    

    //PRINTING N
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        print_str("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                print_str("*");
            else if (j == counter)
                print_str("*");
            else
                print_str(" ");
        }
        counter++;
        print_str("\n");
    }

    //PRINTING U
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            print_str("*");
        else
            print_str(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                 && j >= 0
                 && j < height - 1))
                print_str("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }

    //PRINTING S
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                 || i == height - 1))
                print_str("*");
            else if (i < height / 2
                     && j == 0)
                print_str("*");
            else if (i > height / 2
                     && j == height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }

    //PRINTING T
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                print_str("*");
            else if (j == height / 2)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }

}

// Function to print the pattern of 'N'
void printN()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++) {
        print_str("*");
        for (j = 0; j <= height; j++) {
            if (j == height)
                print_str("*");
            else if (j == counter)
                print_str("*");
            else
                print_str(" ");
        }
        counter++;
        print_str("\n");
    }
}

// Function to print the pattern of 'U'
void printU()
{
    int i, j;
    for (i = 0; i < height; i++) {
        if (i != 0 && i != height - 1)
            print_str("*");
        else
            print_str(" ");
        for (j = 0; j < height; j++) {
            if (((i == height - 1)
                 && j >= 0
                 && j < height - 1))
                print_str("*");
            else if (j == height - 1 && i != 0
                     && i != height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}

// Function to print the pattern of 'S'
void printS()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if ((i == 0 || i == height / 2
                 || i == height - 1))
                print_str("*");
            else if (i < height / 2
                     && j == 0)
                print_str("*");
            else if (i > height / 2
                     && j == height - 1)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}

// Function to print the pattern of 'T'
void printT()
{
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < height; j++) {
            if (i == 0)
                print_str("*");
            else if (j == height / 2)
                print_str("*");
            else
                print_str(" ");
        }
        print_str("\n");
    }
}


