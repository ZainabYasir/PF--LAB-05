#include<iostream>
using namespace std;
int main(){
int num1,num2;
int sum=0;
cout<<"Enter an ending number:";
cin>>num1;
for(num2=1;num2<=num1;num2++){
 sum=sum+num2; 
}
cout<<"The sum is:"<<sum;
return 0;
}
