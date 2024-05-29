#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
unsigned long int e,f,g ; 
bool aprimenumber=true ;
cout << "Please Enter A Positive Number:" ;
cin>> e ;
f=sqrt(e) ;
g=2 ;
while (g<=f && aprimenumber==true ) {
	if (e%g==0)
	aprimenumber=false ;
	g++ ;
}
if (aprimenumber)
cout<<e<<"\t yes!" ;
else
cout<<e<<"\t no!" ;
return 0 ;
 }
