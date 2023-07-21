// Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void print(ll a[],ll n){
for(ll i=0;i<n;i++){

    cout<<a[i]<<" ";
}
cout<<endl;

}

void insertion(ll a[],ll n){

for(ll i=1;i<n;i++){
      ll key=a[i];
    ll j=i-1;
    while(key<a[j] && j>=0){
        a[j+1]=a[j];
        --j;
       // cout<<"j :"<<j<<endl;

    }
    a[j+1]=key;



}


}


int main(){
ll n;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    a[i]=rand()%10+1;
}
print(a,n);

insertion(a,n);
print(a,n);


return 0;
}



