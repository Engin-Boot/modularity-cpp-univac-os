#include "telColorCode.h"
using namespace TelCocolorCoder
//defination
class  TelCocolorCoder:: ColorPair
{
        private:
            MajorColor majorColor;
            MinorColor minorColor;
        public:
            ColorPair(MajorColor major, MinorColor minor):
                majorColor(major), minorColor(minor)
            {}
            MajorColor getMajor() {
                return majorColor;
            }
            MinorColor getMinor() {
                return minorColor;
            }
            string ToString() {
                string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
            }
};

void TelCoColorCoder:: ColorPair GetColorFromPairNumber(int pairNumber)
{
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
}
    
int TelCoColorCoder:: GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
        return major * numberOfMinorColors + minor + 1;
}
