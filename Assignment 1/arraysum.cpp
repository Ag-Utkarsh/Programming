#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array, size should between 1 and 101"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter values in array"<<endl;
    for(int idx=0;idx<n;idx++)
        cin>>arr[idx];
    int max=arr[0],min=arr[0],sum=0;
    for(int ele:arr){
        if(max<ele)
           max=ele;
        if(min>ele)
           min=ele;   
    } 
    sum=max+min;
    cout<<"Sum of greatest and smallest is: "<<sum;
    return 0;
}