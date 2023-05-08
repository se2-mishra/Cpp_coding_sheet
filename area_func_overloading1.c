#include <iostream>
using namespace std;

float area(float b, float h)
{
    return (0.5)*b*h;
}

float area(float r)
{
    return 3.142*r*r;
}

int main()
{
    float b,h;
    float r;
    
    cout<<"Enter the length of the base: ";
    cin>>b;
    cout<<"Enter the length of the height : ";
    cin>>h;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cout<<endl<<"The area of the triangle is "<<area(b,h)<<" units"<<endl;
    cout<<endl<<"The area of the circle is "<<area(r)<<" units"<<endl;

}
