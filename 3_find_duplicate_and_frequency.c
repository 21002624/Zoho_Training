#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter string : ");
    gets(a);
    int length=0;
    while (a[length]!='\0' && a[length]!='\n')
    {
        length =length+1;
    }
    int count;
    // printf("length of the string : %d",length);
    for(int i=0;i<length;i++){
        count =1;
        while(i<length-1 && a[i]==a[i+1]){
            count++;
            i++;
        }
        if(count>1){
            printf("The Element %c has %d frequency\n",a[i],count);
        }
    }
    printf("%d",count);
    
}