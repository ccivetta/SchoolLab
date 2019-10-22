//
// Created by Chris Civetta on 10/21/19.
//

#ifndef SCHOOLLAB_COURSE_H
#define SCHOOLLAB_COURSE_H
#include "Student.h"
#include "Teacher.h"

class Course {
public:
    Course();
    Course(Student, Student, Student, Teacher);
    ~Course();

private:
    Student studentList[3];
    Teacher t = Teacher();
};


#endif //SCHOOLLAB_COURSE_H
