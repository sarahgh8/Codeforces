#include <iostream>
using namespace std;
int main (){
 
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(s[i]=='a'||s[i]=='o'||s[i]=='u'||s[i]=='e'||s[i]=='i'||s[i]=='y'||s[i]=='A'||s[i]=='O'||s[i]=='U'||s[i]=='E'||s[i]=='I'||s[i]=='Y'){
      s[i] = 0;
    }
 
  }
  for(int i=0;i<s.length();i++){
    if(s[i]>=65&&s[i]<=90){
      s[i]+=32;
    }
  }
  string t = s;
  for(int i=0;i<t.length();i++){
    if(t[i] == 0){
      continue;
    }
    else{
      cout<<"."<<t[i];
    }
  }
 
 
    return 0;
}