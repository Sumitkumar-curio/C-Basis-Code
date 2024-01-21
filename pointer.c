#include <stdio.h>


float average(float a, float b) {
        return (a+b)/2;
    }


int main(){
    int a =98;
    printf("%d\n ",a);
    int *ptr= NULL;
    ptr = &a;
    *ptr = 998;
    printf("%d",a);

    return 0;

}
