#include<stdio.h>
int prime(int n){
    int i;
    if (n<=1)
    return 0;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0;

    }
    return 1;
}
int main(){
    int x;
    printf("enter the number");
    scanf("%d",&x);
    if(prime(x))
    printf("%d is prime",x);
    else
    printf("%d is not prime",x);
    return 0;
}