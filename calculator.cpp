#include<iostream>
using namespace std;
int main(){
    char a;
    float num1 ,num2;
    cout<<"Welcome to the most premium and simple and friendly calculator"<<endl;
    cout<<"Enter the operator which you want to use"<<endl;
    cin>>a;
    cout<<"enter the digits on which you want to perform operations"<<endl;
    cin>>num1>>num2;

    if (a=='+')
    {
        cout<<num1+num2;

     }
     else if(a=='-'){
         cout<<num1-num2;
     }
     else if(a=='*'){
         cout<<num1*num2;

     }
     else if(a=='/'){
         cout<<num1/num2;
     }
    else{
        cout<<"Sorry!to say but you entered wrong digits or may possible you have entered wrong operators"<<endl;
    }

    cout<<endl;


        
  return 0;

}