#include<stdio.h>
float sal(float total);
float totsalary(float salary);

	// main function
	int main()
	{
		float salary[12],tot=0,result;
		int i;
		printf("Enter the salry for 12 month\n");
		for(i=0;i<12;i++)
		{
			printf("Month [%d]= ",i+1);
			scanf("%f",&salary[i]);
        tot=tot+salary[i];
		}
		printf("The total salary for 12 month = %0.2f\n",tot);
		result=sal(tot);
		printf("Tax for total salary %.02f = %.02f",tot,result);
	}
	
	float totsalary(float salary)
{
	float total=0;
	total=salary+total;
}

float sal(float total)
{
	float tax;
	if (total<15000)
	{
		tax=0.15*total;
		return tax;
	}
	else if (total>=15000&&total<30000)
	{
		tax=(total-15000)*0.18+2250;
		return tax;
	}
	else if (total>=30000&&total<50000)
	{
		tax=(total-30000)*0.20+5500;
		return tax;
	}
	else
	{
		tax=(total-50000)*0.35+10900;
		return tax;
	}
}

