# TrimmedMean

double trimmedMean(int data[], int dataSize, int outliers);

Given an array of integers (data defined in main), trimmedMean calculates and returns the mean of the data 
not including the specified number of outliers.

For every one "outliers", two outliers are removed from the data. 
Meaning that...
if outliers=1, then the lowest and highest values of data will be removed
if outliers=2 then the 2 lowest and two highest values of data will be removed
