#include <iostream>
#include <algorithm>
using namespace std;
int main (){
 
  long long n;
  short k;
  cin>>n>>k;
   for(int i=1;i<=k;i++){
     if (n%10 > 0){
      n-=1;
     }
     else if(n%10 == 0){
      n/=10;
 
     }
   }
   cout<<n<<endl;
 
 
    return 0;
}