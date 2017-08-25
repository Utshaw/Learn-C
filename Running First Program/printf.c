/*****from dust i have come, dust i will be*****/

//header file where printf is implemented
#include<stdio.h>

int main()
{
    //printf("");

    //inside the ""(quotation)
    // we can write whatever we want to print
    // when it comes to printing variables
    // we use specifiers like %d,%f etc.
    printf("C programming is fun :) ");


    //print a newline using "\n"
    printf("\n");


    //print a tab(4 spaces together) using "\t"
    printf("this is \tfar :( \n");

    int i;   float f;    double d;   char ch;
    i=2;    f=3.50;    d=3.696;     ch='c';

    // %d to print integer
    // %f to print float
    // %lf to print double
    // %c to print characters
    printf("%d %f %lf %c\n",i,f,d,ch);


    //it may seem to you that float and double is same,
    //but double can save 64bits while float saves 32bit


    //to print long long int
    //we use %lld or %I64d
    // long long can store 64bit int
    long long int j=10000000000;
    printf("%I64d\n",j);


    // character arrays are called strings.
    // you will learn this thing later
    // for now, just learn how to print one
    char s[15]="Lannister";
    printf("%s\n",s);


    //sometimes it is required to print the integer part
    // of a float or double
    //in that case...
    f=3.14159;
    printf("%.f\n",f);

    d=5.12569;
    printf("%.lf\n",d);


    //now what if you are asked to print after a particular precision
    //( দশমিকের পর এক্স ঘর পর্যন্ত প্রিন্ট)
    printf("%.6f   %.3lf\n",f,d);
    printf("%.2f",f);

    //so using the point will give you the integer part
    // point with any number between % and f will set precision to that number


    return 0;
}
