//Write a C program to display a sort of three  input numbers in ascending order

#include <stdio.h>
int main(){
    int a,b,c,temp;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){
        temp=a;
        a=c;
        c=temp;
    }
    if(b>c) {
        temp=b;
        b=c;
        c=temp;
    }
    printf("Numbers in ascending order: %d %d %d\n",a,b,c);
    return 0;
}