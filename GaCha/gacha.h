#ifndef GACHA_H_
#define GACHA_H_

#include <cstdlib>
#include <ctime>
#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

class Gacha{
	public:
		Gacha(vector<string> elem, vector<float> chance);
		~Gacha();
		
		vector<string> getReward(int t=1);
		string getItem();
		void setMinGuaranteed(int timesOfGacha);
	
	private:
		int totalGachaTimes;
		unordered_map<int,string> m;
		vector<float> chance;
				
		int guarnateed;
};

#endif // GACHA_H_
