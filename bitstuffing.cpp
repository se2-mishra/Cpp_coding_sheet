#include <iostream>
using namespace std;


void bitStuffing(int N, int arr[])
{
    int b[100]; 
    int i,j,n,c; 
    c=0; 
    // Stores the stuffed array
    
    j=0; 
    for(i=0;i<n;i++) 
    { 
        if(arr[i]==1) 
        { 
            c=c+1; 
            if(c==5) 
            { 
                b[j]=arr[i]; 
                j++; 
                b[j]=0; 
                j++; 
                c=0; 
            } 
            else 
            { 
                b[j]=arr[i]; 
                j++; 
            } 
        } 
        else 
        { 
            c=0; 
            b[j]=arr[i]; 
            j++; 
        } 
    } 
    //Display Answer
    cout<< "After bitstuffing\n";
    for(i = 0; i < j; i++)
        cout << b[i];
}
 
// Driver code
int main()
{
    int i, N, arr[100];
    cout<<"Enter the limit:";
    cin>>N;
    cout<<"Enter the string of 0's and 1's"<<endl;
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
        
    }
    bitStuffing(N, arr);
    return 0;
}