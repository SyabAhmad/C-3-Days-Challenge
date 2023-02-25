//
// Created by syabs on 2/23/2023.
//
#include<stdio.h>
int main()
{
    int age = 23;
    if(age <=18)
    {
        printf("You are child");
    } else if(age >= 23 && age <= 50)
    {
        printf("You are Young");
    }else{
        printf("You are Old Enough");
    }
    return 0;
}
