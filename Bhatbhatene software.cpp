
// Bhatbhateni software
#include<stdio.h>

int main()
{
int price[4],total_price=0,dis_price=0,grand_total=0,date,customer_id,customer,i,j;

printf("please enter number of customer :");
scanf("%d",&customer);
 printf(" Enter customer_id=");
scanf("%d",&customer_id); 
printf("Enter date=");
scanf("%d",&date);
printf("please enter 5 items\n\n");

for(j=0;j<3;j++)
{
	printf("Login as =%d\n",customer);
	printf("Date=%d\n",date);
	printf("Customer id=%d\n",customer_id);
}


for(i=0;i<=5;i++)
		
{
	// enter price from user
	printf("price[%d]=",i+1);
	scanf("%d",&price[i]);
	total_price+=price[i];

	if(total_price<500)
{
	dis_price=total_price*0.05;
	grand_total=total_price-dis_price;
}
else if(total_price>500&& total_price<1000)

{
	dis_price=total_price*0.06;
grand_total=total_price-dis_price;
}
else if(total_price>1000&&total_price<1500)
{
		dis_price=total_price*0.1;
    	grand_total=total_price-dis_price;
}
else
{
		dis_price=total_price*0.02;
	grand_total=total_price-dis_price;
}

printf("\n");
printf("total_price is= %d\n",total_price);
printf("dis_price is= %d\n",dis_price);
printf("grand_total is= %d\n\n\n",grand_total);
printf("Thankyou for visiting");
}
}
