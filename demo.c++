#include<iostream>
#include<string>
using namespace std;
bool com(char c1,char c2) {
	int num1=c1-'a',num2=c2-'a';
	if(num1==num2||num1-1==num2||num1+1==num2||num1-9==num2||num1-8==num2||num1-10==num2||num1+9==num2||num1+8==num2||num1+10==num2)
		return false;
	else
		return true;
}
int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
		string x,y;
		cin>>x>>y;
		if(x.length()==y.length()) {
			if(x==y) {
				cout<<1<<endl;
			} else {
				bool flag=true;
				for(int j=0; j<x.length(); j++) {
					if(com(x[j],y[j])) {
						flag=false;
						break;
					}
				}
				if(flag)
					cout<<2<<endl;
				else
					cout<<3<<endl;
			}

		} else
			cout<<3<<endl;
	}
	return 0;
}
