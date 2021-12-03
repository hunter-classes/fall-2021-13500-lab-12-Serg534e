#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <vector>
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A"){
  std::vector<int> v = makeVector(5);
  CHECK(v.size()==5);
  for(int i =0;i<v.size();i++){
    CHECK(v[i]==i);
  }
}

TEST_CASE("Task B"){
  std::vector<int> v1{1,2,-1,3,4,-1,6};
  v1 = goodVibes(v1);
  std::vector<int> v2{1,2,3,4,6};
  for(int i =0; i<v2.size();i++){
    CHECK(v1[i]==v2[i]);
  }

  std::vector<int>v3{1,0,2,0,5,-1};
  v3=goodVibes(v3);
  std::vector<int> v4{1,2,5};
  for(int i =0;i<v4.size();i++){
    CHECK(v3[i]==v4[i]);
  }
}
TEST_CASE("Task C"){
  std::vector<int> goku{1,2,3,4};
  std::vector<int> vegeta{5,6,7};
  std::vector<int> gogeta1{1,2,3,4,5,6,7};
  gogeta(goku,vegeta);
  for(int i =0; i<goku.size();i++){
    CHECK(goku[i]==gogeta1[i]);
  }
  CHECK(vegeta.size()==0);
}
TEST_CASE("Task D"){
  std::vector<int> goku{1,2,3,4};
  std::vector<int> vegeta{5,6,7};
  std::vector<int> result{6,8,10,4};
  std::vector<int> add=sumPairWise(goku,vegeta);
  for(int i =0;i<result.size();i++){
    CHECK(result[i]==add[i]);
  }
}
