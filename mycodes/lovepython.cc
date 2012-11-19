#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*TEST 1

Requirements:

Create a class called STUDENT with data members firstname, lastname, age finalcwgrade and 
finalexgrade and studentID.
Use a default constructor to initialize firstname to “Usain” and lastname to “Bolt”.  Initialize 
all other data members to zero.
Define a mutator that will accept values for the data members from the user and update each data 
member.
Define a function CalculateFinalGrade that will sum the final coursework grade and the final exam 
grade and return the average of both grades.
Define a utility function that will check if the final grade is above 80, and prints the message 
“This student is above average”. If the final grade is not above 80, then your program should 
display “ This is an Average Student”  This utility should be invoked by a display function.
The display function will display all the student’s information and whether or not the student is 
average or above average.
Finally, write a main program that will implement the student class. Invoke the display function 
before the user enters inputs to display default constructor values and should also be invoked 
after the user inputs.
*/

class Student {
      private:
          string firstname, lastname;
          static int age, studentID;
          static float finalcwgrade, finalexgrade, finalgrade;
      public:
          Student(){
              firstname = "Usain";
              lastname = "Bolt";
          }
          void setStudent(string fname, string lname, int ag, int stID, float cw, float ex){
              firstname = fname;
              lastname = lname;
              age = ag;
              studentID = stID;
              finalcwgrade = cw;
              finalexgrade = ex;              
          }
          float CalculateFinalGrade(){
                finalgrade = (finalcwgrade + finalexgrade) / 2;
                return finalgrade;
          }         
          string PerfTest(){
                if(finalgrade > 80){
                    string assess = "This student is above average";
                    return assess;
                }  
                else
                {
                     string assess = "This is an Average Student";
                     return assess;
                }
          }
          void Display(){
               cout << setw(5) << "First Name" << setw(10) << "Last Name" << setw(5) << "Age" << setw(10)
               << "StudentID" << setw(10) << "CW Grade" << setw(12) << "Exam Grade" << setw(12) <<
               "Final Grade" << setw(10) << "Status" << endl;
               cout << setw(5) << firstname << setw(10) << lastname << setw(8) << age << setw(10) << 
               studentID << setw(10) << finalcwgrade << setw(10) << finalexgrade << setw(10);
               cout << CalculateFinalGrade();
               cout << setw(36); 
               cout << PerfTest();
               cout << endl << endl;   
          }
};

int Student::age = 0;
int Student::studentID = 0;
float Student::finalcwgrade = 0.0;
float Student::finalexgrade = 0.0;
float Student::finalgrade = 0.0;


int main(){
     Student stud;
     string fname, lname;
     int age, stID;
     float cw, ex; 
     
     stud.Display();
 
     cout << "Enter First Name: \t";
     cin >> fname;
     cout << endl << endl << "Enter Last Name: \t";
     cin >> lname;
     cout << endl << endl << "Enter Age: \t";
     cin >> age;
     cout << endl << endl << "Enter StudentID: \t";
     cin >> stID;
     cout << endl << endl << "Enter Final Coursework Grade: \t";
     cin >> cw;
     cout << endl << endl << "Enter Final Exam Grade: \t";
     cin >> ex;
     
     cout << endl;
     stud.setStudent(fname, lname, age, stID, cw, ex);
     
     cout << endl;
     stud.Display();
     
     cin.ignore();
     cin.get();
     
     return 0;     
}
