// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result = 0.0f;

    // Write your code here
    int num_len = (int) sizeof(nums) / sizeof(nums[0]);
    for (uint16_t indx = 0; indx < num_len; indx++) {
        result += nums[indx];
    }
    result /= num_len;


    std::cout << "elements in nums " << num_len << std::endl;
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
