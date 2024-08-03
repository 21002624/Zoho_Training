#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100];
    int length=0;
    printf("Enter the String : ");
    gets(a);
    while(a[length]!='\0' && a[length] != '\n' ){
        length=length+1;
    }
    int num;
    // printf("Length of the given string is : %d",length);
    for(int i=0;i<length;i++){
        if (isdigit(a[i])) {
            // printf("%d ", i);
            
            // printf("%c ",a[i]);
            num = a[i] - '0';
            // printf("%d",num);
            for (int j = 0; j < num; j++) {
                printf("%c ", a[i-1]);
            }

        }
        
    }
}