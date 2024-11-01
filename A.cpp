#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define rep(i,a,b)  for(int i = a; i < b; i++)
int main(){
optimize();
int t;
cin>>t;
while(t--){
int n;
cin>>n;
if(n%2)
cout<<"Kosuke"<<endl;
else
cout<<"Sakurako"<<endl;

}
return 0;
}