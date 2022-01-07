#include "gacha.h"

Gacha::Gacha(vector<string> elem, vector<float> chance){
	totalGachaTimes=0;
	for(int i=0;i<elem.size();i++) m[i]=elem[i];
	chance=chance;
	guarnateed=0;
}

Gacha::~Gacha(){}

vector<string> Gacha::getReward(int t){
	srand((unsigned)time(NULL));
	vector<string> res;
	for(int i=0;i<t;i++)
		res.push_back(getItem());
	return res;
}
string Gacha::getItem(){
	return m[rand()%m.size()];
}

void Gacha::setMinGuaranteed(int timesOfGacha){guarnateed=timesOfGacha;}
