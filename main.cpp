#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class player
{
private:
    int number;
    string name;
    int goal;
    int age;
    string position;
    double salary;

public:

    player()
    {
        number = 0;
        name = "";
        goal = 0;
        position = "";
        salary = 1.0;
        age = 0;
    }

    player(int n, string na, int g, string p, int age, double sa)
    {
         number = n;
         name = na;
         goal = g;
         position = p;
         age = age;
         salary = sa;
    }

    int getNum()
    {
        return number;
    }
    string getName()
    {
        return name;
    }
    int getGoal()
    {
        return goal;
    }
    string getPo()
    {
        return position;
    }
    int getAge()
    {
        return age;
    }
    void setSal(double s)
    {
        int basic = 30;
        return s*goal*basic;
    }
    double getSal()
    {
        return salary;
    }

};

class FootballfcManagement
{
private:
    vector<player> list;
public:

    FootballfcManagement()
    {
        while(true)
	  	{

		  cout << "*o-o-FootballFC management-o-o*" << endl;
		  cout << "  1. Input  "<< endl;
		  cout << "  2. Line up  "<< endl;
		  cout << "  3. Sort salary   "<< endl;
		  cout << "  4. Search by name   "<< endl;
		  cout << "  5. Golden boot winner " << endl ;
		  cout << "  6. Quit " <<endl ;
		  cout << "  -------------"<< endl;


		  	int choice;
		  	cout << "  What choice? ";
		 	cin >> choice;
		 	switch(num)
		  {
		  	case 1:
			  this->input();
			  break;
		  	case 2:
			  this->view();
			  break;
		  	case 3:
			  sortg();
			  break;
		  	case 4:
			  searchbyname();
			  break;
			case 5:
			  findhighestgoal() ;
			  break ;
			default :
				cout <<"--- Ten` ten' ten-------" << endl;
				return;
	  	  }
	  	}
    }

    void input()
    {
        int num ;
        int number;
        string name;
        int goal;
        int age;
        string position;
        double salary;

        cout << "Input numbers football players: ";
        cin >> num;
        for(int i = 1; i <= num; i++)
        {
            cout << "Player #"<< i<< endl
                 << "Name: "
            cin >> name;
            cout << "\nage: ";
            cin >> age;
            cout << "\ngoal: ";
            cin >> goal;
            cout << "\nposition: ";
            cin >> position;
            cout << "\nsalary: ";
            cin >> salary;

            player fp = new player(number,name,goal,position,age,salary);
            list.push_back(fp);
        }

    }

    void view()
    {
        cout << "Line Up:\n"<<endl;
        for(auto i = list.begin(); i != list.end(); i++)
        {
            cout << "\t\t"<< i->getNum()<< "  "<< i->getName()<< "  <"<< i->getPO()<< ">  "<< i->getAGe()<< endl;
        }

        cout << "~~DREAM TEAM~~"
    }

    void findhighestgoal()
    {
        int t = 0;
        int highest = 0;
        for(auto i = list.begin(); i != list.end(); i++)
        {
            if(t == 0)
            {
                highest = i->getGoal();
                k = 1;
            }
            else
            {
                if(i->getGoal() > highest)
                    highest = i->getGoal();
            }
        }

        for(auto i = list.begin(); i != list.end(); i++)
        {
            if(i->getGoal() == highest)
                cout<< "  "<< i->getNum()<< "  "<< i->getName()<< "  <"<< i->getPo()<< "> "<< "~~"<< i->getGoal()<< "~~ \n";
        }

    }

    void searchbyname()
    {
        bool temp = true;
        string name;
        cout << "WHO? ";
        cin >> name;
        cout << "Found it!!\n";
        for(auto i = list.begin(); i != list.end(); i++)
        {
            if(i->getName().compare(name) == 0)
            {
                temp = false;
                cout << "\t\t"<< i->getNum()<< "  "<< i->getName()<< "  <"<< i->getPo()<< ">  "<< i->getAge()<< endl
                     << "   GOAL: "<< i->getGoal()<<endl
                     << "   Salary: "<< i->getSa();
            }
        }

        if(temp == true)
        {
            cout<< "ten` ten ten ten` tennnn"
                << "WHO IS THIS?_?"<< endl;
        }
    }

    void sortg()
    {
        sort(list.begin(), list.end());
        cout << "Salary List"<< endl;
        int j = 0;
        for(auto i = list.begin(); i != list.end(); i++)
        {
            j++;
            cout<< "  "<< i->getNum()<< "  "<< i->getName()<< "  <"<< i->getPo()<< "> "<< "~~"<< i->getGoal()<< "~~ \n";

        }
    }

};

int main()
{
    FootballfcManagement start;
}
