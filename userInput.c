//
// Created by syabs on 2/23/2023.
//
#include<stdio.h>
int main()
{
    char userName[20];
    int age;
    printf("Enter Your Name: \n");
    scanf("%s\n", &userName);
    printf("Enter Your Age: \n");
    scanf("%d\n", &age);
    printf("\nHey Mr.%s",userName);
    printf("\nyour Age is %d",age);
    return 0;
}