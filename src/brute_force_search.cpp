#include <cmath>
#include<iostream>
#include "generate_data.h"

float euclidean_distance(const std::vector<float> &v1, const std::vector<float> &v2){
    float sum=0;
    for(int i=0;i<v1.size();i++){
         sum+=std::pow(v1[i]-v2[i],2);
    }
    return std::sqrt(sum);
}
int main(){
    std::vector<float> querry_vector={2, 56, 43, 96, 12, 4, 19, 23};
    std::vector<std::vector<float>> database=generate_data();
    int closest_vector_pos=0;
    float dist1=0;
    float dist_prev=euclidean_distance(database[0], querry_vector);
    for(int i=0;i<database.size();i++){
        dist1=euclidean_distance(database[i], querry_vector);
        if(dist1<=dist_prev) {
        closest_vector_pos=i;
        dist_prev=dist1;
        }
     }
    std::cout<<dist_prev<<std::endl;
     std::cout<< closest_vector_pos;
     for (int i=0;i<querry_vector.size();i++){
     std::cout<< database[closest_vector_pos][i];
     std::cout<< " ";
     }

}