#include <iostream>
#include <cmath>
using namespace std;
int main (){
   int g,acnt=0,dcnt=0;
   cin>>g;
   string s;
   cin>>s;
   for(int i=0;i<g;i++){
    if(s[i]=='A'){
      acnt++;
    }
    else if(s[i]=='D'){
      dcnt++;
    }
   }
   if(acnt>dcnt){
    cout<<"Anton"<<endl;
   }
   if(acnt<dcnt){
    cout<<"Danik"<<endl;
   }
   if(acnt==dcnt){
    cout<<"Friendship"<<endl;
   }
 
    return 0;
}