#include "telColorCode.h"
#include<string.h>
using namespace std;
//defination of class
namespace TelCoColorCoder {
     
    MajorColor ColorPair::getMajor() {
        return majorColor;
    }
    MinorColor ColorPair::getMinor() {
        return minorColor;
    }
    string ColorPair::ToString() {
        string colorPairStr = MajorColorNames[majorColor];
        colorPairStr += " ";
        colorPairStr += MinorColorNames[minorColor];
        return colorPairStr;
    }
}
