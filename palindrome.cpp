#include<stdio.h>
#include<conio.h>
int main()
{
 int n,r,sum=0,temp;
 printf("enter a number :");
 scanf("%d",&n);
temp==n;
//while(n>0){

 r=n%10;
 sum=sum*10+r;
 n=n/10;
 r=n%10;
 sum=sum*10+r;
 n=n/10;
 r=n%10;
 sum=sum*10+r;
 n=n/10;
// }
printf("rev of no. is %d\n",sum);
 if(temp==sum)
 printf("given no. is palindrome");
 else
 printf("given no. is not palindrome");
 getch();
 return 0;
}
