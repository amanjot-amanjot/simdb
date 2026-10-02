#include <cmath>
#include<iostream>
float euclidean_distance(const std::vector<float> &v1, const std::vector<float> &v2){
    float sum=0;
    for(int i=0;i<v1.size();i++){
         sum+=std::pow(v1[i]-v2[i],2);
    }
    return std::sqrt(sum);
}