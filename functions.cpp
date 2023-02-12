#include<iostream>
#include<math.h>
using namespace std;
void fun(int x,int y,int z=9){
    cout<<x<<" "<<y<<" "<<z<<endl;
}
int main(){
   int x=9,y=19;
   fun(x,6,1 );
   return 0;
}