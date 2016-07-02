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
    Net(const vector<unsigned> &topolgy);
    void feedForward(const vector<double> &inputVals);
    void backProp(const vector<double> &targetVals);
    void getResults(vector<double> &resultVals) const;
    
private:
    
};

int main(int argc, const char * argv[]) {
    
    vector<unsigned> topology;
    Net myNet(topology);

    vector<double> inputVals;
    myNet.feedForward(inputVals);
    
    vector<double> targetVals;
    myNet.backProp(targetVals);
    
    vector<double> resultVals;
    myNet.getResults(resultVals);
    
    return 0;
}
