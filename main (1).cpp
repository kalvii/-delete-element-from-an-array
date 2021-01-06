#include <iostream>

using namespace std;

int main()
{   int arr[100];
    int n,loc,i,val,temp;
    cout<<"Enter the size of array :";
    cin>>n;
    for(i=0;i<n;i++)
        
            cin>>arr[i];
        
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Enter the element loc to delete : :";
        cin>>loc;
       
        cout<<endl;
        for(i=loc-1;i<n-1;i++)
        {
            
        
           arr[i]=arr[i+1];
           
            
        }
        n--;
          
       
        for(i=0;i<n;i++)
        
            cout<<arr[i]<<" ";
       
   
    return 0;
}




