#include <iostream>
#include <vector>
#include "assignment.h"
using namespace std;



class Course
{
    public:
        Course();
        void add_assignment(Assignment);

    private:
        std::vector<Assignment> assignments;
};