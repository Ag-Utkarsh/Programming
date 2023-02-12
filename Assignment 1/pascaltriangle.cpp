#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascalTriange(int n){
    vector<vector<int>>pascal(n);
    for(int i=0;i<n;i++){
        
    }
}
int main(){
    int n;
    cout<<"Enter size of pascal triangle ";
    cin>>n;
    
    vector<vector<int>>ans;
    ans = pascalTriangle(n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;        
    }
    return 0;
}