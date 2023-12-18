#include <bits/stdc++.h>
using namespace  std;

int AssignMiceToHoles(int mice[],int holes[],int m_len,int h_len){
  if(m_len != h_len){
    return -1;
  }
   sort(mice,mice + m_len);
   sort(holes,holes + h_len);

   int max1 = 0;
   for(int i=0;i<m_len;i++){
     if(max1 < abs(mice[i] - holes[i])){
        max1 = abs(mice[i] - holes[i]);
     }
   }
    return max1;
}

int main(){
 int mice[] = {3,2,-4};
 int holes[] = {0,-2,4};
 int m_len = sizeof(mice)/sizeof(mice[0]);
 int h_len = sizeof(holes)/sizeof(holes[0]);

 int mintime = AssignMiceToHoles(mice,holes,m_len,h_len);
 cout<<"Solution: ";
 cout<<mintime;

 return 0;
}


