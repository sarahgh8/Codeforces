#include <iostream>
#include <algorithm>
using namespace std;
int main (){
 
  string s,temp=""; 
  int count =0;
 
  cin>>s;
  
  for(int i=0;i<s.length();i+=2){
    temp+=s[i];
 
  }
  sort(temp.begin(),temp.end());
  for(int i=0;i<temp.length();i++){
    if(i == temp.length()-1){
      cout<<temp[i];
 
    }
    else{
    cout<<temp[i]<<"+";
    }
   }
  
  
 
    return 0;
}