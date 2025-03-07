#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n_employees;
    printf("Enter Number of Employees:\n");
    scanf("%d",&n_employees);
    int salary[n_employees];
    for(int i=0; i<n_employees; i++)
    {
        printf("Enter Salary of Employee with ID number %d:\n",i+1);
        scanf("%d",&salary[i]);
    }
    int employee;
    printf("\n-------------------\n");
    printf("Salaries Record: \n\n");
    bool first=true;
    do
    {
        if (first==false)
        {
            //at least 1 input was taken from the user
            if (employee>n_employees || employee<=0)
            {
                //handling error that the user entered a wrong
                printf("Error! Please enter a valid ID number from 1 to %d \n\n",n_employees);
            }
            else
            {
                //valid input
                printf("Salary of Employee with ID number %d is %d\n\n",employee,salary[employee-1]);
            }
        }
        printf("Enter ID number of Employee to get their salary (Enter -1 to stop):\n");
        scanf("%d",&employee);
        first=false;
    }
    while (employee!=-1);
    printf("\n------------------- \n");
    printf("Queries Done!");
    return 0;
}
