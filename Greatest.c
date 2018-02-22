#include<stdio.h>
#include<conio.h>
int compare(int a,int b, int c);

int compare(int a,int b, int c)  //function declaration
{
    if(a>b && a>c)
    {
        printf("The greatest number is %d\n",a);
            return a;
    }
    else if(b>a && b>c)
    {
        printf("The greatest number is %d\n",b);
          return b;
    }
    else if(c>a && c>b)
    {
        printf("The greatest number is %d\n",c);
          return c;
    }

}

int main()
{
    int a,b,c;
    printf("Enter the numbers to be compared \n");
    scanf("%d%d%d",&a,&b,&c);
    compare(a,b,c);  //function call
    return 0;

}
