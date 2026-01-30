// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    int tot_creds  = 0;
    int stud_points = 0;
    for (Grade& gds : grades) {
        if (id == gds.get_student_id()) {
            int f1_points = 0;
            switch(gds.get_grade()){
                case'A': f1_points = 4;
                break;
                case'B': f1_points = 3;
                break;
                case'C': f1_points = 2;
                break;
                case'D': f1_points = 1;
                break;
                // Anything else remains zero
            }

            auto f1_creds = courses[gds.get_course_id() - 1].get_credits();
            tot_creds   += f1_creds;
            stud_points += f1_creds * f1_points;

        }  // Matched student
    }
    std::cout << "tot_creds   == " <<   tot_creds << std::endl;
    std::cout << "stud_points == " << stud_points << std::endl;
    GPA = (float) stud_points / (float) tot_creds;

    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
