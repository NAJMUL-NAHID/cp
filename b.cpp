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
//int array[n][n];
int diagarr[2*n-1];
memset(diagarr, 0, sizeof(diagarr));
for (int i = 0; i <n; i++)
{
for( int j = 0; j < n; j++)
{
   int x;
  cin>>x;
  if(x>=0) continue;
  else 
  {
    if((i-j>=0) && diagarr[i-j]>x){
        diagarr[i-j]=x;
      //  cout<<diagarr[i-j]<<" ";
    }
    else if( (i-j<0) && (diagarr[2*n+i-j-1]>x)){
        diagarr[2*n+i-j-1]=x;
      //  cout<<diagarr[2*n+i-j-1]<<" ";
    }
  }

}
}
long long sum=0;
for (int i = 0; i < 2 * n - 1; i++) {
    sum+=diagarr[i];
}
cout<<-1*sum<<endl;

}
return 0;
}