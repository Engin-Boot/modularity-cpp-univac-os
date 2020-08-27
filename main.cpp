#include <iostream>
#include <assert.h>

#include "manual.h"
int main() {
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);
    
    cout<<Manual_print(TelCoColorCoder::numberOfMajorColors, TelCoColorCoder::numberOfMinorColors);
    
    return 0;
}
