#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "schedule.h"
using namespace std;

Schedule::Schedule(Date d, string p)
{
    status = "ACTIVE";
    //due_date = d;
    course = "N/A";
    assignment = "N/A";
    head = NULL;
    tail = NULL;
}

bool Schedule::isEmpty(node *head)
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Courses_Report::show_courses()
{

}

void Active_Report::show_active_assignments()
{

}

void Done_Report::show_done_assignments()
{

}

void Late_Report::show_late_assignments()
{

}

/*
void Schedule::show_week_assignments()
{

}
*/

void Schedule::soonest_due_sort()
{

}

void Schedule::farthest_due_sort()
{

}

void Schedule::insert_at_start()
{

}

void Schedule::insert(Schedule temporary)
{
    node *cursor;

    if(head == NULL)
    {
        head = new node;
        head->set_data(temporary);
        head->set_link(NULL);
    }
    else
    {
        for(cursor = head; cursor->link() != NULL; cursor = cursor->link());

        cursor->set_link(new node);
        cursor = cursor->link();
        cursor->set_data(temporary);
        cursor->set_link(NULL);
    }
}

void Schedule::Move_from_list(string move_item)
{

}

/*
void Schedule::resize()
{

}
*/

void Schedule::load(std::istream &ins)
{

}

void Schedule::save(ostream &outs)const
{
    const node * cursor = head;
/*
    if(head == NULL)
    {
        cout << "The file has been saved" << endl;
    }
*/
    while(cursor != NULL)
    {
       // outs << cursor->data();
    }
}