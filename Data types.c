// variables and data type

#include<stdio.h>

int main(){
    //declare variables 
    char grade;//%c
    char name[18];//%s
    int age;//%d
    float marks;//%f

    printf("Enter your grade;\t");
    scanf("%c",&grade);

    printf("Enter your name;\t");
    scanf("%s",&name);

    printf("Enter your age;\t");
    scanf("%d",&age);

    printf("Enter your marks\t");
    scanf("%f",& marks);

    printf("The grade is%c\n",grade);
    printf("My name is%s\n",name);
    printf("I am%d years old\n",age);
    printf("I scored%.2fmarks in KCSE\n",marks);


    return 0;
}