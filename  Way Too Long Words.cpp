#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        string w;
        cin>>w;
        if(w.size()>10)
        cout<<w[0]<<w.size()-2<<w[w.size()-1]<<endl;
        else
        cout<<w<<endl;
    }
   
    
    
    return 0;
}