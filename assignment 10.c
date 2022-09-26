/* 1
#include<stdio.h>
float area(int);
int main()
{
   int r;
    float s;
    printf("enter radius of circle");
    scanf("%d",&r);
    s=area(r);
    printf("arae of circle %f",s);
    return 0;
}
float area(int a)
{
    float c;
    c=3.14*a*a;
    return c;
}*/
/* 2
#include<stdio.h>
int simpleinterest(int a , int b , int c);
int main()
{
    int p,t,r,s;
    printf("enter your principle ");
    scanf("%d",&p);
    printf("enter your time");
    scanf("%d",&t);
    printf("enter your rate of interest ");
    scanf("%d",&r);
    s=simpleinterest(p,t,r);
    printf("total simple interest %d",s);
    return 0;
}
int simpleinterest(int a , int b , int c)
{
    int d;
    d=a*b*c/100;
    return d;
}*/
/* 3
#include<stdio.h>
int evenodd(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=evenodd(n);
    printf("\n%d",s);
    return 0;
}
int evenodd(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}*/
/* 4
#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d  ",i);
}*/
/* 5
#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    odd(n);
    return 0;
}
void odd(int a)
{
    int i;
    for(i=1;i<=a;i++)
        printf("%d ",2*i-1);
}*/
/* 6
#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %d",s);
    return 0;
}
int fact(int a)
{
    int i,fact=1;
    for(i=a;i>=1;i--)
        fact=fact*i;
    return fact;
}*/
/* 7
#include<stdio.h>
int combination(int , int);
int fact(int);
int main()
{
    int n,r,s;
    printf("enter two numbers");
    scanf("%d%d",&n,&r);
    s=combination(n,r);
    printf("\n %d",s);
    return 0;
}
int fact(int d)
{
    int i,fact=1;
    for(i=d;i>=1;i--)
        fact=fact*i;
    return fact;
}

int combination(int a , int b)
{
    int c;
    c=fact(a)/fact(a-b)*fact(b);
    return c;
}*/
/* 8
#include<stdio.h>
int permutation(int , int);
int fact(int);
int main()
{
     int n,r,s;
     printf("enter two numbers");
     scanf("%d%d",&n,&r);
     s=permutation(n,r);
     printf("arrangement is %d",s);
     return 0;
}
int permutation(int a , int b)
{
    int c;
    c=fact(a)/fact(a-b);
    return c;
}
int fact(int d)
{
    int i,fact=1;
    for(i=1;i<=d;i++)
        fact=fact*i;
    return fact;
}*/
/* 9
#include<stdio.h>
int value(int);
int main()
{
    int n,s;
    printf("enter a numbers");
    scanf("%d",&n);
    s=value(n);
    printf("%d",s);
    return 0;
}
int value(int a)
{
    int i,rem;
    printf("enter a digit a numbers");
    scanf("%d",&i);
    while(a)
    {
        rem=a%10;
        if(rem==i)
            return 1;
        a=a/10;
    }
    return 0;
}*/

#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("enter a numbers");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int a)
{
    int i;
    for(i=2;i<=a;i++)
    {
        while(a%i==0)
        {
            if(a%i==0)
                printf("%d ,",i);
            a=a/i;
        }
    }
}
