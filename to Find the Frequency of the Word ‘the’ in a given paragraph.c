/*
 *  C program to accept a string and find the number of times the word
 * 'the' appears in that string
 */
#include <stdio.h>
 
void main()
{
    int count = 0, i, times = 0, t, h, e, space;
    char string[100];
 
    puts("Enter a string:");
    gets(string);
   /*   Traverse the string to count the number of characters */
    while (string[count] != '\0')
    {
        count++;
    }
    /*   Finding the frequency of the word 'the' */
    for (i = 0; i <= count - 3; i++)
    {
        t =(string[i] == 't' || string[i] == 'T');
        h =(string[i + 1] == 'h' || string[i + 1] == 'H');
        e =(string[i + 2] == 'e'|| string[i + 2] == 'E');
        space =(string[i + 3] == ' ' || string[i + 3] == '\0');
        if ((t && h && e && space) == 1)
            times++;
    }
    printf("Frequency of the word 'the' is %d\n", times);
}
