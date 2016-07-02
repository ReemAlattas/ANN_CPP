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

class Neuron;

typedef vector<Neuron> Layer;

class Net
{
public:
    Net(const vector<unsigned> &topolgy);
    void feedForward(const vector<double> &inputVals);
    void backProp(const vector<double> &targetVals);
    void getResults(vector<double> &resultVals) const;
    
private:
    vector<Layer> m_layers;

};

Net::Net(const vector<unsigned> &topolgy);
{
    unassigned numLayers = topology.size();
    for (unsigned layerNum = 0; layerNum <numLayers; ++layerNum) {
        m_layers.push_back(Layer());
        
        for (unsigned neuwonNum = 0; neuronNum <= topology[layerNum]; ++neuronNums) {
            m_layers.back()
        }
    }
}

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
