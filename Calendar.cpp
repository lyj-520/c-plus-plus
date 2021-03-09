#include<iostream>
#include<iomanip>
using  namespace std;
int main()
{
int day,stop;
int i=0,j=0;
cin>>day>>stop;
cout<<setw(5)<<"Sun"<<setw(5)<<"Mon"<<setw(5)<<"Tus"<<setw(5)<<"Wed"<<setw(5)<<"Thu"<<setw(5)<<"Fri"<<setw(5)<<"Sat"<<endl;

for(i=0;i<=day+stop-1;i++)
{
if(i<day)
cout<<setw(5)<<"";

else
{
    cout<<setw(5)<<j-day+1;
}
j++;

if(j%7==0)
{
    cout<<endl;
}

}

return 0;

}

