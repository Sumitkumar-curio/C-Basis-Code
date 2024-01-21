#include <stdio.h>
#include <string.h>


struct Books{   
    char name[50];
    char author[50];
    int price;

} book;

void printStruct(struct Books bk){
    printf("Book name is %s\n", bk.name);
    printf("Author name is %s\n", bk.author);
    printf("Book price is %d\n", bk.price);
}

int main(){
    struct Books bk1, bk2;
    strcpy(bk1.name, "C programming");
    strcpy(bk1.author, "Denis richie");
    bk1.price = 500;
    strcpy(bk2.name, "C programming");
    strcpy(bk2.author, "Denis richie");
    bk1.price = 100;
    printStruct(bk1);
    printStruct(bk2);
}