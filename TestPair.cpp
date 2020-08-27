#include<assert.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#include "TestPair.h"
//defination
void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::GetColorFromPairNumber(pairNumber);
    cout << "Got pair " << colorPair.ToString() << endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::GetPairNumberFromColor(major, minor);
    cout << "Got pair number " << pairNumber << endl;
    assert(pairNumber == expectedPairNumber);
}

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
