#include<iostream>
using namespace std;

int main(){
        int n;
cout<<"enter number"<<endl;
cin>>n;
int n2 = n;
int n3 = n;
int j =1;
for(int i=n3; i>1; i--){
    n2=n2*(n-j);
    j++;
}
cout<<n2<<endl;
        return 0;
}
