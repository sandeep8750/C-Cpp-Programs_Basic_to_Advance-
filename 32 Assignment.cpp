/*1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/

#include <iostream>
using namespace std;

class FLOAT
{
    float var;

public:
    void set(float f)
    {
        var = f;
    }
    float get()
    {
        return var;
    }
    FLOAT operator+(FLOAT &f)
    {
        FLOAT result;
        result.var = var + f.var;
        return result;
    }
    friend ostream &operator<<(ostream &print, FLOAT obj)
    {
        print << obj.var;
        return print;
    }

    FLOAT operator-(FLOAT obj)
    {
        FLOAT result;
        result.var = var - obj.var;
        return result;
    }

    FLOAT operator*(FLOAT obj)
    {
        FLOAT result;
        result.var = var * obj.var;
        return result;
    }
    FLOAT operator/(FLOAT obj)
    {
        FLOAT resutl;
        resutl.var = var / obj.var;
        return resutl;
    }
};

int main()
{
    FLOAT obj1, obj2, obj3;
    obj1.set(10);
    obj2.set(20);
    FLOAT fuck;
    fuck = obj1 + obj2;

    cout << "number first is : " << obj1 << endl
         << "Number second is : " << obj2 << endl
         << endl;

    cout << "Addtion  operator overload : " << fuck << endl;

    fuck = obj2 - obj1;
    cout << "subtraction  operator overload : " << fuck << endl;

    fuck = obj1 * obj2;
    cout << "multiplication  operator overload : " << fuck << endl;

    fuck = obj1 / obj2;
    cout << "Division  operator overload : " << fuck << endl;

    return 0
}
//////////////////////////////////////////////////////////////////////
// 2. Define a class Rectangle and overload area function for different types of data type.

#include <iostream>
using namespace std;

class Rectangle
{
    float ar;

public:
    void area(int a, int b)
    {
        ar = a * b;
    }
    void area(double a, double b)
    {
        ar = a * b;
    }
    void area(int a, float b)
    {
        ar = a * b;
    }
    void area(double a, int b)
    {
        ar = a * b;
    }

    void diaplay()
    {
        cout << ar << endl;
    }
};

int main()
{
    Rectangle obj;
    obj.area(19, 10);
    obj.diaplay();
    obj.area(11.11, 55.55);
    obj.diaplay();
    obj.area(11, 40);
    obj.diaplay();
    obj.area(44.0, 22);
    obj.diaplay();
    return 0;
}
////////////////////////////////////////////////////////////////////////////
3. Define a base class Animals having member function sound().Define another
    derived class from Animals class named Dogs.You need to override the sound
    function of the base class in the derived class.
#include <iostream>
#include <string>
    using namespace std;

class Animals
{
    string sound;

public:
    void set_sound(string sound)
    {
        this->sound = sound;
    }

    string Animals_sound()
    {
        return sound;
    }
};

class Dog : public Animals
{
    string dog_sound;

public:
    void set_dog_sound(string sound)
    {
        dog_sound = sound;
    }
    string Sound()
    {
        return dog_sound;
    }
};

int main()
{
    Animals dog;
    dog.set_sound("Bow");
    string sound = dog.Animals_sound();
    cout << sound;

    Dog dogee;
    dogee.set_dog_sound("bowoooo");
    sound = dogee.Sound();
    cout << sound;
    return 0;
}
//////////////////////////////////////////////////////////////////////////
4. Define a class Addition that can add 2 or 3 numbers of different data types using function overloading.
#include <iostream>
                                             using namespace std;

class Addition
{
    double sum = 0;

public:
    void add(int x, int y);
    void add(double x, int y);
    void add(int x, double y);
    void add(double x, double y);
    void display()
    {
        cout << sum << endl;
    }

    void add(int x = 0, int y = 0, int z = 0)
    {
        sum = x + y + z;
    }
    add(double x, double, du)
    {
        sum = x + y;
    }
    void Addition ::add(double x, int y)
    {
        sum = x + y;
    }
    void Addition ::add(int x, double y)
    {
        sum = x + y;
    }
};

void Addition::add(int x = 0, int y = 0)
{
    sum = x + y;
}
void Addition::add(double x, double y)
{
    sum = x + y;
}
void Addition ::add(double x, int y)
{
    sum = x + y;
}
void Addition ::add(int x, double y)
{
    sum = x + y;
}

int main()
{
    Addition obj;
    obj.add(1, 2);
    obj.display();
}
///////////////////////////////////////////////////////////////////////////////
5. Define a class A having multiple constructors.Define another class B derived from class A.Create derived class constructors and show use of constructor in this single
    inheritance.
#include <iostream>
#include <string>
    using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    person()
    {
        cout << "Default constructor called \n";
    }
    person(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "Parametrised constructor called \n";
    }
};

class student : public person
{
    int rank;

public:
    student()
    {
        cout << "Default constructor called \n";
    }
    student(int rank, int age, string name) : person(age, name)
    {
        this->rank = rank;
        cout << "Parametrized constructor called\n";
    }
    void display()
    {
        cout << "Rank is : " << rank << endl;
        cout << "Age is : " << age << endl;
        cout << "Name is: " << name << endl;
    }
};

int main()
{
    student obj1, obj(1, 21, "Sandeep");
    obj.display();
    obj1 = {2, 22, "Shivam"};
    obj1.display();
}
/////////////////////////////////////////////////////////////////////
6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
    choice.
#include <iostream>
#include <string>
    using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    person()
    {
        cout << "Default constructor called \n";
    }
    person(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "Parametrised constructor called \n";
    }
};

class student : public person
{
protected:
    int rank;

public:
    student()
    {
        cout << "Default constructor called \n";
    }
    student(int rank, int age, string name) : person(age, name)
    {
        this->rank = rank;
        cout << "Parametrized constructor called\n";
    }
    void display()
    {
        cout << "Rank is : " << rank << endl;
        cout << "Age is : " << age << endl;
        cout << "Name is: " << name << endl;
    }
};

class address : public student
{
    int HNo;
    string father_name;

public:
    address()
    {
        cout << "Default constructor is called \n";
    }
    address(int HNo, string father_name, int rank, string name, int age) : student(rank, age, name)
    {
        this->HNo = HNo;
        this->father_name = father_name;
        cout << "Parametrized constructor is called\n";
    }
    void display()
    {
        cout << "Rank is : " << rank << endl;
        cout << "Age is : " << age << endl;
        cout << "Name is: " << name << endl;
        cout << "HNo is : " << HNo << endl;
        cout << "father Name is : " << father_name << endl;
    }
};
int main()
{
    student obj1, obj(1, 21, "Sandeep");
    obj.display();
    obj1 = {2, 22, "Shivam"};
    obj1.display();
    address obj3(520, "Sandeep", 3, "Rahul Rana", 21);
    obj3.display();
}
////////////////////////////////////////////////////////////////////////
7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include <iostream>
#include <string>
    using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    person()
    {
        cout << "Default constructor called \n";
    }
    person(int age, string name)
    {
        this->age = age;
        this->name = name;
        cout << "Parametrised constructor called \n";
    }
};

class student : public person
{
    int rank;

public:
    student()
    {
        cout << "Default constructor called \n";
    }
    student(int rank, int age, string name) : person(age, name)
    {
        this->rank = rank;
        cout << "Parametrized constructor called\n";
    }
    void display()
    {
        cout << "Rank is : " << rank << endl;
        cout << "Age is : " << age << endl;
        cout << "Name is: " << name << endl;
    }
};

int main()
{
    student obj1, obj(1, 21, "Sandeep");
    obj.display();
    obj1 = {2, 22, "Shivam"};
    obj1.display();
}
///////////////////////////////////////////////////////////////////////////
8. Write a C++ program to find the factorial of a number using copy constructor
#include <iostream>
    using namespace std;

class factorial
{
    int fact = 1, n;

public:
    factorial(int n)
    {
        this->n = n;
    }
    factorial(const factorial &obj)
    {
        fact = obj.fact;
    }
    void calculate()
    {
        for (int i = 1; i < this->n + 1; i++)
        {
            fact = fact * i;
        }
    }
    void display()
    {
        cout << "factorial is " << fact << endl;
    }
};

int main()
{
    factorial obj1 = 5;
    obj1.calculate();
    obj1.display();

    factorial obj2 = obj1;
    obj2.display();

    factorial obj3 = obj2;
    obj3.display();
    return 0;
}
//////////////////////////////////////////////////////////////////////////
// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Area
{
    int area;

public:
    Area() {}
    Area(int a, int b)
    {
        area = a * b;
    }
    Area(int r)
    {
        area = 3.14 * r * r;
    }
    Area(int a, int b, int c)
    {
        int s = (a + b + c) / 2.0;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void display()
    {
        cout << area << endl;
    }
};

int main()
{
    while (true)
    {
        cout << "To Enable program Press any key";
        getchar();

        cout << "1.To find area of Rectangle.\n";
        cout << "2.To find area of Circle.\n";
        cout << "3.To find area of Triangle.\n";
        cout << "4.Exit\n";

        int choice;
        cout << "\n\nEnter you Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int l, b;
            cout << "Enter Length and Breath\n";
            cin >> l >> b;
            Area a(l, b);
            cout << "Area of Rectangle is : ";
            a.display();
        }
        break;
        case 2:
        {
            int r;
            cout << "Enter Circle radius \n";
            cin >> r;
            Area a = r;
            cout << "Area of Circle is : ";
            a.display();
        }
        break;
        case 3:
        {

            int x, b, c;
            cout << "Enter Three side's of Triangle \n";
            cin >> x >> b >> c;
            Area a = {x, b, c};
            cout << "Area of Circle is : ";
            a.display();
        }
        break;
        case 4:
            exit(0);

        default:
            cout << "Invalid Choice\n";
            break;
        }
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
/*10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of subjects and creates an array for number of goals and
number of matches dynamically.
*/
#include <iostream>
using namespace std;

class Player
{
    int player_no, number_of_matches;
    char player_name[20];
    int *number_of_goals;

public:
    Player()
    {
        cout << "Enter Player No. :" << endl;
        cin >> player_no;
        cout << "Enter Player Name. :" << endl;
        cin >> player_name;
        cout << "Enter Number of match. :" << endl;
        cin >> number_of_matches;
        number_of_goals = new int[number_of_matches];
        for (int i = 0; i < number_of_matches; i++)
        {
            cout << "Enter number of goals in match " << i + 1 << endl;
            cin >> number_of_goals[i];
        }
    }

    void display()
    {
        cout << "Player number : " << player_no << endl;
        cout << "Player Name : " << player_name << endl;
        cout << "Number of Match : " << number_of_matches << endl;
        for (int i = 0; i < number_of_matches; i++)
        {
            cout << "Goals in " << i + 1 << " match is : ";
            cout << number_of_goals[i] << endl;
        }
    }
};

int main()
{
    Player obj;
    obj.display();
    return 0;
}
