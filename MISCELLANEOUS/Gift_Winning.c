#include <stdio.h>

void main()
{
    char PASS;
    printf("If you passed only in Maths type \'M\'\nIf you passed only in Science type \'S\'\nIf you passed in both Maths and Science type \'B\' : ");

    scanf("\n%c",&PASS);
    printf("Value of PASS is %c\n", PASS);
    if (PASS == 'M')
    {printf("Congratulations you got 15 rupees as you passed in Maths !!");}

    else if (PASS == 'S')
    {printf("Congratulations you got 15 rupees as you passed in Science !!");}

    else if (PASS == 'B')
    {printf("Congratulations you got 45 rupees as you passed in both Maths and Science !!");}

    else
    {printf("Please enter only specified value "); }

}