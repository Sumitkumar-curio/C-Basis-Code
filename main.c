#include <stdio.h>

int main(){

    // Comment by // single line comment
    /* This is multiple 
    line comment*/

    int a= 7; //2 byte
    float b = 8.0; //4 byte
    char c ='t'; // 1byte
    unsigned int integer = 8;
    long integer1 = 8;
    double myfloat1 =8; // 15 decimal places precision
    long double myfloat2 =8; // 19 decimal places precision

    printf("the ize taken by int is %d\n", sizeof(int));
    printf("the ize taken by int is %d\n", sizeof(float));
    printf("the ize taken by int is %d\n", sizeof(double));

    int sumit =21;

    printf("hello %d",sumit);

    

    
    return 0;
}