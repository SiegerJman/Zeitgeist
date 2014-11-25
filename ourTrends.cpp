#include "ourTrends.h"
#include <algorithm>

//This function is defined lower
bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j);

	void increaseCount(std::string s, unsigned int amount){
	unsigned int startSize = numEntries();
	//ourTrends::increaseCount(s, amount);
	if (startSize != numEntries()){
		isSorted = false;
	}
}
	std::string getNthPopular(unsigned int n){
	if (n<=numEntries()){
		frequencyList.find(n);

	}
		//If they give bad input, return empty string.
	return "";
}
	unsigned int ourTrends::getCount(std::string s){
	//Check to see if word is present
	for (unsigned int i = 0; i < wordCountVector.size(); i++){
		if (wordCountVector[i].first == s){
			//If so, return the count
			return wordCountVector[i].second;
		}
	}
	//otherwise, return 0
	return 0;
}
	bool compareFunc(std::pair<std::string, unsigned int> i, std::pair<std::string, unsigned int> j) {
	if (i.second == j.second){
		return (i.first < j.first);
	}
		return (i.second > j.second);
}
	unsigned int numEntries(){
	return wordCountVector.size();
}
