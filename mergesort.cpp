// Depressed boy Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long int
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

void print(ll a[],ll st,ll n){
for(ll i=0;i<n;i++){

    cout<<a[i]<<" ";
}
cout<<endl;

}

void merge(ll a[],ll l,ll mid,ll r){

cout<<"low index "<<l<<", a[l] :"<<a[l]<<",mid "<<mid<<" ,"<<" mid value "<<a[mid]<<",right index "<<r<<", right value "<<a[r]<<endl;

ll l_si=mid-l+1;
ll r_si=r-mid;

ll la[l_si],ra[r_si];

for(ll i=0;i<l_si;i++){
    la[i]=a[l+i];
}
for(ll j=0;j<r_si;j++){
    ra[j]=a[mid+1+j];
}

ll i=0,j=0,k=l;

while(i<l_si && j<r_si){
    if(la[i]<=ra[j]){
        a[k++]=la[i];
        i++;
    }
    else{
        a[k++]=ra[j];
        j++;

    }

}
while(i<l_si){
    a[k++]=la[i];
    i++;
}
while(j<r_si){
    a[k++]=ra[j];
    j++;


}



return ;
}


void mergesort(ll a[],ll l,ll r){

if(l>=r)
    return ;
else{
    ll mid=(l+r)/2;
    print(a,0,mid+1);
    mergesort(a,l,mid);
    print(a,mid+1,r+1);
    mergesort(a,mid+1,r);// not execute till the array reconstruct back
     print(a,mid+1,r+1);                   //because r is less then or equal .

    cout<<"array: "<<endl;
    print(a,l,r);
    merge(a,l,mid,r);


}



}




int main(){
ll n;
cin>>n;
ll a[n];

for(ll i=0;i<n;i++){
    a[i]=rand()%10+1;

}
print(a,0,n);

mergesort(a,0,n-1);// sending array, first  index,last index;

print(a,0,n);

return 0;
}
