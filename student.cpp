#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Student
{
private :
    string name;;
    long int id ;
    double mathMark,englishMark,physicsMark,chemistryMark;

public:
    Student(string x,long int y)
    {
       this->name = x;
       this ->id = y;
    }
    void setMathmark(double value)
    {
        if(value>0 && value<=100)
            mathMark = value;
    }
    void setEnglishmark(double value)
    {
        if(value>0 && value<=100)
            englishMark = value;
    }
    void setPhysicsmark(double value)
    {
        if(value>0 && value<=100)
            physicsMark = value;
    }
    void setChemistrymark(double value)
    {
        if(value>0 && value<=100)
            chemistryMark = value;
    }
    double getAverage()
    {
        double result = 0;

        return result;
    }
    void displayDetails()
    {
        cout << "name="<< name<< endl;
        cout << "id="<< id<< endl;
        cout << "average="<< getAverage();
    }
};

 int main()
{
    Student stu("Haim",123123);

    stu.setChemistrymark(98);
    stu.setEnglishmark(88);
    stu.setPhysicsmark(78);
    stu.setMathmark(100);
    stu.displayDetails();

    return 0;
}
