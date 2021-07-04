#include<stdio.h>
#include<conio.h>
struct employee {
int id;
char name[50];
float age;
float salary;
};
void main(){

int i,j;
struct employee emp[4];
for(i=0;i<4;i++)
{
printf("\n\t 1.enter  employee id: ");
scanf("%d",&emp[i].id);
printf("\n\t 2.enter the employee name:");
scanf("%s",&emp[i].name);
printf("\n\t 3.enter the employee age:");
scanf("%f",&emp[i].age);
printf("\n\t 4.enter the employee salary:");
scanf("%f",&emp[i].salary);
}
printf("\n\t total details of emplooyee");
for(i=0;i<4;i++){
printf("\n%d\t%s\t%f\t%f\t",emp[i].id,emp[i].name,emp[i].age,emp[i].salary);
}
return 0;

}
