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
        bool isEmpty(node *head);
        void insert_at_start();

    public:
        std::string get_course(std::istream &ins)const {return course;}
        std::string get_assignment()const {return assignment;}
        std::string get_status()const {return status;}
        Date get_date()const {return current_date;}

    public:
        bool operator < (const Schedule &ap)const {return due_date < ap.due_date;}

    private:
        Date current_date;
        DateTime due_date;
        std::string course;
        std::string assignment;
        std::string status;
        node *head, *tail;
};

class node
{
    public:
        typedef Schedule value_type;

        //constructor
        node(value_type d = value_type(), node *l = NULL) {data_field = d; link_field = l;}

        //mutator functions
        void set_data(value_type d) {data_field = d;}
        void set_link(node *l) {link_field = l;}

        //accessor functions
        value_type data()const {return data_field;}
        node *link() {return link_field;}

    private:
        value_type data_field;
        node *link_field;
};

class DateTime
{
    public:
      	DateTime();
	    bool operator < (const DateTime& other)const;
        void input(std::istream& ins);
	    void output(std::ostream& outs)const;
        unsigned minutes_since_1970()const;
  
    private:
	    Date datepart;
	    int hour, minute;
};

class Active_Report:Schedule
{
    public:
        void show_active_assignments();
    
    private:
        

};

class Done_Report:Schedule
{
    public:
        void show_done_assignments();

    private:

};

class Late_Report:Schedule
{
    public:
        void show_late_assignments();

    private:
};

class Reporter:Schedule
{
    public:

    
    private:

};

class Courses_Report:Schedule
{
    public:
        void show_courses();

    private:

};

class Assignments_Report:Schedule
{
    public:

    private:

};
#endif