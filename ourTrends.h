#include <vector>
#include <string>
#include "Trends.h"
#include "linkedList.h"
#include "hashTable.h"

class ourTrends{
public:
	virtual void increaseCount(std::string s, unsigned int amount);
	virtual unsigned int getCount(std::string s);
	virtual std::string getNthPopular(unsigned int n);
	virtual unsigned int numEntries();
//	ourTrends() { isSorted = false };
//protected:
	bool isSorted;
	std::vector<std::pair<std::string, int> > wordCountVector;
	HashTable<std::string, int> wordTable;
	LinkedList<int> frequencyList;

};