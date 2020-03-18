//day 1 -- 18-march-2020
#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cout.tie(NULL),cin.tie(NULL)
#define endl "\n"
#define lln long long
#define ln long
#define all(a) (a).begin(),(a).end()
#define ull unsigned long long
#define vi vector<int>
#define fo(i,a,b,d) for(int i=a;i<b;i+=d)
#define fop(a,b) fo(i,a,b,1)
#define rev(i,a,b,d) for(int i=a;i>b;i-=d)
#define rep(a,b) rev(i,a,b,1)
#define PrintArray(arr,_size) fo(i,0,_size,1)cout<<arr[i]<<" ";cout<<endl;
#define deb(x)cout<<#x<<" "<<x<<endl;
#define pb push_back
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define tc int T;cin>>T;while(T--)
#define ac accumulate
#define take(l) int l;cin>>l;
using namespace std;


//In this we create a array in which we store all the count of charcter 
//then we traverse the array and then find whether the count of elements of array , if it is greater than 1 then 
//it is not unique else it is unique


bool IsUnique(string abc){
	int str[128] = {0};
	for(int i = 0;abc[i] != '\0';i++){
        	int ab = abc.at(i);
       		 str[ab]++;
    	}

    	for(int i= 0;i<128;i++){
       		 if(str[i]>1){
			return false;
		 }
    	}

   return true;
}


int main() {
    fast;
    string abc;cin>>abc;
    if(IsUnique(abc)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    return 0;
}
