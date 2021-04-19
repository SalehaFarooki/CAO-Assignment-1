#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    
    // Number of lines for the alphabet's pattern
    int h = 5;

    //PRINTING N
    int i, j, c = 0;
    for (i = 0; i < h; i++) {
        print_str("#");
        for (j = 0; j <= h-1; j++) {
            if (j == h-1)
                print_str("#");
            else if (j == c)
                print_str("#");
            else
                print_str(" ");
        }
        c++;
        print_str("\n");
    }

     //PRINTING U
    for (i = 0; i < h; i++) {
        if (i != 0 && i != h - 1)
            print_str("#");
        else
            print_str(" ");
        for (j = 0; j < h; j++) {
            if (((i == h - 1)
                 && j >= 0
                 && j < h - 1))
                print_str("#");
            else if (j == h - 1 && i != 0
                     && i != h - 1)
                print_str("#");
            else
                print_str(" ");
        }
        print_str("\n");
    }

    //PRINTING S
    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if ((i == 0 || i == h / 2 || i == h - 1))
                print_str("#");
            else if (i < h / 2 && j == 0)
                print_str("#");
            else if (i > h / 2 && j == h - 1)
                print_str("#");
            else
                print_str(" ");
        }
        print_str("\n");
    }

    //PRINTING T
    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if (i == 0)
                print_str("#");
            else if (j == h / 2)
                print_str("#");
            else
                print_str(" ");
        }
        print_str("\n");
    }

}

