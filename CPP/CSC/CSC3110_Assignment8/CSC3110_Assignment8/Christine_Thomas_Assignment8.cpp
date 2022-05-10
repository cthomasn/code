// Author: Christine Thomas
// Algorithm: Quicksort
// Date: 11/22/2020

#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>

unsigned int hoarePartition(std::vector<long double>& theVector, int leftArrow, int rightArrow)
{
    double pivot = theVector.at(leftArrow); // first element in the vector is pivot
    unsigned int i = leftArrow, j = rightArrow + 1;

    std::cout << "Pivot is " << pivot << " Left arrow is " << leftArrow << " j is " << j << std::endl;
    
    while (i < j && i < (theVector.size()))
    {
        do {
                i++;
                //std::cout << "i is " << i << " Value is " << theVector.at(i) << std::endl;
        } while (theVector.at(i) < pivot);
        
        do {
                j--;
                //std::cout << "i is " << i << " Value is " << theVector.at(i) << std::endl;
        } while (theVector.at(j) > pivot);

        if (i < j)
            std::swap(theVector.at(i), theVector.at(j));
    }
        std::swap(theVector.at(leftArrow), theVector.at(j));
        return j;
  }


void quickSort(std::vector<long double>& theVector, int leftArrow, int rightArrow)
{
   // std::cout << "I am running " << count << std::endl;

    if (leftArrow < rightArrow)
    {
        int partitioningIndex = hoarePartition(theVector, leftArrow, rightArrow);

       // std::cout << "Exited the hoare partition " << count << std::endl;

        quickSort(theVector, leftArrow, partitioningIndex - 1);
        quickSort(theVector, partitioningIndex + 1, rightArrow);

        //std::cout << "I'm almost done!" << std::endl;
    }
    //std::cout << "I'm done!" << std::endl;
}

void print(std::vector<long double>& data) {
    //std::cout << "I am here!" << std::endl;

    for (unsigned int i = 0; i < data.size(); i++) {
        std::cout << data.at(i) << std::endl;
    }
}

void writeVectorDoubleToFile(std::ofstream& outputFile, std::vector<long double> v) {
    std::ostream_iterator<long double> outputs(outputFile, "\n");
    std::copy(v.begin(), v.end(), outputs);
}


int main()
{
    //opening the file to read
    std::ifstream TheFile;
    TheFile.open("raw-100.data");

    //error handling
    if (TheFile.fail()) {
        std::cout << "Unable to open the file." << std::endl;
        return 0;
    }

    // filling the vector with values
    std::vector<long double> DataPoints;
    std::copy(std::istream_iterator<double>(TheFile),
    std::istream_iterator<double>(),
    std::back_inserter(DataPoints));

    std::cout << "The vector has " << DataPoints.size() << " datapoints." << std::endl;

    int endIndex = (DataPoints.size() - 1);

    //calling quickSort on raw-100
    quickSort(DataPoints, 0, endIndex);
    print(DataPoints);
    std::ofstream sorted100("sorted-100.data");
    writeVectorDoubleToFile(sorted100, DataPoints);




    std::cout << "Program end." << std::endl;

    TheFile.close();

    return 0;
}