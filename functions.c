//
// Created by syabs on 2/23/2023.
//
#include<stdio.h>
int doSum(int value1, int value2)
{
    int sum =value1+value2;
    return sum;
}
int main()
{
    int result = doSum(1,2);
    printf("%i", result);
    return 0;
}