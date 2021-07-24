#include<stdio.h>
int main(){
    int emp;
    int salary;
    int year;
    int bonus;
    int totalsalary;
printf("enter the employee salary");
scanf("%d",&salary);
printf("enter the year of service ");
scanf("%d",&year);

if(year>=5)
{
    bonus=salary*0.5;
    totalsalary=salary+bonus;
    printf("%d ",totalsalary);

}
else {
    printf("your not eligible %d ",salary);
}



}