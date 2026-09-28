#include<iostream>
#include<string>
using namespace std;

class student
{
private:
 int rollNumber;
 string name;
 string course;

public:
  student(int rollNumber,string name,string course)
  {
  this->rollNumber=rollNumber;
  this->name=name;
  this->course=course;
  }

  void displaydetails()
  {
   cout<<"Student Details"<<endl;
   cout<<"Roll Number: "<<rollNumber<<endl;
   cout<<"Name: "<<name<<endl;
   cout<<"Course: "<<course<<endl;
  }
};

int main()
{
  student s1(101,"Anjali","Computer Science");
 
  s1.displaydetails();

  return 0;
}

