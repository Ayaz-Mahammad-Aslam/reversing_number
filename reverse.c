/* Write a program to reverse a given number in c */
#include<stdio.h>
int main()
{
    int n,reverse = 0,rem;
    printf("Enter a number: \n");
    scanf("%d",&n);
    while(n!=0)
    {
        rem = n%10;
        reverse = reverse*10+rem;
        n/=10;
    }
    printf("reverse number is %d",reverse);
    return 0;
}