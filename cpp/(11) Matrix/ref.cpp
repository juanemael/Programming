      #include <iostream.h>
       #include <conio.h>

       class Employee
       {
              int Id;
              char Name[25];
              int Age;
              long Salary;

              public:
              void GetData()           //Statement 1 : Defining GetData()
              {
                    cout<<"\n\tEnter Employee Id : ";
                    cin>>Id;

                    cout<<"\n\tEnter Employee Name : ";
                    cin>>Name;

                    cout<<"\n\tEnter Employee Age : ";
                    cin>>Age;

                    cout<<"\n\tEnter Employee Salary : ";
                    cin>>Salary;
              }

              void PutData()           //Statement 2 : Defining PutData()
              {
                    cout<<"\n"<<Id<<"\t"<<Name<<"\t"<<Age<<"\t"<<Salary;
              }

       };


       void main()
       {

              int i;

              Employee E[3];           //Statement 3 : Creating Array of 3 Employees

              for(i=0;i<3;i++)
              {
                    cout<<"\nEnter details of "<<i+1<<" Employee";
                    E[i].GetData();
              }

              cout<<"\nDetails of Employees";
              for(i=0;i<3;i++)
              E[i].PutData();

       }