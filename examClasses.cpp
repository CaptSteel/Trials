#include<iostream>

using namespace std;

class student
{
    public:
    string name;
    int rollno;
    void accept()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no.: ";
        cin >> rollno;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll no.: " << rollno << endl;
    }
};

class marks : public student
{
    public:
    int m1, m2, m3;
    void accept()
    {
        cout << "Enter marks in three subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void display()
    {
        cout << "\nMarks\n";
        cout << "Subject 1: " << m1;
        cout << "Subject 2: " << m2;
        cout << "Subject 3: " << m3;
    }
};

int main()
{
    marks obj;
    obj.accept();
    obj.display();
    return 0;
}