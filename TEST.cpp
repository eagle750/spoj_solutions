#include <iostream>
#include<stdio.h>
 
using namespace std;
 
int main() {
	int n;
	for(int i=0;i<=100;i++)
    {
	cin>>n;
	if(n!=42)
	cout<<n<<endl;
	else
        break;
    }
	return 0;
}
 