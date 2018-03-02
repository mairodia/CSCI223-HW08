// =================================================================================
// File: main.cpp
// =================================================================================
// Programmer: Jennifer King
// Project: Multiple Modules
// Date: 2/28/18
// Professor: Scott Edwards
// Class: CSCI 223F | TR 4:30PM
// Description:
//              This program prompts the user for an integer value and displays the value
//      in base 8 (octal) and base 16 (hexadecimal).
// =================================================================================

#include <stdio.h>
#include "dispoct.h"
#include "disphex.h"

int main(void)
{
    auto int myInt;

    printf("Please enter a base ten integer: ");
    scanf("%d", &myInt);

    DispOct(myInt);
    DispHex(myInt);

    return 0;
}
