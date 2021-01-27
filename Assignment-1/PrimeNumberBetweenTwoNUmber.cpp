#include <iostream>
#include <cmath>
using namespace std;
int main()
{
cout<<"enter two numbers"<<endl;
int a,b;
int flag=1;
cin>>a>>b;
for(int i=a; i<=b;i++){
        flag=1;
for(int j=2;j<=i/2;j++){
    if(i%j == 0){
            flag=0;
    }

}
if(flag == 1){
    cout<<i<<endl;
}

}
  return 0;
}
