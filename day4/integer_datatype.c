#include<stdio.h>
int main(){
    int marks=0;
    printf("Enter a number:\n");
    scanf("%d",&marks);
    printf("value of marks is: %d \n");
    //printing address
    printf("adress of the variable marks: %p",&marks);
    return 0;

}