#include <iostream>
#include <ctype.h>
#include <vector>
#include "date.h"
using namespace std;

#ifndef SCHEDULE
#define SCHEDULE

class Schedule
{
    public:
        Schedule(Date d = Date(1,1,1900), std::string p = "VOID");
        //void show_week_assignments();
        void insert(Schedule temporary);
        void Move_from_list(std::string move_item);
        void soonest_due_sort();
        void farthest_due_sort();
        void load(std::istream &ins);
        void save(std::ostream &outs)const;

    public:
        std::string get_course(std::istream &ins)const {return course;}
        std::string get_assignment()const {return assignment;}
        std::string get_status()const {return status;}
        Date get_date()const {return current_date;}

    private:
        Date current_date;
        std::string course;
        std::string assignment;
        std::string status;
};
#endif