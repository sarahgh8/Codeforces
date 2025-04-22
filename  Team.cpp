#include <iostream>
using namespace std;
int main (){
    int n,sum=0,cnt=0; 
    cin>>n;
    int x [n][3];
    for (int i=1;i<=n;i++){
        for(int j=1;j<=3;j++){
            cin>>x[i][j];
            sum+=x[i][j];
            
        }
        if(sum>1){
            cnt++;
            sum=0;
        }
        else{
            sum=0;
            continue;
        }
    }
    cout<<cnt<<endl;
    return 0;
    
}