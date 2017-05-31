#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
 
int main() {
	while(1)
	{
	    int l;
	    cin>>l;
	    if(l==0)
	    break;
	    double r=l/M_PI;
	    //cout<<M_PI<<endl;
	    double area=(M_PI*r*r)/2;
	  // cout<<area<<endl;
       printf("%.2lf\n",area);
	}
	return 0;
}
 