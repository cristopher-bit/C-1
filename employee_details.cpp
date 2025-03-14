#include <iostream>
using namespace std;

class Employee
{
private:
	string name;
	double salary;
	string empno;
	string dept;
public:
	void accept(){
        cout<<"Enter Employee no.: ";
        cin>>empno;
        cout<<"Enter Employee name: ";
        cin>>name;
        cout<<"Enter salary: ";
        cin>>salary;
        cout<<"Enter department: ";
        cin>>dept;
		}
	double getSalary(){
		return salary;
	}
	string getName(){
		return name;
	}
	string getEmpno()
	{
		return empno;
	}



	void display() const{
		cout<<"Employee no: "<<empno<<endl;
		cout<<"Employee name: "<<name<<endl;
		cout<<"Employee salary: "<<salary<<endl;
		cout<<"Employee dept: "<<dept<<endl;
	}
};
void sort_salary(Employee e[], int n){
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(e[j].getSalary()>e[j+1].getSalary())
			{
			Employee temp= e[j];
			e[j]= e[j+1];
			e[j+1]=temp;
			}
		}
	}
}


void sort_name(Employee e[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(e[j].getName()>e[j+1].getName())
			{
				Employee temp=e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
}



void sort_empno(Employee e[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(e[j].getEmpno()>e[j+1].getEmpno())
			{
				Employee temp =e[j];
				e[j]=e[j+1];
				e[j+1]=temp;
			}
		}
	}
}


int main()
{
	int n;
	cout<<"Enter the total number of employee: ";
	cin>>n;
	Employee e[n];
	for(int i=0;i<n;i++)
	{
	e[i].accept();
	}
	cout<<"Sorted according to salary: "<<endl<<endl;
	sort_salary(e,n);
	for(int i=0;i<n;i++)
	{
		e[i].display();
	}
	cout<<"Sorted according to name: "<<endl<<endl;
        sort_name(e,n);
        for(int i=0;i<n;i++){
                e[i].display();
        }
	cout<<"Sorted according to empno: "<<endl<<endl;
        sort_empno(e,n);
        for(int i=0;i<n;i++){
                e[i].display();
        }
	return 0;
}
