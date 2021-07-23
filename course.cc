#include <iostream>
#include <string>
#include "course.h"
using namespace std;

Course::Course()
{

}

void Course::add_assignment(Assignment a)
{
    std::vector<Assignment>::iterator it;

    it = assignments.begin();
    it = assignments.insert(it, a);
}