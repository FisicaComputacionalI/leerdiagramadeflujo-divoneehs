#include <iostream>

using namespace std;

int main()
{
  long S=12;
  long p=0;
  cout << "inserte un numero "<<endl;
  cin >> p;
//hasta aquí da un número//
    if ( (p%2) ==0)
      p=p+1;
      cout<<"p= "<< p <<endl;
//hasta aquí nos dice si es par//
for(long i=2; i<=p/2; i++)
  {
    if (p%i==0)
    p=p+2;
 cout<<"p "<< p<<endl;
   }
//hasta aquídice si es primo//
if (p<S) {S=S-p;}
else {S=S-1;}
return 0;
}