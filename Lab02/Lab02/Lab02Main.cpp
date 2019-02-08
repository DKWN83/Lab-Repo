#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	float homeworkScore, testScore, quizScore, attendanceScore, totalScore;

	cout << "Please enter the student's name >>> ";
	cin >> name;
	cout << "Please enter the homework score >>> ";
	cin >> homeworkScore;
	cout << "Please enter the test score >>> ";
	cin >> testScore;
	cout << "Please enter the quiz score >>> ";
	cin >> quizScore;
	cout << "Please enter the attendance score >>> ";
	cin >> attendanceScore;
	cout << endl;

	totalScore = (homeworkScore *.2) + (testScore *.5) + (quizScore * .2) + (attendanceScore * .1);

	cout << "Grades for " << name << endl;
	cout << "   Homework   : " << homeworkScore << endl;
	cout << "   Test	      : " << testScore << endl;
	cout << "   Quiz	      : " << quizScore << endl;
	cout << "   Attendance : " << attendanceScore << endl;
	cout << "==============================" << endl;
	cout << " Total Score  : " << totalScore << endl;

	system("pause");
	return 0;
}