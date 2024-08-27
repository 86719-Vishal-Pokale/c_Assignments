#include <iostream>
using namespace std;
struct Student{
    string studentName;
    string rollNo;
    int totalMarks;
};
void readData(Student& s){
    cout<<"Name: ";
    cin>>s.studentName;
    cout<<"Roll No: ";
    cin>>s.rollNo;
    cout<<"Total Marks: ";
    cin>>s.totalMarks;
}
void displayData(Student& s){
    cout<<"Student Name: "<<s.studentName<<endl;
    cout <<"Roll Number: "<<s.rollNo<<endl;
    cout <<"Total Marks: "<<s.totalMarks<<endl;
}
int main()
{
    Student s;
    readData(s);
    displayData(s);
    return 0;
}