#include<stdio.h>

int main()
{
	float baseSalary, hrapercent, daPercent, taPercent;
	float hra, da, ta, grossSalary;
	
	printf("Enter Base Salary: ");
	scanf("%f",&baseSalary);
	
	printf("Enter HRA percentage: ");
	scanf("%f", &hrapercent);
	
	printf("Enter DA percentage: ");
	scanf("%f", &daPercent);
	
	printf("Enter TA percentage: ");
	scanf("%f", &taPercent);
	
	hra = baseSalary * hrapercent / 100;
	da  = baseSalary * daPercent / 100;
	ta  = baseSalary * taPercent / 100;
	
	grossSalary = baseSalary + hra + da + ta;
	
	printf("Gross Salary: Rs. %.2f\n", grossSalary);
	
	return 0;
}
// Output
// Enter Base Salary: 100
//Enter HRA percentage: 10
//Enter DA percentage: 5
//Enter TA percentage: 8
//Gross Salary: Rs. 123.00

