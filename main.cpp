#include<iostream>
#include<vector>


//s and t variable is for the house starting and ending ;
// a and b variable is for the apple and orange tree location in x axis;
//m and n variable is for the array size for apple and orange vector;
int s,t,a,b,m,n;

//integer array, distances at which each apple and orange falls from the tree
std::vector<int> apple;
std::vector<int> orange;

void setup(){
    //intialize the variables.
    s = 7;
    t = 11;

    a = 5;
    b = 15;

    m = 3; 
    n = 2;

    //will not use the m and n var but will keep it for future reference.

    apple = {-2, 2, 1};
    orange = {5, -6};


}



void countApplesAndOranges(std::vector<int> &apples, std::vector<int> &oranges){
    int apple_count = 0;
    int orange_count = 0;
    int temp = 0;
    
    // std::vector<int> all(n+m);
    // std::merge(apple.begin(), apple.end(), orange.begin(), orange.end(), all.begin());

    // for(int i = 0; i < n+m; i++){
    //     if(i < m){
    //         temp = (all[i] + a);
    //         apple_count += (temp >= s && temp <= t) ? 1 : 0;
    //     } else {

    //         temp = (all[i] + b);
    //         orange_count += (temp >= s && temp <= t) ? 1 : 0;
    //     }
        
    // }

    for(int i = 0; i < m; i++){ //checking the apples array if it hit the house
        temp = (apples[i] + a);
        apple_count += (temp >= s && temp <= t) ? 1 : 0;
    }

    for(int j = 0; j < n; j++){ //chekcing the oranges array if it hit the house

        temp = (oranges[j] + b);
        orange_count += (temp >= s && temp <= t) ? 1 : 0;
    }
    



    std::cout << apple_count << std::endl << orange_count;

}




int main(){
    setup();

    // std::cout << apple[0];
    countApplesAndOranges(apple, orange);

    
    
    return 0;
}



