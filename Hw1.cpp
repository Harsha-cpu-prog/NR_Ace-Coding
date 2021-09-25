#include <iostream>
using namespace std;

int main()

{
 int a,b;
 cout <<"Enter two no";
cin>>a>>b;
int res=a-b;
if (res>0){
cout<< res*100;
}
else if (res<-100){
cout << res+600;
}
else {
cout << res*2;
}
cout << "program done.";
return 0;
}