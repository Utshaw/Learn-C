/*****from dust i have come, dust i will be*****/

//header file where scanf is implemented
#include<stdio.h>

int main()
{
    //scanf("");

    int i; float f; double d; char ch;
    unsigned int x;

    //int
    scanf("%d",&i);

    //float
    scanf("%f",&f);

    //double
    scanf("%lf",&d);

    //unsigned int
    scanf("%u",&x);
    printf("%u\n",x);

    //if negative is given as input for unsigned..
    //it will give INT_MAX-the number given

    //char
    //space before %c is required otherwise it may not be read
    scanf(" %c",&ch);
    printf("%c\n",ch);

    //string
    char str[10];
    scanf("%s",&str);
    printf("%s\n");

    return 0;
}

/*
1. https://stackoverflow.com/questions/13710867/problems-with-character-input-using-scanf
2. https://stackoverflow.com/questions/5169692/assigning-negative-numbers-to-an-unsigned-int
*/
