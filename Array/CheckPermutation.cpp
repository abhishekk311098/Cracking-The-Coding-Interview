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

// first we consider a thing that in string all the character is lower case
// the solution is an O(N) solution 
// we increase the char count for the first string and then decrease the char count for second 
// array if the char count or the element int the array is zero then string is permutation

bool CheckPermutation(string first , string second ){
	int arr[26] = {0};
       	for(int i = 0;first[i] != '\0';i++){
		int ab = first.at(i) - 'a';
		arr[ab]++;
	}	

	for(int i = 0;second[i] != '\0';i++){
                int ab = second.at(i) - 'a';
                arr[ab]--;
        }

	for(int i = 0; i<26;i++){
		if(arr[i] != 0 ){
			return false;
		}
	}
	
return true;
}



int main() {
    fast;
	string first,second;
	cin>>first>>second;
	if(CheckPermutation(first,second)) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

    return 0;
}

