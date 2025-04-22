#include <iostream>
using namespace std;
int main (){
    int n,k,cnt=0;
    cin>>n>>k;
    int x [n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    for(int i=0;i<n;i++){
        if(x[i]>=x[k-1]&&x[i]>0){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<endl;    
    return 0;
}