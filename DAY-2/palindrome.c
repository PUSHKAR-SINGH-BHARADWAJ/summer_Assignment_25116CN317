#include<stdio.h>
int main(){
    int n,temp,rev=0,dig;
    printf("Enter the value of n ");
    scanf("%d",&n);
    temp = n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}