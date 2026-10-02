#include <cmath>
#include<iostream>
#include "generate_data.h"
#include "euclidean_distance.h"
int main(){
    std::vector<float> querry_vector={2, 56, 43, 96, 12, 4, 19, 23};
    std::vector<std::vector<float>> database=generate_data(1000,8);
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
     std::cout<< closest_vector_pos<<std::endl;
     for (int i=0;i<querry_vector.size();i++){
     std::cout<< database[closest_vector_pos][i];
     std::cout<< " ";
     }

}