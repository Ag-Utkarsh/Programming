#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values in array"<<endl;
    for(int idx=0;idx<n;idx++){
        cin>>arr[idx];
        if(arr[idx]%2==0)
           even++;
        else 
            odd++;   
    }
    cout<<"Number of odd integers are: "<<odd<<endl;
    cout<<"Number of even integers are: "<<even<<endl;
    return 0;    
}
