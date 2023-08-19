#include <iostream>
#include <vector>
#include "nestedsolution.cpp"
#include "bettersolution.cpp"
#include "solution1BruteForce.cpp"
#include "solution2Two-PassHashTable.cpp"
#include "solution3One-PassHashTable.cpp"
using namespace std;
int main() {
    vector<int> nums;
    vector<int> output;
    int target;

    //My solution O(n2)
    // nums = {2,7,11,15};
    // target = 9;
    // output = nestedfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl<< endl;

    // nums = {3,2,4};
    // target = 6;
    // output = nestedfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl<< endl;

    // nums = {3,3};
    // target = 6;
    // output = nestedfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl<< endl;

    //Please note the so call "Better Solution" used below in fact only works for positive numbers.
    //Where the question wants to use both positive and negitive numbers
    // nums = {2,7,11,15};
    // target = 9;
    // output = betterfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    // nums = {3,2,4};
    // target = 6;
    // output = betterfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl<< endl;

    // nums = {3,3};
    // target = 6;
    // output = betterfunction(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl<< endl;

    //Solution 1 from others (Brute Force)
    // nums = {2,7,11,15};
    // target = 9;
    // output = solution1BruteForce(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    // nums = {3,2,4};
    // target = 6;
    // output = solution1BruteForce(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    // nums = {3,3};
    // target = 6;
    // output = solution1BruteForce(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    //Solution 2 from others (Two-pass Hash Table)
    // nums = {2,7,11,15};
    // target = 9;
    // output = solution2TwoHash(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    // nums = {3,2,4};
    // target = 6;
    // output = solution2TwoHash(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    // nums = {3,3};
    // target = 6;
    // output = solution2TwoHash(nums, target);
    // cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    //Solution 3 from others (One-pass Hash Table)
    nums = {2,7,11,15};
    target = 9;
    output = solution3OneHash(nums, target);
    cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    nums = {3,2,4};
    target = 6;
    output = solution3OneHash(nums, target);
    cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    nums = {3,3};
    target = 6;
    output = solution3OneHash(nums, target);
    cout << "[" << output[0] << ", " << output[1] << "]" << endl << endl;

    return 0;
}