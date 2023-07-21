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

void selectionsort(ll a[],ll n){

for(ll i=0;i<n;i++){
    ll st=i;
    for(ll j=i+1;j<n;j++){
        if(a[j]<=a[st]){
            st=j;
        }
    }
    swap(a[st],a[i]);



}


}


int main(){

ll a[]={20,12,10,15,2};
ll n=sizeof(a)/sizeof(a[0]);


print(a,n);
selectionsort(a,n);
print(a,n);



return 0;
}
