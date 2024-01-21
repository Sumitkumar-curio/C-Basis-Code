#include <stdio.h>
#include <string.h>

int main(){
    char name[3]= {'m','y','\0'};
    char str1[65], str2[98], str3[32];
    strcpy(str1, "Zarry");
    strcpy(str2, "Zarry");
    strcat(str1, str2);
    printf("%d", strcmp(str1,str2));
    return 0;

}