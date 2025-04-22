#include <iostream>
#include <cmath>
using namespace std;
int main (){
   string s;
   cin>>s;
   short lcnt=0 , ucnt=0;
   for(int i=0;i<s.length();i++){
    if(s[i]>=65&&s[i]<=90){
      ucnt++;
    }
    else if(s[i]>=97&&s[i]<=122){
      lcnt++;
    }
 
   }
   if(ucnt>lcnt){
    for(int i=0;i<s.length();i++){
      if(s[i]>=97&&s[i]<=122){
        s[i]=s[i]-32;
      }
 
   }
 
   }
  else if(ucnt<lcnt){
    for(int i=0;i<s.length();i++){
      if(s[i]>=65&&s[i]<=90){
        s[i]=s[i]+32;
      }
 
   }
 
   }
  else if (ucnt == lcnt){
    for(int i=0;i<s.length();i++){
      if(s[i]>=65&&s[i]<=90){
        s[i]=s[i]+32;
      }
 
   }
 
  }
  cout<<s<<endl;
 
    return 0;
}