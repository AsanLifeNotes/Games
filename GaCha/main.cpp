#include <iostream>
#include <string>

#include "gacha.h"

using namespace std;

int main(int argc,char* argv[]){

	vector<string> s {"SSR","SR","R","N","G"};
	vector<string> res;

	Gacha g{s,{1.0f}};	
	
	res=g.getReward(10);
	for(auto i:res)cout<<i<<",";
	cout<<endl;
	return 0;
}
