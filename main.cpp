#include <iostream>
#include "funcs.h"
#include <vector>

int main(){
  std::cout<<"Task A makevector(5) components:\n";
  std:: vector<int> x=makeVector(5);
  for(int i =0; i<x.size();i++){
    std::cout<<x[i]<<" ";
  }
  std::cout<<"\n";
  std::cout<<"Task B v{1,2,-1,3,4,-1,6} goodVibes(v) components:\n";
  std::vector<int> v{1,2,-1,3,4,-1,6};
  v=goodVibes(v);

  for(int i = 0; i<v.size();i++){
    std::cout<<v[i]<<" ";
  }
  std::cout<<"\n";
  std::cout<<"Task C\nvector<int> v1{1,2,3};\nvector<int> v2{4,5};"<<"\n";
  std::vector<int> v1{1,2,3};
  std::vector<int> v2{4,5};
  gogeta(v1,v2);
  std::cout<<"New v1: v2 emptied."<<"\n";
  for(int i =0; i<v1.size();i++){
    std::cout<<v1[i]<<" ";
  }
  std::cout<<"\n";

  std::cout<<"Task D\nvector<int> v3{1,2,3};\nvector<int> v4{4,5};"<<"\n";
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};
  std::vector<int> ab=sumPairWise(v3,v4);
  std::cout<<"sumPairWise vector components:\n";
  for(int i =0;i<ab.size();i++){
    std::cout<<ab[i]<<" ";
  }
std::cout<<"\n";
}
