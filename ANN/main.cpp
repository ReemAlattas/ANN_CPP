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

struct Connection
{
    double weight;
    double deltaWeight;
};

class Neuron {
public:
    Neuron(unsigned numOutputs);
    
private:
    double m_outpuVal;
    vector<Connection> m_outputWeights;
};

typedef vector<Neuron> Layer;

class Net
{
public:
    Net(const vector<unsigned> &topolgy);
    //void feedForward(const vector<double> &inputVals);
    //void backProp(const vector<double> &targetVals);
    //void getResults(vector<double> &resultVals) const;
    
private:
    vector<Layer> m_layers;

};

Net::Net(const vector<unsigned> &topology)
{
    unsigned long numLayers = topology.size();
    for (unsigned layerNum = 0; layerNum <numLayers; ++layerNum) {
        m_layers.push_back(Layer());
        unsigned numOutputs = layerNum == topology.size() - 1 ? 0: topologyLayerNum + 1);
        
        for (unsigned neuronNum = 0; neuronNum <= topology[layerNum]; ++neuronNum) {
            m_layers.back().push_back(Neuron(numOutputs));
            cout << "Made a Neuron!" << endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    vector<unsigned> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(1);
    
    Net myNet(topology);

    vector<double> inputVals;
    //myNet.feedForward(inputVals);
    
    vector<double> targetVals;
    //myNet.backProp(targetVals);
    
    vector<double> resultVals;
    //myNet.getResults(resultVals);
    
    return 0;
}
