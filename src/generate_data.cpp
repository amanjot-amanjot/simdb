#include <iostream>
#include <random>
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
int main(){
 std::vector<std::vector<float>> my_vector=generate_data();
for(int i=0;i<4;i++){
    for(int j=0;j<8;j++){
        std::cout << my_vector[i][j];
        std::cout<<" ";

    }
}
}

