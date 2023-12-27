#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;

//Vector Forms 
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>

//map forms
#define mii map<int,int>
#define mci map<char,int>

//set forms
#define s_i set<int>
#define s_c set<char>
#define s_s set<string>

void printV(vector<int>& v){
	for(int i: v){
		cout<<i<<" ";
	}
}
void inputV(vector<int>& v, int n){
	for(int i = 0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
}
long long gcd(long long a,long long b) {
	if (b==0) 
		return a;
	return gcd(b, a%b); 
}
long long lcm(long long a,long long b) {
	return a/gcd(a,b)*b; 
}


int main()
{
	cout<<"Hello world";

	return 0;
}