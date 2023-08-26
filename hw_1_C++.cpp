//
// ========================================
// Assignment 1: C++ Programming 
// ========================================
// 
// In this assignment, we will implement 
// a Student class and a University class. 
// 
// The Student class has two private member  
// variables and five member functions (not 
// counting the constructor). Their designs 
// are explained in the template below.
// 
// The University class has one private member 
// variable and four member functions. Their 
// designs are explained in the template below.
// 
// In the template, you will see two types of 
// sections: "Task" and "Test". A "Task" section 
// is where you need to implement something, 
// and a "Test" section is testing your implementation 
// (you don't need to do anything in this section). 
// 
// For all print functions, only print the value 
// and do not add any additional character 
// such as space or change line. For example, 
// if you are asked to print the value of x, 
// write "cout << x;" instead of "cout << x << endl;"
//
//


// ======= Task 1 =======
// Complete the header files
// ......
// ......
// ......
// === End of Task 1 ====
#include <iostream>
using namespace std;




// ======= Task 2 =======
// Design and implement all member functions of the 
// following two classes: Student and University.
// All member functions must be implemented outside 
// the class definitions. 
// 
class Student {           
public:
	void set_SID(int x);  // It assigns x to SID. 
	void prt_SID();       // It prints SID. 
	void set_GPA(float y);// It assigns y to GPA. 
	void prt_GPA();       // It prints GPA. 
	void reset();         // It resets SID and GPA to -1. 
	float get_GPA();        // It returns GPA. 
	Student();            // Constructor. It initializes 
	                      // both SID and GPA to -1. 
private:
	int SID;    // It holds a student's ID. 
	float GPA;  // It holds a student's GPA.
};

//Student Implementations

void Student::set_SID(int x){
	SID = x;
}

void Student::prt_SID(){
	cout << SID;
}

void Student::set_GPA(float y){
	GPA = y;
}

void Student::prt_GPA(){
	cout << GPA;
}

void Student::reset(){
	set_SID(-1.0);
	set_GPA(-1.0);
}

float Student::get_GPA(){
	return GPA;
}

Student::Student(){
	SID = -1.0;
	GPA = -1.0;
}

//End of Student Implementations


class University {
public:
	void set_Stu(Student x[]);// It assigns x to Sooner. 
	float GPA_Mean();         // It prints the mean GPA of the five students held by Sooner[5]. 
	float GPA_Max();          // It prints the max GPA of these five students.
	float GPA_Min();          // It prints the min GPA of these five students. 
	University();             // Constructor. Initialize all student SID and GPA to -1.
	// Note: The above three functions must be implemented by yourself 
	// and not called from existing mean, max or min functions.  
private:
	Student Sooner[5];  // It holds the records of five students.
};
//......
//......
//......

//University Implementations

void University::set_Stu(Student x[]){
	
	for(int i = 0; i < 5; i++){
		Sooner[i] = x[i];
	}
}

float University::GPA_Mean(){

	float gpaSum = 0;
	float gpaMean;

	for(int i = 0; i < 5; i++){
		gpaSum += Sooner[i].get_GPA();
	}

	gpaMean = gpaSum / 5;

	cout << gpaMean;

	return gpaMean;
}

float University::GPA_Max(){
	
	float gpaMax = University::Sooner[0].get_GPA();

	for(int i = 1; i < 5; i++){
		
		if(University::Sooner[i].get_GPA() > gpaMax){
			gpaMax = University::Sooner[i].get_GPA();
		}
	}

	cout << gpaMax;

	return gpaMax;
}

float University::GPA_Min(){
	
	float gpaMin = University::Sooner[0].get_GPA();

	for(int i = 1; i < 5; i++){
		
		if(University::Sooner[i].get_GPA() < gpaMin){
			gpaMin = University::Sooner[i].get_GPA();
		}
	}

	cout << gpaMin;

	return gpaMin;
}

University::University(){

	for(int i = 0; i < 5; i++){

		University::Sooner[i] = Student();
	}
}

//End of University implementations



// === End of Task 2 ====


int main()
{
	Student x[5];
	University OU;
	// The following two variables can be used 
	// to store inputs, but you don't have to use 
	int sid; 
	float gpa; 


	// ======= Test 1 =======
	// This tests your constructor function, 
	// print function and header files. 
	for (int i = 0; i < 5; i++) {
		x[i].prt_SID(); cout << ' ';
		x[i].prt_GPA(); cout << endl;
	}
	// === End of Test 1 ====


	// ======= Task 3 =======
	// Write a program that takes the SID 
	// and GPA of five students as input 
	// and assigne them to x[5]. 
	// 
	// Formt of the inputs should be (with space)
	// SID1 GPA1 SID2 GPA2 SID3 GPA3 SID4 GPA4 SID5 GPA5
	// ......
	// ......
	// ......
	// === End of Task 3 ====
	

	// ======= Test 2 =======
	// This tests your set function
	for (int i = 0; i < 5; i++) {
		x[i].prt_SID(); cout << ' ';
		x[i].prt_GPA(); cout << endl;
	}
	// === End of Test 2 ====


	// ======= Test 3 =======
	// This tests your University class. 
	// OU.set_Stu(x);
	// OU.GPA_Mean(); cout << ' ';
	// OU.GPA_Max();  cout << ' ';
	// OU.GPA_Min();  cout << endl;
	// === End of Test 3 ====


	// ======= Test 4 =======
	// This tests your reset function.
	// for (int i = 0; i < 5; i++) {
	// 	x[i].reset();
	// 	x[i].prt_SID();	cout << ' ';
	// 	x[i].prt_GPA();	cout << endl;
	// }
	// === End of Test 4 ====
	
	return 0;
}


