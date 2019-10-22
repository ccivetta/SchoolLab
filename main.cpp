#include <iostream>
#include "Student.h""
#include "Course.h""
using namespace std;
int main() {
    auto student1 = Student("Chris", "Civetta", 17, "14 Laurel Hill Drive", "Randolph", 9735271510);
    auto student2 = Student("Joe", "Smith", 21, "1 Main Street", "New York", 8763981269);
    auto student3 = Student("Dave", "Ding", 54, "89 Left Street", "Chicago", 9864562389);
    auto teach = Teacher("Mrs.", "Roberts", 45, "511 Milbrook Ave", "Randolph", 9734361527);
    auto IntermediateC = Course(student1, student2, student3, teach);
    cout<<"Intermediate C++"<<endl;
    teach.gradeStudent();


    return 0;
}