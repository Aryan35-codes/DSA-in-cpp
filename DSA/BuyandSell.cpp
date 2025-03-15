#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int> prices){
    int maxProfit = 0;
    int BestBuy = prices[0];

    for(int i=0; i<prices.size(); i++){
        if(prices[i] > BestBuy){
           maxProfit = max(maxProfit , prices[i]-BestBuy);
        }
        BestBuy = min(BestBuy , prices[i]);
    }

    return maxProfit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int Profit = maxProfit(prices);
    cout << Profit << endl;
    return 0;
}