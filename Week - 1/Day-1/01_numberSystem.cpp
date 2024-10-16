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




int main()
{
    int decimalNum = 11;
    // vector<int> BinaryNumber = convertToBinary(decimalNum);
    // print(BinaryNumber);

}