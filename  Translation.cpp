#include <iostream>
using namespace std;
int main (){
   string s,temp="";
   cin>>s;
   string t;
   cin>>t;
   for(int i=t.length()-1;i>=0;i--){
    temp+=t[i];
    }
    if(temp==s){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
 
    return 0;
}