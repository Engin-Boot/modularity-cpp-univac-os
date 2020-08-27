#include <iostream>
#include <assert.h>
#include<bits/stdc++.h>

#include "TestPair.h"
string Manual_print(int numberOfMajorColors, int numberOfMinorColors){
	int out=0, in=0, pairNumber = 1;
	vector<string> pairs;
	string all ="";
	for(out=0; out<numberOfMajorColors; out++){
	    for(in=0; in<numberOfMinorColors; in++){ 
		    TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(pairNumber);
        	ostringstream ss;
        	ss << pairNumber;
        	string buffer=ss.str()+" -- "+colorPair.ToString();
        	pairs.push_back(buffer);
        	pairs.push_back("\n");
   	        pairNumber++;
	    }
    }  //adding all pairs  
	for (int i = 0; i < pairs.size(); i++) {
            all += pairs[i];
	}
	return all;
}
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    
    cout<<Manual_print(TelCoColorCoder::numberOfMajorColors, TelCoColorCoder::numberOfMinorColors);
    
    return 0;
}
