#include<stdio.h>
int main()
{
    int n=0;
    int i=0,j,price[5],total=0,dis=0,net=0,t[n],d[n],netp[n];
    char name[50];
    char date[50];
    char choice;
    printf("\n------------------------------------------\n");
    printf("\t*****  A B C   C O M P A N Y *****\n");
    printf("\n------------------------------------------\n");
    printf("Enter your name ");
    scanf("%s",name);
    printf("\nEnter today's date: ");
    scanf("%s",date);
    printf("enter the no of customer => ");
    scanf("%d",&n);

    system("cls");

        for(i=0;i<n;i++)
        {
            printf("\n------------------------------------------\n");
            printf("\t*****  A B C   C O M P A N Y *****\n");
            printf("\n------------------------------------------\n");

            printf("Login as = %s",name);
            printf("\nDate = %s\n_____________________________________\n",date);


            printf(" \nCustomer ID = 00%d",i+1);
            printf("\nDate = %s",date);
            printf("\n_____________________________________\n");
            for(j=0;j<5;j++)
            {
                printf("\nEnter Price of an Item [%d] = ",j+1);
                scanf("%d",&price[j]);
                system("cls");
                total=total+price[j];
            }

                if (total<=500)
                {
                    dis=total*0.1;
                    net=total-dis;
                }
                else if (total<=1000 && total>500)
                {
                    dis=total*0.2;
                    net=total-dis;
                }
                else if (total<=1500 && total>1000)
                {
                    dis=total*0.25;
                    net=total-dis;
                }
                else
                {
                    dis=total*0.3;
                    net=total-dis;
                }
                t[i]=total;
                d[i]=dis;
                netp[i]=net;
        }

            for (i=0;i<n;i++)
            {

                printf("FOR CUSTMER %d\n",i+1);
                printf("Your total amount is %d",t[i]);
                printf("\nYour Discounted amounted is %d",d[i]);
                printf("\nYour total amount is %d",netp[i]);
                printf("\n_____________________________________\n");
            }

            printf("\n\nDevloper:-\n\t::: KIRAN SINGH KATUWAL :::\n\t:::    Thank You !!!    :::");
            printf("\n_____________________________________\n");
            getch();
}

