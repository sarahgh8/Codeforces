#include <iostream>
using namespace std;
int main (){
   short a , b, count=0;
   cin>>a>>b;
   count++;
   while(b>=a) {
    
    a*=3;
    b*=2;
    if(b>=a){
      count++;
    }
   }
   cout<<count<<endl;
 
    return 0;
}