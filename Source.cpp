#include <iostream>
using namespace std;
class Student
{
private :
	int id;
	string name;
	double english;
	double math;
	double it;


public:
	double total ;
	string grade;
	void setID(int id)
	{
		this->id = id;
		
	}
	int getID()
	{
		
		return id;

	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName()
	{
		return name;
	}
	void setEnglish(double english)
	{
		this->english = english;
	}
	double getEndlish()
	{
		return english;
	}
	void setMath(double math)
	{
		this->math = math;
	}
	double getMath()
	{
		return math;
	}
	void setIT(double it)
	{
		this->it = it;
	}
	double getIT()
	{
		return it;
	}
	double getTotal()
	{
		 total =  english + math + it;
		return total;
	}
	string getGrade()
	{
		
		if ( getTotal() >= 90)
			grade = "A+" ;
		if (getTotal() >= 80 && getTotal() <= 89)
			grade = "A0";
		if (getTotal() >= 70 && getTotal() <= 79)
			grade = "B+";
		if (getTotal() >= 60 && getTotal() <= 69)
			grade = "B0";
		if (getTotal() >= 50 && getTotal() <= 59)
			grade = "C+";
		if (getTotal() >= 40 && getTotal() <= 49)
			grade = "C0";
		if (getTotal() >= 30 && getTotal() <= 39)
			grade = "D+";
		if (getTotal() >= 20 && getTotal() <= 29)
			grade = "D0";
		if (getTotal() >= 0 && getTotal() <= 19)
			grade = "F";
		return grade;
	}
	void displayMessage()
	{
		cout << "\n\n\n The student information : " << endl;
		cout << "Student  ID - " << id << endl;
		cout << "Student name - " << name << endl;
		cout << "English score - " << english << endl;
		cout << "Math score - " << math << endl;
		cout << "IT score - " << it << endl;
		cout << "Your total score is - " << getTotal() << endl;
		cout << "Your grade is < " << getGrade() << " >" << endl;

	}


};
int main()
{
	int id;
	string name;
	double english;
	double math;
	double it;

	Student stud;
	cout << "enter your student ID: " << endl;
	cin >> id;
	stud.setID(id);
	cout << "Enter your name : " << endl;
	cin >> name;
	stud.setName(name);
	cout << "Enter tour English score :" << endl;
	cin >> english;
	stud.setEnglish(english);
	cout << "Enter tour Math score :" << endl;
	cin >> math;
	stud.setMath(math);
	cout << "Enter tour IT score :" << endl;
	cin >> it;
	stud.setIT(it);
	stud.displayMessage();
	
	;


	return 0;
}