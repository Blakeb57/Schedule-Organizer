#include <iostream>
using namespace std;

class Assignment
{
    public:
        Assignment();
        void set_status(int);
        int get_status()const {return status;}

    private:
        int status;
};