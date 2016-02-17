#include <iostream>
#include "TrimmedMean.h"
#include "TrimmedMean.cpp"

using namespace std;


int main(){
	//create array of numbers 
    int numbers[7] = {3,1,80,70,100,75,120};
	//dispay the trimmed mean
    std::cout << trimmedMean(numbers, 7, 1) << std::endl;

    return 0;

}
