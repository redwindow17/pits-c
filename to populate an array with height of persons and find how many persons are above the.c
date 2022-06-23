/*
 * C program to accept the height of a person in centimeter and
 * categorize the person based on height as taller, dwarf and
 * average height person
 */
 
#include <stdio.h>
void main()
{
    float height;
 
    printf("Enter  the Height (in centimetres) \n");
    scanf("%f", &height);
    if (height < 150.0)
        printf("Dwarf \n");
    else if ((height >= 150.0) && (height <= 165.0))
        printf(" Average Height \n");
    else if ((height > 165.0) && (height <= 195.0))
        printf("Taller \n");
    else
        printf("Abnormal height \n");
}
