#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int main() {
int n,m;
    vector<pair<int,int> >a;
    int b[100004];
    cin>>n;
    for(int i=0;i<n;i++)
       {
        int temp;
        cin>>temp;
        if(i==0)
            a.push_back(make_pair(temp,1));
        else
            {
            if(temp==a[i-1].first)
                a.push_back(make_pair(temp,a[i-1].second));
            else
                a.push_back(make_pair(temp,a[i-1].second+1));
        }
       }
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];
    int i=0;
    int k=n-1;
    while(i<m)
        {
        while(b[i]>a[k].first)
            k--;
   //     cout<<k<<" ";
        if(k<0)
            cout<<1<<endl;
        else
            {
            if(b[i]==a[k].first)
                cout<<a[k].second<<endl;
            else
                if(b[i]<a[k].first)
        cout<<a[k].second+1<<endl;
        }
        i++;
        }   
    return 0;
}