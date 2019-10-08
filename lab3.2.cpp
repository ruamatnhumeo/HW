#include <iostream>
#include <conio.h>
using namespace std;

class Real
{
private:
    float value;

public:

Real(float v=0)
{
value=v;
}
Real operator + (Real &A)
{
float temp = value + A.value ;
return Real(temp) ;
}
Real operator - (Real &A)
{
float temp = value - A.value ;
return Real(temp) ;
}
Real operator * (Real &A)
{
float temp = value * A.value ;
return Real(temp) ;
}
Real operator / (Real &A)
{
float temp = value / A.value ;
return Real(temp) ;
}
void display()
{
cout<<value;
}
};

main()
{

Real A(6.5);
Real B(3.5) ;

Real C = A+B ;
C.display();
cout << endl;

Real D = A-B ;
D.display();
cout << endl;

Real E = A*B ;
E.display();
cout << endl;

Real F = A/B ;
F.display();
cout << endl;

getch();

}
