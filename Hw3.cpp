#include <iostream>
using namespace std;
int main()
{
int num, i;
float marks[10] ,per=0,total=0;
cout<<"Enter num of subjects:";
cin>>num;
cout<<"Enter marks of subjects:";
   for (i=0; i<num;i++)
{
    cin>> marks[i];
}
  for (i=0; i<num;i++)
{
    total=total+marks[i];
}
per=total/num;
cout<< "Percentage:" <<per << "%" <<endl;

if(per>90 && per< 100)
{
    cout<< "Grade is A+";
}
else 
if(per>80 && per< 89)
{
    cout<< "Grade is A";
}
else 
if(per>70 && per< 79)
{
    cout<< "Grade is B+";
}
else 
if(per>60 && per< 69)
{
    cout<< "Grade is B";
}
else 
if(per>50 && per< 59)
{
    cout<< "Grade is C";
}
else {
    cout << "Fail";
}
    return 0;

}
