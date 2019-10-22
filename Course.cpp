//
// Created by Chris Civetta on 10/21/19.
//

#include "Course.h"

Course::Course() {
    studentList[0] = Student();
    studentList[1] = Student();
    studentList[2] = Student();
    t = Teacher();
}

Course::~Course() {

}

Course::Course(Student s1, Student s2, Student s3, Teacher teach) {
    studentList[0] = s1;
    studentList[1] = s2;
    studentList[2] = s3;
    t = teach;
}
