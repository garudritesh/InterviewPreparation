#include <iostream>
using namespace std;

int main(){
    int no;
cout<<"Enter number to reverse :"<<endl;
cin>>no;

if(no == 0 || no == 1){
    cout<<"Number must be 2 digit or more"<<endl;
    return 0;
}
int rev = 0;

while(no != 0 ){
    int rem = no % 10;
    rev =rev * 10 + rem;
    no=no/10;
}
cout<<"reverse :"<<rev<<endl;
   return 0;
}
