//
// Created by syabs on 2/23/2023.
//
#include<stdio.h>
int main()
{
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    array[0] = 12;
    for(int i =0; i<10;i++)
    {
        printf("%i", array[i]);
    }
    return 0;
}