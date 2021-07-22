#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "schedule.h"
using namespace std;

int main_menu();
int Add_class_menu();
int main()
{
    Schedule schedule;
    Date date;
    string username;
    string filename;
    ifstream fin;
    ofstream fout;
    int choice;

    //The code, starting from line 20 and ending at line 23, gives you the local time and date
    time_t current_date;
    struct tm * current_time;
    time(&current_date);
    current_time = localtime(&current_date);

    cout << "Welcome to your class Scheduler!" << endl;
    cout << "Please enter in your username to begin: ";
    getline(cin, username);

    filename = username + ".txt";
    fin.open(filename.c_str());

    if(!fin.fail())
    {
        schedule.load(fin);
    }
    fin.close();

    cout << endl;
    cout << "Hello, " << username << ", Today's date and time is: " << asctime(current_time);

    while(choice != 7)
    {
        choice = main_menu();

        switch(choice)
        {
            case 1:
                int choice2;
                choice2 = Add_class_menu();

                //schedule.insert(cin);

                break;
            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

            case 5:
                break;

            case 6:
                break;

            case 7:
                break;

            default:
                break;
        }
    }

    return 0;
}

int main_menu()
{
    int response;

    cout << "1.) If you want to add a class enter 1: ";
    cout << endl;
    cout << "2.) If you want to add an assignment to a class enter 2: ";
    cout << endl;
    cout << "3.) If you want to change a class, assignment, date, or status enter 3: ";
    cout << endl;
    cout << "4.) If you want to view your classes, assignments, dates enter 4: ";
    cout << endl;
    cout << "5.) If you want to view this weeks due assignments enter 5: ";
    cout << endl;
    cout << "6.) If you want to remove a class or assignmnet enter 6: ";
    cout << endl;
    cout << "7.) If you want to quit the program enter 7: ";
    cout << endl;
    cin >> response;

    return response;
}

int Add_class_menu()
{
    int response;

    cout << "1.) Enter the class you want to add: ";
    cout << endl;
    cout << "2.) If you have no class to add press 2: ";
    cout << endl;
    cin >> response;

    return response;
}



/*
Assignment get_assignment(List<Course> Courses, String assignment_name) {
    for (auto const& c : Courses) 
    {
       for (auto const& a : c.getAssignments()) {
           if a.name == assignment_name {
               return a;
           }
       }
    }
}
*/