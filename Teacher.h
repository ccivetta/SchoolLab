//
// Created by Chris Civetta on 10/21/19.
//

#ifndef SCHOOLLAB_TEACHER_H
#define SCHOOLLAB_TEACHER_H
#include <iostream>
using namespace std;

class Teacher {
    private:
        string first;
        string last;
        int age;
        string adress;
        string city;
        long phone;
    public:
        string getFirst();
        string getLast();
        int getAge();
        string getAdress();
        string getCity();
        unsigned int getPhone();
        Teacher();
        Teacher(string, string, int, string, string, long);
        ~Teacher();
        void gradeStudent();
        void sitInClass();
    };


#endif //SCHOOLLAB_TEACHER_H
