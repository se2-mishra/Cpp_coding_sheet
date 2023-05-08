/*
Consider a class network of above figure. 
The class master derives information from both account and admin classes which in turn derive information from the class person. 
Define all the four classes (which in turn derive information from) x and 
write a program to create, update and display the information contain in master objects.
*/
#include<iostream> 
using namespace std; 
class person 
{ 
    string n; 
    int c; 
    public: 
    void pgetdata() 
    { 
        cout<<"\nEnter name : "; 
        cin>>n; 
        cout<<"\nEnter code : "; 
        cin>>c; 
    } 
    void pdisplay() 
    { 
        cout<<"\nName : "<<n; 
    } 
}; 
class account: public virtual person 
{ 
    double p; 
    public: 
    void agetdata() 
    { 
        cout<<"\nEnter pay : "; 
        cin>>p; 
    } 
    void adisplay() 
    { 
        cout<<"\nPay : "<<p; 
    } 
}; 

class admin: public virtual person 
{ 
    int e; 
    public: 
    void adgetdata() 
    { 
        cout<<"\nEnter experience : "; 
        cin>>e; 
    } 
    void addisplay() 
    { 
        cout<<"\nExperience : "<<e; 
    } 
}; 

class master: public account, public admin 
{ 
    public: 
    void getdata() 
    { 
        pgetdata(); 
        adgetdata(); 
        agetdata(); 
    } 
    void display() 
    { 
        pdisplay(); 
        addisplay(); 
        adisplay(); 
    } 
}; 
int main() 
{ 
    master m; 
    int a,t=1; 
    do 
    { 
        cout<<"\n\n\t\tEnter your choice from 1,2 and 3\n\t";
        cout<<"\n\t1. Create:"; 
        cout<<"\n\t2. Update:"; 
        cout<<"\n\t3. Display:\n"; 
        cout<<"Enter: ";
        cin>>a; 
        if(a==1) 
        { 
            if(t==1) 
            { 
                m.getdata(); 
                t++; 
            } 
            else 
            { 
                cout<<"\n Cannot Create!\n"; 
            } 
        } 
        if(a==2) 
        { 
            if(t==1) 
            { 
                cout<<"\nCreate object first!\n"; 
            } 
            else 
            { 
                m.getdata(); 
                t++; 
            } 
        } 
        if(a==3) 
        { 
            if(t==1) 
            { 
                cout<<"\nCreate object first!\n"; 
            }
            else 
            { 
                m.display(); 
                t++; 
            } 
        } 
    }while(a>=1 && a<=3); 
}
