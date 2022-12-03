#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct details
{
  char name[30];
  int id;
  float salary;
}emp[5];//struct details emp[5]
//=> 5 x 38 bytes tong so byte cap phat cho details
int n;//Bien toan cuc(Global variable)
void InserEmployee()
{
  int i;
  printf("Enter the number of employee:");
  scanf("%d",&n);
  for(i= 0; i< n;i++)
  {
    printf("\nEnter emloyee details:");
    printf("\nId:");
    scanf("%d",&emp[i].id);//scanf("%d",(emp+i).id);
    fflush(stdin);//clear buffer(vung nho dem)
    printf("\nName of Employee:");
    gets(emp[i].name);//scanf("%s",emp[i].name) => puts(emp[i].name)
    scanf("%f",&emp[i].salary);
  }
  }
void employeeSearch(int ida)
{
  int idf, i;
  printf("\nEnter emloyee id:");
  scanf("%d",&idf);
  
  for(i =0; i<ida;i++)
  {
    if(emp[i].id==idf)
    {
      printf("Employee id: %d",emp[i].id);
      printf("\nName: %s", emp[i].name);
      printf("\nSalary: %f",emp[i].salary);
    }
  }
}
   
void getAllEmployee(int ida)
{
  int i;
  for(i=0; i< ida; i++){
    printf("%d\t%s \t%f \n",emp[i].id,emp[i].name,emp[i].salary);
  }
  
}
void EmployeeCheck(int ida)
{
  
  int i;
  float salaryCheck;
  printf("\nDetails of Employee Whose salary = ? ");
  scanf("%f",&salaryCheck);
  for(i =0; i<ida ; i++)
  {
    if(emp[i].salary>salaryCheck)
    {
      printf("Employee id: %d",emp[i].id);
      printf("\nName: %s",emp[i].name);
      printf("\nSalary: %f",emp[i].salary);
    }
  }
  
}
void menu()
{
  int ch;
  while(1)
  {
    printf("------------------------------------\n");
    printf("\t\tMenu\n");
    printf("------------------------------------\n");
    printf("\n 1. Insert Employee");
    printf("\n 2. Display all employee");
    printf("\n 3. Dislay emloyee Name by salary");
    printf("\n 4. Search");
    printf("\n 5. Exit");
    printf("\nEnter your choice: ");
    scanf("\n %d",&ch);
    switch(ch)
    {
      case 1:
      InserEmployee();
      break;
      case 2:
      getAllEmployee(n);
      break;
      case 3:
      EmployeeCheck(n);
      break;
      case 4:
      EmployeeCheck(n);
      break;
      case 5:
      exit(0);
    }
  }
}
    int main()
    {
      menu();
      return 0;
    }
    
    
