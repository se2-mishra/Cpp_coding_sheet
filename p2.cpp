
#include <iostream>

using namespace std;
#include <iomanip>

class bank
{
    char name[20];
    int acno;
    char actype[20];
    int bal;

    public :
        void opbal(void);
        void deposit(void);
        void withdraw(void);
        void display(void);
};

void bank :: opbal(void)
{
    cout<<endl<<endl;
    cout<<"Enter Name : \t";
    cin>>name;
    cout<<"Enter A/c No. : \t";
    cin>>acno;
    cout<<"Enter A/C Type : \t";
    cin>>actype;
    cout<<"Enter Opening Balance : \t";
    cin>>bal;
}

void bank :: deposit(void)
{
    int deposit=0;
    cout<<"Enter Deposit Amount : \t";
    cin>>deposit;
    bal=deposit+bal;
    cout<<"\n Deposit Balance = \t"<<bal;
}

void bank :: withdraw(void)
{
    int withdraw;
    cout<<"\nBalance Amount =\t\t"<<bal;
    cout<<"\nEnter Withdraw Amount : \t";
    cin>>withdraw;

        if(bal>withdraw)
        {
            bal=bal-withdraw;
            cout<<"\nAfter Withdraw Balance is = \t"<<bal;
        }
        else
        {
            cout<<"\n\t Not Enough Balance";
        }
}

void bank :: display(void)
{
    cout<<endl<<endl<<endl;
    cout<<setw(50)<<"....DETAILS...."<<endl;
    cout<<setw(50)<<"Name "<<name<<endl;
    cout<<setw(50)<<"A/C. No. "<<acno<<endl;
    cout<<setw(50)<<"A/C. Type "<<actype<<endl;
    cout<<setw(50)<<"Balance "<<bal<<endl;
}


int main()
{
    bank o1;
    int choice;

    do{
        cout<<"\n\n\n\t";
        cout<<"\n\nChoice List\n\n";
        cout<<"1) To assign Initial Value\n";
        cout<<"2) To Deposit\n";
        cout<<"3) To Withdraw\n";
        cout<<"4) To Display All Details\n";
        cout<<"5) EXIT\n";
        cout<<"Enter your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: o1.opbal();
            break;

            case 2: o1.deposit();
            break;

            case 3: o1.withdraw();
            break;

            case 4: o1.display();
            break;

            case 5: goto end;

            default: cout<<"...Invalid Option...";
        }
    }while(1);

    end:
    return 0;
}
