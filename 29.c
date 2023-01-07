#include<stdio.h>

int main()
{
    int myage = 19; // an int variable
    int* ptr = &myage;// a pointer variable, with the name ptr, that stores the adress

    printf("%d\n",myage); //output value of my age(43)

    printf("%p\n",&myage); //output the adress pf my age

    printf("%p\n",ptr); //output the adress of myage with myage with the pointer

    return 0 ; //returner

}
