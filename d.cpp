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
int array[n];
vector<pair<int,int>> indexes;
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
int sum=0;
for (int i = 0; i < n; i++)
{   
    int subsum=0;
    for (int j = i; j < n; j++)
    {
       if(array[i]==0){
        sum++;
        indexes.push_back(make_pair(i,j));
        break;
       }
       else {
        subsum+=array[j];
        if(subsum==0){
            sum++;
            indexes.push_back(make_pair(i,j));
            break;
        }
       }
    }
    
}

sort(indexes.begin(), indexes.end(), [](pair<int, int> &a, pair<int, int> &b) {
    return a.second < b.second;
});
int count=0;
int prev=-1;
for (auto &p : indexes) {
    if (p.first > prev) {
        count++;
        prev = p.second;
    }
}

cout << count << endl;

}
return 0;
}