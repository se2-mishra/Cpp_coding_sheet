#include <iostream> 
using namespace std; 
class student { 
    string name; 
    int roll; 
    int mark;
    
    private:
        string sec;
        string college;
        
    public: 
            ~student(); //Destructor
            //initialize data members of a class student
            
            student() //default constructor
            {
                sec="B";
                college="GHRIET Nagpur";
                cout <<"Section= "<<sec<<endl;
                cout <<"College Name="<<college<<endl;
            }
            student(string n,int m, int p) //parameterized constructor
            { 
                name = n; 
                roll = m; 
                mark = p; 
            
            } 
            student(student &t); //copy constructor 
            void show_data() 
            { 
                cout<<"\n name :"<<name; 
                cout<<"\n roll no. :"<<roll; 
                cout<<"\n mark :"<<mark; 
            }
}; 
student :: student(student &t) //copy constructor
{ 
    name = t.name; 
    roll = t.roll; 
    mark = t.mark; 
    
} 
student :: ~student()
    {
        cout<<"\n\nStudent Detail is Closed.............\n";
    }
int main() 
{
    cout<< "\n ..........The Student Constructor started...........\n\n\n";
    cout << "\n Default Constructor Output stud1 \n";
    student stud1;
    cout << "\nParameterized Constructor Output r\n"; 
    student r("SETU SAGAR MISHRA",44,250); //parameterized constructor 
    r.show_data(); //parameterized constructor ouput 
    cout << "\n\nCopy Constructor Output stu(r)\n"; 
    student stu(r); //copy constructor 
    stu.show_data(); //copy constructor 
    return 0;
}









