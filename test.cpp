#include<bits/stdc++.h>
using namespace std;
int n;
//cin>>n;

int main(){
cin>>n;
int number[n] ;
int x;
int sum =0;
for(x=0;x<n;x++){
cin>>number[x];

sum=sum+number[x];
}
cout<<sum<<endl;

 return 0;

}
