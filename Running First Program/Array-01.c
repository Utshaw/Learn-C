#include <stdio.h>

int main()
{

    //Array declaration with specifying size of the array

     int size = 10;

    int intArr[size];
    int intArr2[] = {1,2,3,4,5,6,7,8,9,10};//Size will be inferred from the contents, here size will be 10
    char charArr[size];
    char charArr2[] = {'a','b','c'};
    double doubleArr[size];
    doubleArr[0] = 10.1234;

    int index = 0;
    for(index = 0;index < size;index++){
        printf("%d\n",intArr2[index]);
    }

    return 0;
}
