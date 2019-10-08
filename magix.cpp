#include <iostream>
#include <conio.h>
using namespace std;

class magix
{
private:
    int ro;
    int co;
    float data[100][100];

public:
    magix()
    {
        cout << "Nhap gia tri cho hang: ";
        cin >> ro;
        cout << "\nNhap gia tri cho cot: ";
        cin >> co;

        for (int i = 0; i < ro; i++)
        {
            for (int j = 0; j < co; j++)
            {
                cout << "\nNhap gia tri ["<< i<< "]["<< j<< "]: ";
                cin >> data[i][j];
            }
        }
    }
    magix(int N, int M)
    {
        ro=N;
        co=M;
        for (int i=0;i<ro;i++)
            for(int j=0; j<co; j++)
               data[i][j]=0;
    }

    magix(const magix &A)
    {
        ro = A.ro;
        co = A.co;
        for (int k=0; k<A.ro;k++)
            for (int j=0; j<A.co; j++)
               data[k][j] = A.data[k][j];
    }

    void display()
    {
        for (int i=0; i<ro; i++)
        {   for (int j=0; j<co; j++)
              cout <<data[i][j] << " "<< endl;
        }
    }

    magix operator + (magix &B)
    {
        magix temp(B.ro, B.co);
         temp.ro = B.ro;
         temp.co = B.co;
        for (int i = 0; i < B.ro; i++)
             for (int j = 0; j < B.co; j++)
                temp.data[i][j] = data[i][j] + B.data[i][j];

        return (temp);
    }

    magix operator - (magix &B)
    {
        magix temp(B.ro, B.co);
         temp.ro = B.ro;
         temp.co = B.co;
        for (int i = 0; i < B.ro; i++)
             for (int j = 0; j < B.co; j++)
                temp.data[i][j] = data[i][j] - B.data[i][j];

        return (temp);
    }

    bool operator == (magix &B)
    {
        for (int k=0; k<B.ro;k++)
        for (int j=0; j<B.co; j++)
        {
            if (data[k][j] == B.data[k][j])
                continue ;
            else
                return false;
        }
             return true;
    }



};

int main()
{
    cout << "Hello world!" << endl;
    magix A;
    cout <<"\nMatrix A:\n";
    A.display();
    magix B(A);
    cout <<"\nMatrix B:\n";
    B.display();
    magix C= A+B;
    cout <<"\nMatrix C = A + B:\n";
    C.display();
    if (A==B)
     cout <<"Matrix A equal matrix B";
    else
       cout <<"Matrix A is not equal to matrix B";


    getch();
}
