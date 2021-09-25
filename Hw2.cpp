#include <iostream>
using namespace std ;
int main()
{

int num1;
cout<< "Enter first no:";
cin>>num1;

char opr;
cout<<"Enter your operation\n + for addition ,- for substraction,* for multiplication,/ for division: ";
cin >>opr;

int num2;
cout<< "Enter second no:";
cin>>num2;

int ans,ans1,ans2,ans3;
if (opr=='+'){
ans=num1+num2;
cout<< "Answer:" << ans << endl;
}
else
 if (opr=='-'){
ans1=num1-num2;
cout<< "Answer:" << ans1 << endl;
}
else 
if (opr=='*'){
ans2=num1*num2;
cout<< "Answer:" << ans2 << endl;
}
else
 if (opr=='/'){
ans3=num1/num2;
cout<< "Answer:" << ans3 << endl;
}
else{
    cout<<"Wrong Operation";
}
    return 0;
}