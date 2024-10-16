#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



//TODO: Print Vector
int print(vector<int> &arr){
    for(auto num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
}


// TODO: Convert integer to Binary
vector<int> convertToBinary(int n)
{

    vector<int> bits;

    while (n > 0)
    {
        bits.push_back(n % 2);
        n = n / 2;
    }

    reverse(bits.begin(), bits.end());
    return bits;
}


// TODO: Check if a number is odd
bool isOdd(int n){
    if(n & 1 == 1){
        return true;
    }else{
        return false;
    }
}


// TODO: Check if the ith bit is set or not 
bool isBitSet(int n, int i){
    if(((n>>i) & 1 == 1)){
        return true;
    }else{
        return false;
    }
}


int main()
{
    int decimalNum = 11;
    // vector<int> BinaryNumber = convertToBinary(decimalNum);
    // print(BinaryNumber);

    // bool ans = isOdd(decimalNum);
    // cout<<"Ans is: "<<ans<<endl;

    // int i = 2;
    // bool ans = isBitSet(decimalNum, i);
    // cout<<"Ans is: "<<ans<<endl;

    

}