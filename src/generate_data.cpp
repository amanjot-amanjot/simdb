#include <iostream>
#include <random>
#include "generate_data.h"
std::vector<std::vector<float>> generate_data(){
    std::vector<std::vector<float>> my_vector;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(1,100);
    for(int i=0;i<1000;i++){
     std::vector<float> my_vector0;
    for(int i=0;i<8;i++){
        my_vector0.push_back(distrib(gen));
    }
    my_vector.push_back(my_vector0);
}
return my_vector;
}

