
#include <iostream>
using namespace std;
char find_grade(float each_marks){
        char grade='F';
        if(each_marks<=50){grade='F';}
        else if(each_marks<=60){grade='E';}
        else if(each_marks<=70){grade='D';}
        else if(each_marks<=80){grade='C';}
        else if(each_marks<=90){grade='B';}
        else if(each_marks<=100){grade='A';}
        else {grade='F';}
        return grade;
}
class Student{
    int id;
    string name;
    float marks[10];
public:
    int no_of_subjects;
    void read(){
        cout<<"Enter student id: ";cin>>id;
        cout<<"Enter Name: ";getline(cin,name);getline(cin,name);
        cout<<"Enter no of Subject: ";cin>>no_of_subjects;
        cout<<"Enter all the marks: ";
            for(int i =0;i<no_of_subjects;i++){
                cin>>marks[i];
            }
    }
    void display(){
        cout<<"ID:"<<id<<", NAME:"<<name<<", MARKS:";
        for(int i=0;i<no_of_subjects;i++){
            cout<<" "<<marks[i];
        }
        cout<<"\n";
    }
    void addstud(){
        read();
    }
    //Kolukula
    float find_avg_marks(){
        float subject_sum=0;
        for(int i=0;i<no_of_subjects;i++){
            subject_sum+=marks[i];
        }
        return subject_sum/no_of_subjects;
    }
    char find_avg_grade(){
        int marks=find_avg_marks();
        char grade = find_grade(marks);
        return grade;
    }
    friend void get_all_grades(Student s1);
    friend void get_all_grades_ref(Student &s1, char* arr);
};
//pass by value
void get_all_grades(Student s1){
    char arr[10];char temp_grade;
    for(int i=0;i<s1.no_of_subjects;i++){
        temp_grade=find_grade(s1.marks[i]);
        arr[i]=temp_grade;
    }
    //print it
    cout<<"GRADES: ";
    for(int i=0;i<s1.no_of_subjects;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}
//pass by reference
void get_all_grades_ref(Student &s1, char* arr){
    char temp_grade;
    for(int i=0;i<s1.no_of_subjects;i++){
        temp_grade=find_grade(s1.marks[i]);
        arr[i]=temp_grade;
    }
    //print it
    cout<<"GRADES: ";
    for(int i=0;i<s1.no_of_subjects;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}

int main() {
    Student s1,s2;
    s1.read();
    s1.display();
    get_all_grades(s1);
    
    cout<<"AVG MARKS:"<<s1.find_avg_marks()<<"\n";
    cout<<"AVG GRADE:"<<s1.find_avg_grade()<<"\n";
    
    char ref_grade[10];
    get_all_grades_ref(s1,ref_grade);
    cout<<" "<<ref_grade[0]<<" "<<ref_grade[1]<<"\n";
    

    return 0;
}
