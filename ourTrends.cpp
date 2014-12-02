#include "ourTrends.h"
#include <algorithm>

//This function is defined lower
bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j);

void ourTrends::increaseCount(std::string s, unsigned int amount){
	//Check to see if word is present
	if (wordTable.keyExists(s)){
		int index = wordTable.find(s);
		frequencyList[index].t++;
	}

	//If the word is not present
	else{
		wordTable.add(s, 1);
	}
}

std::string ourTrends::getNthPopular(unsigned int n){
	if (n <= numEntries()){
		frequencyList.find(n);

	}
	//If they give bad input, return empty string.
	return "";
}

unsigned int ourTrends::getCount(std::string s){
	//Check to see if word is present
	if (wordTable.keyExists(s)){
		return wordTable.find(s);
	}else
	{
		return 0;
	}
}

bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j) {
	if (i.second == j.second){
		return (i.first < j.first);
	}
	return (i.second > j.second);
}

unsigned int ourTrends::numEntries(){
	return wordCountVector.size();
}

unsigned long hash(std::string k){
	unsigned long m = 805306457;
	unsigned long ret = 0;
	for (unsigned int i = 0; i < k.size(); i++){
		ret = (256 * ret + k[i]) % m;
	}
	return ret;
}
