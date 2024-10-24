#include<iostream>
using namespace std;
int main(){
int n,i,marks;
int sum=0;
cout<<"Enter the number of subjects:";
cin>>n;
for(i=1;i<=n;i++){
cout<<"Enter the number:";
cin>>marks;
sum=sum+marks;    
}
float average=sum/n;
cout<<"Average:"<<average<<endl;
if(average>=90&&average<=100){
cout<<"Grade:A+";}
else if(average>=80&&average<=90){
cout<<"Grade:A";
}
else if(average>=70&&average<=80){
cout<<"Grade:B";
}
else if(average>=60&&average<=70){
cout<<"Grade:C";    
}    
else{
cout<<"Grade:F";    
}
   
return 0;
}