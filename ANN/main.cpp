//
//  main.cpp
//  ANN
//
//  Created by Reem Alattas on 7/2/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Net
{
public:
    Net(topolgy);
    void feedForward(inputVals);
    void backProp(targetVals);
    void getResults(resultVals) const;
    
private:
    
};

int main(int argc, const char * argv[]) {
    
    Net myNet(topology);

    vector<double> inputVals;
    
    myNet.feedForward(inputVals);
    myNet.backProp(targetVals);
    myNet.getResults(resultVals);
    
    return 0;
}
