//  Bhaskor Roy
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



int partition(ll a[],ll low,ll high){// for rearranging the pivot element

ll pivot=a[high];
ll i=(low-1);
for(ll j=low;j<high;j++){

    if(a[j]<=pivot){
        i++;
        swap(a[i],a[j]);


    }


}
swap(a[i+1],a[high]);

return (i+1);

}

void quicksort(ll a[],ll low,ll high){

if(low<high){
ll pi=partition(a,low,high);
//cout<<pi<<endl;



    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);

}



}



int main(){
ll n;
//cin>>n;
ll a[]={8,7,6,1,0,9,2};

n=sizeof(a)/sizeof(a[0]);

/*

for(ll i=0;i<n;i++){
    a[i]=rand()%10+1;

}

*/

print(a,0,n);
//partition(a,0,7-1);

print(a,0,n);
quicksort(a,0,n-1);
print(a,0,n);


return 0;
}

/*
1.select the pivot element(here pivot last index element)
2.rearrange the {

el<pivot
go before the pivot
el>pivot
go after the pivot
ex:
7
8 7 6 1 0 9 2


}


https://www.programiz.com/dsa/quick-sort


*/
