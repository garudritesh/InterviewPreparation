#include<iostream>
using namespace std;

int main(){
int number;
cout<<"enter number"<<endl;
cin>>number;
int flag = 1;
int number2 = number/2;

for(int i=2; i<=number2; i++){
    if(number%i == 0){
        flag=0;
    }

}
if(flag == 0){
    cout<<"number is not prime number"<<endl;
}
else{
    cout<<"number is prime number"<<endl;
}
return 0;
}
