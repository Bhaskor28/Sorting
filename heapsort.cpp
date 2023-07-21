#include<bits/stdc++.h>
using namespace std;
#define ll long long

void print(ll a[],ll n){
for(ll i=1;i<n;i++){

    cout<<a[i]<<" ";
}
cout<<endl;

}


void heap(ll a[],ll n,ll i){
    ll pa=i;
    ll l_ch=2*i;
    ll r_ch=2*i+1;

    if(l_ch<n && a[pa]<a[l_ch])
        pa=l_ch;
    if(r_ch<n && a[pa]<a[r_ch])
        pa=r_ch;

    if(pa!=i){
        swap(a[pa],a[i]);
        heap(a,n,pa);
    }

}

void heapsort(ll a[],ll n){
ll si=n;
while(si>1){

    cout<<"last index: "<<si<<endl;
    print(a,n+1);
    swap(a[1],a[si]);
    si--;
    print(a,n+1);
    heap(a,si,1);


}


}



int main(){
    ll n;
cin>>n;
ll a[n];

for(ll i=1;i<n;i++){
    a[i]=rand()%10+1;
}
print(a,n);

for(ll i=n/2;i>0;i--){
    heap(a,n,i);


}

print(a,n);

clock_t st,et;
st=clock();


heapsort(a,n-1);
et=clock();



cout<<"After Sort :"<<endl;
print(a,n);
double ex=(double)(et-st)/CLOCKS_PER_SEC;
cout<<"execution time: "<<ex<<endl;


}

