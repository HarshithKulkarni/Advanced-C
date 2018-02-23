#include<stdio.h>

int compare(int a,int b, int c);

int compare(int a,int b, int c)
{
    if(a>b && a>c)
    {

            return 1;
    }
    else if(b>a && b>c)
    {

          return 2;
    }
    else if(c>a && c>b)
    {

          return 3;
    }

     else
{
return 4;
}
}
int main()
{
    int a,b,c;
    printf("Enter the numbers to be compared \n");
    scanf("%d%d%d",&a,&b,&c);
    int comp=compare(a,b,c);
    switch (comp)
  {
case 1:
     printf("The greatest number is %d\n",a);
     break;
case 2:
         printf("The greatest number is %d\n",b);
     break;
case 3:
       printf("The greatest number is %d\n",c);
       break;
case 4:
printf("Error\n");

break;
}
    return 0;

}


