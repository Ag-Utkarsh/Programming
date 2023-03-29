/* Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101
For ex: a[]={5,6,10,4,9}
b[]={1,2,3,4,5}
Output: 5
Explanation: a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
*/
#include<iostream>
#include<climits>
using namespace std;
void enter_value(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n],b[n];
    cout<<"Enter values for array a[]"<<endl;
    enter_value(a,n);
    cout<<"Enter values for array b[]"<<endl;
    enter_value(b,n);
    int min = INT_MAX; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n&&j!=i;j++){ 
            if(a[i]+b[j]<min){
                min = a[i]+b[j];
            }
        } 
    }
    cout<<"The lowest possible sum is: "<<min<<endl;
    return 0;
}
// PROGRAM DOCUMENTATION
