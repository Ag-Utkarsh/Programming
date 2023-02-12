#include<iostream>
using namespace std;
int missing(int arr[],int n){
    int sum=0,s=0;
    for(int idx=0;idx<n;idx++)
        sum+=arr[idx];
    for(int i=0;i<=n;i++)
        s+=i;
    int miss=s-sum;
    return miss;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter values in array in range 0 to n"<<endl;
    for(int idx=0;idx<n;idx++)
        cin>>arr[idx];
    cout<<"Missing number is: "<<missing(arr,n)<<endl;    
    return 0;      
}    
