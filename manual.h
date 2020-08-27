#include<bits/stdc++.h>
#include "TestPair.h"
#include<string.h>

void Manual_pairing(int numberOfMajorColors, int numberOfMinorColors){
	int out=0, in=0, pairNumber = 1;
	vector<string> pairs;
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
    }
	mauual_print(pairs);
}	//adding all pairs  
string Manual_print(vector<string> pairs){
	for (int i = 0; i < pairs.size(); i++) {
            all += pairs[i];
	}
	return all;
}
