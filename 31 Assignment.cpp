1. Define a class Person with instance members name and age.Also define member
    functions
    setName(),
    setAge(), getName(), getAge().Now define class Employee by inheriting Person class.In the Employee class define empid and salary as instance members.Also define setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
#include <string.h>
                                                                                                                                                                                                    using namespace std;

class person
{
protected:
    char name[50];
    int age;

public:
    void setname(char a[])
    {
        strcpy(name, a);
    }
    void setage(int a)
    {
        age = a;
    }
    char *getname()
    {
        return name;
    }
    int getage()
    {
        return age;
    }
};

class employe : public person
{
    int empid;
    int empsalary;

public:
    void setempid(int id)
    {
        empid = id;
    }
    void setempsalary(int sal)
    {
        empsalary = sal;
    }

    int getempid()
    {
        return empid;
    }
    int getempsal()
    {
        return empsalary;
    }

    void display()
    {
        cout << "\nName :" << name << "\nAge :" << age << "\nEmpid :" << empid << "\nSalary :" << empsalary;
    }
};

int main()
{
    employe e;

    e.setname("sandeep");
    e.setage(21);
    e.setempid(257);
    e.setempsalary(50000);

    e.display();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
2. Write a C++ program to add two numbers using single inheritance.Accept these two
    numbers from the user in base class and display the sum of these two numbers in
        derived class.
#include <iostream>
    using namespace std;

class base
{
protected:
    int x, y;

public:
    void accept()
    {
        cout << "Enter first number .\n";
        cin >> x;
        cout << "Enter second number .\n";
        cin >> y;
    }
};

class derived : public base
{
protected:
    int c;

public:
    void addtion()
    {
        c = x + y;
    }
    void display()
    {
        cout << c;
    }
};

int main()
{
    derived d;
    d.accept();
    d.addtion();
    d.display();
}
////////////////////////////////////////////////////////////////////////////////////

3. Write a C++ program to calculate the percentage of a student using multi - level
                                                                                  inheritance.Accept the marks of three subjects in base class.A class will be derived
                                                                                      from the above mentioned class which includes a function to find the total marks
                                                                                          obtained and another class derived from this class which calculates and displays the
                                                                                              percentage of students.#include<iostream> using namespace std;

class Marks
{
protected:
    float marks[3];

public:
    void acceptmarks()
    {
        cout << "Enter subject's marks\n";
        cout << "\n----------------------------\n";
        cout << "\nEnter physic marks : ";
        cin >> marks[0];
        cout << "\nEnter chemistry marks : ";
        cin >> marks[1];
        cout << "\nEnter mathmatics marks : ";
        cin >> marks[2];
    }
};

class Total : public Marks
{
protected:
    float total;

public:
    float Addtionmarks()
    {
        for (int i = 0; i < 3; i++)
        {
            total += marks[i];
        }
    }
    void show()
    {
        cout << total;
    }
};

class Percentege : public Total
{
protected:
    float percentege;

public:
    void calculatepercentege()
    {
        percentege = total / 3;
    }

    void display()
    {
        cout << "\nPercentege of student is :  " << percentege;
    }
};

int main()
{
    Percentege p;

    p.acceptmarks();
    p.Addtionmarks();
    cout << "Total marks of student : ";
    p.show();
    p.calculatepercentege();
    p.display();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
4. Write a C++ program to design a base class Person(name, address,
                                                     phone_no)
    .Derive a class Employee(eno, ename) from Person.Derive a
    class Manager(designation, department name, basic - salary) from
    Employee.Write a menu driven program to :
#include <iostream>
    using namespace std;

class Person
{
protected:
    char name[20];
    char address[50];
    long int phone_no;
};

class Employee : public Person
{
public:
    char ename[20];
    int eno;
};

class manger : public Employee
{
public:
    char des[20], dep[20];
    float salary;

public:
    void accept_details()
    {
        cout << "\n Enter Employee details \n";
        cout << "\n-------------------------------\n";
        cout << "\nEnter Employee name : ";
        cin >> ename;
        cout << "\nEnter Employee Address : ";
        cin >> address;
        cout << "\nEnter Employee Phone number: ";
        cin >> phone_no;
        cout << "\nEnter Designation : ";
        cin >> des;
        cout << "\nEnter Department  : ";
        cin >> dep;
        cout << "\nEnter Basic salary :  ";
        cin >> salary;
    }
};

int main()
{
    int n;
    manger man[20];
    cout << "Enter how many manager you want to enter : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        man[i].accept_details();
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (man[temp].salary < man[i].salary)
            ;
        temp = i;
    }
    cout << "\nHighest salary is : " << man[temp].ename;
    cout << "\n The Employee whose salary is highest is : " << man[temp].ename;
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
5. Write a C++ program to define a base class Item(item - no, name, price).Derive a class Discounted - Item(discount - percent).A customer purchases

                                                                                                       'n' items.Display the item
    - wise bill and total amount using appropriate format.
#include <iostream>
      using namespace std;

class Item
{
protected:
    int item_no;
    double price;
    char name[40];

public:
    double getprice()
    {
        return price;
    }
};

class Discounted_item : public Item
{
    int dis, dis_temp;

public:
    void display();
    void Accepte_item()
    {
        cout << "\nEnter Item No. : ";
        cin >> item_no;
        cout << "\nEnter Item name : ";
        cin >> name;
        cout << "\nEnte Item price : ";
        cin >> price;
        cout << "\nEnter Item discount percentege :";
        cin >> dis;
        dis_temp = price - (price * dis / 100);
        cout << "\n----------------------------------------\n";
    }
    int getdis()
    {
        return dis;
    }
    int getdis_temp()
    {
        return dis_temp;
    }
};
void Discounted_item::display()
{
    cout << "\nItem no. :" << item_no;
    cout << "\nItem name : " << name;
    cout << "\nItem price : " << price;
    cout << "\nItem discount : " << dis;
    cout << "\nDiscounted price : " << dis_temp;
    cout << "\n----------------------------------------\n";
}
int main()
{
    int n;
    int total_amount, net_amount = 0, total_discount = 0;
    Discounted_item d[90];
    cout << "\nHow manay item you want to enter : ";
    cin >> n;
    cout << "\n----------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        d[i].Accepte_item();
    }
    for (int i = 0; i < n; i++)
    {
        d[i].display();
    }

    for (int i = 0; i < n; i++)
    {
        total_amount += d[i].getprice();
        total_discount += d[i].getdis();
        net_amount += d[i].getdis_temp();
    }

    cout << "\nTotal Amount is : " << total_amount << endl;
    cout << "\nTotal Discount is : " << total_discount << endl;
    cout << "\nNet.payable Amount : " << net_amount;
}
//////////////////////////////////////////////////////////////////////////////////////
6. Write a C++ program to demonstrate how a common friend function can
    be used to exchange the private values of two classes.(Use call by
                                                               reference method)
        .
#include <iostream>
    using namespace std;
class B;
class A
{
    int num1;

public:
    A()
    {
        num1 = 55;
    }
    friend void swap(A &, B &);
    void showA()
    {
        cout << "A :" << num1 << endl;
    }
};

class B
{
    int num2;

public:
    B()
    {
        num2 = 66;
    }
    friend void swap(A &, B &);
    void showB()
    {
        cout << "B :" << num2 << endl;
    }
};

void swap(A &a, B &b)
{
    int temp;
    temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main()
{
    A obj1;
    B obj2;

    swap(obj1, obj2);

    obj1.showA();
    obj2.showB();
    return 0;
}
//////////////////////////////////////////////////////////////////////////////
7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
#include <iostream>
using namespace std;

class emp
{
public:
    int empno;
    char empname[90];

public:
    void get_empdetails()
    {
        cout << "Enter employe Number: ";
        cin >> empno;
        cout << "Enter employe Name : ";
        cin >> empname;
    }
    int getempno()
    {
        return empno;
    }
    char *getempname()
    {
        return empname;
    }
};

class fulltime : public emp
{
private:
    int daily_rate;
    int days;
    int fullsalary;

public:
    void get_fulltime_details()
    {
        cout << "Enter daily rate ";
        cin >> daily_rate;
        cout << "Enter number days . ";
        cin >> days;
    }
    void cal()
    {
        fullsalary = daily_rate * days;
        cout << "\nSalary : " << fullsalary;
    }
    void show1()
    {
        cout << "\n-----------------------------\n";
        cout << "\nEmployee Number : " << getempno();
        cout << "\nEmployee Name : " << getempname();
        cout << "\nEmployee salary : " << fullsalary;
        cout << "\nEmployee Status : full time";
        cout << "\n--------------------------------\n";
    }
};

class part_time : public emp
{
private:
    int hourly_rate;
    int working_days;
    int part_salary;

public:
    void get_parttime_details()
    {
        cout << "Enter working_days ";
        cin >> working_days;
        cout << "Enter hourly_rate . ";
        cin >> hourly_rate;
    }
    void cal()
    {
        part_salary = working_days * hourly_rate;
        cout << "\nSalary : " << part_salary;
    }
    void show2()
    {
        cout << "\n-----------------------------\n";
        cout << "\nEmployee Number : " << getempno();
        cout << "\nEmployee Name : " << getempname();
        cout << "\nEmployee salary : " << part_salary;
        cout << "\nEmployee Status : part time";
        cout << "\n--------------------------------\n";
    }
};

int main()
{
    int var1 = 0;
    int var2 = 0;
    fulltime f[5];
    part_time p[5];

    int num1;
    do
    {
        cout << "\n1.Enter Record.";
        cout << "\n2.Display Record.";
        cout << "\n3.Search Record.";
        cout << "\n4.Quit.";
        cout << "\n-------------------------------\n";
        cout << "\nEnter your choice ";
        cin >> num1;
        switch (num1)
        {
            int num2, id;
        case 1:
        {
            cout << "\nWhich type of Employee details you wnat to enter .";
            cout << "\n1.Full time ";
            cout << "\n2.Part time";
            cout << "\n your choice :";
            cin >> num2;
            switch (num2)
            {
            case 1:
                f[var1].get_empdetails();
                f[var1].get_fulltime_details();
                f[var1].cal();
                f[var1].show1();
                var1++;
                break;
            case 2:
                p[var2].get_empdetails();
                p[var2].get_parttime_details();
                p[var2].cal();
                p[var2].show2();
                var2++;
                break;
            default:
                cout << "\ninvalid input.";
                break;
            }
        }
        break;
        case 2:
            for (int i = 0; i < var1; i++)
            {
                f[i].show1();
            }
            for (int i = 0; i < var2; i++)
            {
                p[i].show2();
            }
            break;
        case 3:
            cout << "\nEnter employee Id :";
            cin >> id;

            for (int i; i < var1; i++)
            {
                if (f[i].empno == id)
                {
                    f[i].show1();
                }
                if (p[i].empno == id)
                {
                    p[i].show2();
                }
            }
        case 4:
            exit(0);
        }
    } while (num1 != 4);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////
8 - In a bank, different customers have savings account.Some customers may have taken a loan from the bank.So bank always maintain information about bank depositors and borrowers.Design a Base class Customer(name, phone - number).Derive a class Depositor(accno, balance) from Customer.Again, derive a class Borrower(loan - no, loan - amt) from Depositor.Write necessary member functions to read and display the details of ‘n’ customers.
#include <iostream>
#include <string>
                                                                                                                                                                                                                                                                                                    using namespace std;

class Customer
{
protected:
    string name;
    int phoneno;

public:
    void get_details_custmer()
    {
        cout << "\n\nEnter Name .";
        cin.ignore();
        getline(cin, name);
        cout << "\nEnter Phone Number .";
        cin >> phoneno;
    }
    void show_customer_details()
    {
        cout << "\nCustmer detaila's.";
        cout << "\n-----------------------------\n";
        cout << "\nName : " << name;
        cout << "\nPhone numeber : " << phoneno;
    }
};

class Depositer : public Customer
{
protected:
    int Accno;
    int balance;

public:
    void get_details_Depositer()
    {
        cout << "\nEnter Account Number .";
        cin >> Accno;
        cout << "\nEnter Balance .";
        cin >> balance;
    }
    void show_Depositer_details()
    {
        cout << "\nAccount Number is : " << Accno;
        cout << "\nBalanne is : " << balance;
        cout << "\n-----------------------------\n";
    }
};

class Borrower : public Depositer
{
private:
    int lone_no;
    int Ammount;

public:
    void get_details_Borrower()
    {
        cout << "\nEnter loan no.";
        cin >> lone_no;
        cout << "\nEnter Ammount .";
        cin >> Ammount;
        cout << "\n-----------------------------\n";
    }
    void show_Borrow_details()
    {
        cout << "\n Lone is : " << lone_no;
        cout << "\n Ammount : " << Ammount;
        cout << "\n-----------------------------\n";
    }
};

int main()
{
    int n;
    Borrower *obj;
    cout << "\n Enter the custmer details you want to Enter.";
    cin >> n;
    obj = new Borrower[n];

    for (int i = 0; i < n; i++)
    {
        obj[i].get_details_custmer();
        obj[i].get_details_Depositer();
        obj[i].get_details_Borrower();
    }

    for (int i = 0; i < n; i++)
    {
        obj[i].show_customer_details();
        obj[i].show_Depositer_details();
        obj[i].show_Borrow_details();
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    int roll_no;
    char name[49];

public:
    void get_student_details()
    {
        cout << "\nEnter Roll No :";
        cin >> roll_no;
        cout << "\nEnter Student Name :";
        cin.ignore();
        gets(name);
    }
    void show_student_details()
    {
        cout << "\n--------------------------------------\n";
        cout << "\n***********Mark's list******************\n";
        cout << "\n--------------------------------------\n";
        cout << "Roll No           : " << roll_no << endl;
        cout << "Name              : " << name << endl;
    }
    void show_details()
    {
        cout << "\n--------------------------------------\n";
        cout << "\n***********Mark's list******************\n";
        cout << "\n--------------------------------------\n";
        cout << "Roll NO :" << roll_no << endl;
        cout << "Name : " << name << endl;
    }
};

class studentexam : public student
{
protected:
    int English, Hindi, Math, Physics, Chemistry, C;

public:
    void Enter_subject_marks()
    {
        get_student_details();
        cout << "\nEnter English Marks :";
        cin >> English;
        cout << "\nEnter Hindi Marks :";
        cin >> Hindi;
        cout << "\nEnter Math Marks :";
        cin >> Math;
        cout << "\nEnter Physics Marks :";
        cin >> Physics;
        cout << "\nEnter Chemistry Marks :";
        cin >> Chemistry;
        cout << "\nEnter C++ Marks :";
        cin >> C;
    }
};

class student_result : public studentexam
{

public:
    void percentege()
    {

        int Total = English + Hindi + Math + Physics + Chemistry + C;
        int avg = Total / 6;
        cout << "\nTotal is :" << Total << endl;
        cout << "percentege is : " << avg << endl;
        cout << "\n----------------------------\n";
    }
    void show_complete_details()
    {
        show_details();
        cout << "\n English Marks is :" << English << endl;
        cout << "\n Hindi Marks is :" << Hindi << endl;
        cout << "\n Math Marks is :" << Math << endl;
        cout << "\n Physics Marks is :" << Physics << endl;
        cout << "\n Chemistry Marks is :" << Chemistry << endl;
        cout << "\n C++ Marks :" << C << endl;
        cout << endl
             << endl;
    }
};

int main()
{
    student_result obj[10];
    int cnt;
    cout << "\nHow many student Marks want to enter : ";
    cin >> cnt;

    for (int i = 0; i < cnt; i++)
    {
        obj[i].Enter_subject_marks();
        obj[i].show_complete_details();
        obj[i].percentege();
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////
/*10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include <iostream>
#include <string.h>

using namespace std;

class Worker
{
    int code;
    char name[10];
    float salary;

public:
    Worker()
    {
    }
    Worker(int c, char *n, float s)
    {
        code = c;
        strcpy(name, n);
        salary = s;
    }

    void print_worker()
    {
        cout << "\n-------------------------\n";
        cout << "\nCode    : " << code;
        cout << "\nName    : " << name;
        cout << "\nSalary  : " << salary;
    }
    float get_salary()
    {
        return salary;
    }
};

class officer
{
protected:
    float HRA, DA;

public:
    officer()
    {
    }
    officer(float h, float d)
    {
        HRA = h;
        DA = d;
    }

    void show_officer()
    {
        cout << "\nHRA   : " << HRA;
        cout << "\nDA    : " << DA;
    }
};

class manger : public Worker, public officer
{
    float TA;
    float grs_salary;

public:
    manger()
    {
    }
    manger(int c, char *n, float s, float h, float d) : Worker(c, n, s), officer(h, d)
    {
    }
    void calculate_ta()
    {
        print_worker();
        show_officer();
        float f = get_salary();
        float ta = f / 10;
        grs_salary = HRA + DA + get_salary() + ta;
        cout << "\nTA is : " << ta << endl;
        cout << "Gros Salary is : " << grs_salary << endl;
    }
};

int main()
{
    int cnt;

    cout << "\nEnter manager count : ";
    cin >> cnt;
    manger *obj;
    obj = new manger[cnt];
    cout << endl
         << endl;
    for (int i = 0; i <= cnt; i++)
    {
        cout << "\nEnter worker information .\n";
        cout << "\n--------------------------------------\n";
        cout << "\nEnter code : ";
        int c;
        cin >> c;
        cout << "\nEnter Worker Name :";
        char n[20];
        cin >> n;
        cout << "\nEnter Worker Salary : ";
        float s;
        cin >> s;
        cout << "\nEnter Worker HRA : ";
        float h;
        cin >> h;
        cout << "\nEnter Worker DA : ";
        float d;
        cin >> d;

        obj[i] = manger(c, n, s, h, d);
    }

    for (int i = 0; i < cnt; i++)
    {
        obj[i].calculate_ta();
    }
    return 0;
}
