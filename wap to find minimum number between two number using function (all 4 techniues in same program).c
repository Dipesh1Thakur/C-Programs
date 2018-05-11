//wap to find minimum number between two number using function (all 4 techniues in same program)
#include<stdio.h>
#include<conio.h>
// using return type and no argument
int mini()
{
int a,b;
printf("enter the two number to find minimum number among them using return type and no argument\n");
scanf("%d%d",&a,&b);
if(a<b)
return a;
else
return b;
}
// using return type and using argument
int mini2(int a,int b)
{
printf("enter the two number to find minimum number among them using return type and no argument\n");
scanf("%d%d",&a,&b);
if(a<b)
return a;
else
return b;
}
// using no return type and using argument
void mini3(int a,int b)
{
printf("enter the two number to find minimum number among them using return type and no argument\n");
scanf("%d%d",&a,&b);
if(a<b)
printf("%d is minimum number",a);
else
printf("%d is minimum nummber",b);
}
//using no return type and using no argument
void mini4()
{
int a,b;
printf("enter the two number to find minimum number among them using return type and no argument\n");
scanf("%d%d",&a,&b);
if(a<b)
printf("%d is minimum number",a);
else
printf("%d is minimum number",b);

}
int main()
{
    int a,b;
int x=mini();
    printf("%d is less number\n",x);
int c=mini2(a,b);
    printf("%d is less number\n",c);
mini3(a,b);
mini4();
return 0;
getch();
return 0;
}
