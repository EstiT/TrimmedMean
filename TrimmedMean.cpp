// Student Name:     <Esti Tweg>
// Student Number:   <101005024>

//Collier, R. "Lectures Notes for COMP1406C - Introduction to Computer Science II" [PDF documents].
//Retrieved from cuLearn: https://www.carleton.ca/culearn/ (Winter 2016).

#ifndef STATS_CPP_INCLUDED
#define STATS_CPP_INCLUDED

#include "TrimmedMean.h"


double trimmedMean(int data[], int dataSize, int outliers){
	//first sort the data array from lowest to highest using insertion sort
    for (int i=1; i<dataSize;i++){
			int j=i; 
			while (j>0 && data[j]<data[j-1]){
				int temp=data[j-1];
				data[j-1]=data[j]; 
				data[j]=temp; 
				j=j-1; 
			}
		}
	
	//initialize a total variable
    double total=0; 
    //run through the array start at the first non outlier
    //end as the last non outlier value
    for (int i=outliers; i<dataSize-outliers; i++){
        //add together all of the data
		total=total+data[i]; 
    }
    //calculate the trimmed mean by dividing the total by the number of elements used
    double mean= total/(dataSize -(2*outliers));

	return mean; 
}


#endif // STATS_CPP_INCLUDED
