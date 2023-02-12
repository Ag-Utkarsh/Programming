 #include<iostream>
 using namespace std;
 int main(){
 int result=1010;
   int count = 0;
    while(result!=0){//count of zero's
      int r = result%10;
      if(r==0){
      
      count++;
      }
      result/=10;
    }
    cout<<"Total number of zero's are = "<<count<<endl;
   
   return 0;
    
 }