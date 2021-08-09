/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>
int main()
{
    int basic,da,hra,ta,ma,pf,cea,Total_Salary,Inhand_salary,tax;
    printf("*****Program to Calculate Salary*****\n");
    printf("The Salary of Employee consist of Basic, Dearness allowance,House rent allowance,");
    printf("Travelling allowance,Medical Allowance,Childern education allowance and Providend Fund. \n");
    printf("If Total Salary of Employee is more than Rs.25,000 then 5 Percent tax will be diducted.\n");
    printf("Also PF will diduct directly from Employee salary.\n");
    printf("Enter the Basic Salary of Employee :");
    scanf("%d",&basic);
    da=0.30*basic;
    hra=0.20*basic;
    ta=1000;
    ma=1500;
    cea=0.30*basic;
    pf=0.12*basic;
    Total_Salary=basic+da+hra+ta+ma+cea+pf;
    printf("Total Salary of the Employee is :₹ %d\n",Total_Salary);
    if (Total_Salary>25000)
    {
        tax=0.05*basic;
    }
    else
    {
        tax=0;
    }
    printf("Tax=%d \n",tax);
    Inhand_salary=basic+da+hra+ta+ma+cea-pf-tax;
    printf("Inhand Salary of the Employee is :₹ %d",Inhand_salary);
}

