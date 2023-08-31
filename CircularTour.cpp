#include<bits/stdc++.h>
using namespace std;

/*
Approach of the question is that we store that how much 
deficit of petrol was there if there was any travel no
possible condition and we store it in a deficit variable
after traversing for one time we check if the deficit
+ balance now greater than 0 if yes then we say that yes
the complete tour is possible else we return -1;
*/


/*The structure of petrolPump is */
struct petrolPump
{
    int petrol;
    int distance;
};

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int kami = 0;
       int balance = 0;
       int start = 0;
       for(int i = 0 ; i<n ; i++){
           balance += p[i].petrol - p[i].distance;
           if(balance<0){
               start = i+1;
               kami += balance;
               balance = 0;
           }
       }
       if(kami + balance >=0){
           return start;
       }
       else{
           return -1;
       }
    }
};
int main(){
    
    return 0;
}
