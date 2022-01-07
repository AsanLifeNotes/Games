#include <iostream>
#include <string>

#include "gacha.h"

using namespace std;

int main(int argc,char* argv[]){
	
	if(argc>1){
		for(int i=1;i<argc;i++) cout<<argv[i]<<",";
		cout<<endl;
	}else{
		cout<<"Your Input Is: ";
		string s;
		cin>>s;
		cout<<s<<endl;
	}

	return 0;
}
