#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter values in array 'a'"<<endl;
    for(int idx=0;idx<n;idx++)
        cin>>a[idx];
    cout<<"Enter values in array 'b'"<<endl;
    for(int idx=0;idx<n;idx++)
        cin>>b[idx];
    int min=a[0]+b[1],ele;    
    for(int idx=0;idx<n;idx++){
        for(int j=0;j!=idx;j++){
            ele=a[idx]+b[j];
            if(min>ele)
               min=ele; }   
    }
    cout<<"Lowest possible sum amongst all combinations "<<min<<endl;    
    return 0;    
}