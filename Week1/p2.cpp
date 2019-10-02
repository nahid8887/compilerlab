#include<iostream>

using namespace std;

class Student
{
    protected:
    int id;
    int age;
    public:
        getInfo(int x, int y)
        {
            x=id;
            y=age;
        }
};

class b
{
protected:
    int marks;
public:
    getMarks(int x)
    {
        x=marks;
    }
};

class c : public b, public Student  //call & print
{
    public:
    void display(){
    cout<<id<<age<<marks<<endl;
    }
};

int main()
{
   c child;
   child.getInfo(65,23);
   child.getMarks(100);
   child.display();
}
