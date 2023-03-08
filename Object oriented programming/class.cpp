#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_info()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    // Person(string name, string f_name, string m_name)
    // {
    //     this->name = name;
    //     father = new Person;
    //     father->name = f_name;
    //     mother = new Person;
    //     mother->name = m_name;
    // }

    void print_info()
    {
        cout << "name= " << name << "\n";
        cout << "Fathers name=" << father->name << "\n";
        cout << "mothers name=" << mother->name << "\n";
    }
    ~Person()
    {
        cout << "called\n";
        delete father;
        delete mother;
    }
};

int main()
{
    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "a";
    p.father->name = "b";
    p.mother->name = "c";
    p.print_info();
    Student s;
    s.name = "ani";
    s.std_id = 01;
    s.age = 31;
    s.fathers_name = "saheb";
    s.mothers_name = "farida";

    s.print_info();
    return 0;
}