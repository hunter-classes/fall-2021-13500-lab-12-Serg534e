#include <iostream>
#include "funcs.h"
#include <vector>

std::vector<int> makeVector(int n){
  std::vector<int> v;
  for(int i =0; i<n;i++){
    v.push_back(i);
  }
  return v;
}

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> newV;
  for(int i =0; i<v.size(); i++){
    if(v[i]>0){
      newV.push_back(v[i]);
    }
  }
  return newV;
}

void gogeta(std:: vector<int> &goku, std:: vector<int> &vegeta){
  for(int i =0;i<vegeta.size();i++){
    goku.push_back(vegeta[i]);
  }
  vegeta.clear();
}

std:: vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2){
  std::vector<int> newV;
  bool x = false;
  if(v1.size()<v2.size()){
    newV=v1;
  }
  if(v1.size()>v2.size()){
    newV=v2;
    x=true;
  }
  for(int i =0; i<newV.size();i++){
    newV[i]=(v1[i]+v2[i]);
  }
  if(x==true){
    for(int i =newV.size(); i<v1.size(); i++)
      newV.push_back(v1[i]);
  }
  else{
    for(int i =newV.size(); i<v2.size();i++)
      newV.push_back(v2[i]);
  }
  return newV;
}
