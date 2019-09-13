#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Point3D
{
private:
    double x,y,z;
public:
    Point3D(double xval, double yval, double zval)
    {
        x = xval;
        y = yval;
        z = zval;
    }
    double distanceFrom(Point3D other)
    {
        return sqrt(pow(x-other.x,2)+pow(y-other.y,2)+pow(z-other.z,2));
    }
    double distanceFromCenter()
    {
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    }
    void details()
    {
        cout << "x="<< x<< " y="<< y<< " z="<< z<< endl;
    }
};

main()
{
    Point3D point1(2,3,4);
    Point3D point2(3,7,8);

    cout << "point1: ";
    point1.details();
    cout << "point2: ";
    point2.details();
    cout << "The distance between point1 and Center(0,0,0) is: "<< point1.distanceFromCenter();
    cout << endl;
    cout << "The distance between point1 and point2 is: "<< point1.distanceFrom(point2);


    getch();
}
