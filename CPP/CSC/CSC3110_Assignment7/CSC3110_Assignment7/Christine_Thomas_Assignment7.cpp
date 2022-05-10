#include <iostream>
#include <vector>

void printVector(std::vector<char> theVector)
{
    for (unsigned int i = 0; i < theVector.size(); i++)
    {
        std::cout << theVector.at(i) << " ";
    }

    std::cout << std::endl;
}

std::vector<char> merge(std::vector<char> subVector1, std::vector<char> subVector2)
{
    // initializing the merged vector
    std::vector<char> sortedVector;

    // while either vector has elements
    while (subVector1.size() > 0 || subVector2.size() > 0)
    {
        // and if each subvector has unsorted elements
        if (subVector1.size() > 0 && subVector2.size() > 0) 
        { 
            // and if the first element of the first subvector 
            // (0 -> midpoint of original vector)
            // is less or equal to than the first element of the second subvector 
            // (midpoint -> end of original vector)
            if (subVector1.front() <= subVector2.front())
            {
                // add the first element of the first subvector to the begining of the new vector
                // and erase 
                sortedVector.push_back(subVector1.front());
                printVector(sortedVector);
                subVector1.erase(subVector1.begin());
            }
            else
            {
                // else add the first element of the second subvector to the begining of the new vector
                // and erase 
                sortedVector.push_back(subVector2.front());
                printVector(sortedVector);
                subVector2.erase(subVector2.begin());
            }
        }

        // if subvector one has more elements left
        else if (subVector1.size() > 0) 
        {
            // push into new vector
            for (unsigned int i = 0; i < subVector1.size(); i++)
                sortedVector.push_back(subVector1.at(i));
             break;
        }
   
        else 
        {
            for (unsigned int i = 0; i < subVector2.size(); i++)
                sortedVector.push_back(subVector2.at(i));
             break;
        }
    
    }

    return sortedVector;
 }

std::vector<char> mergeSort(std::vector<char> vector)
{
    // checking to see if vector has enough elements to sort
    if (vector.size() <= 1)
        return vector;

    // creating two subvectors from the original vector 
    // leftSubVector holding  0 to midpoint and
    // rightSubVector holding midpoint to vector.size() 
    // and creating a new vector called sortedVector
    //  to store the merged subvectors of sorted elements
    std::vector<char> leftSubVector, rightSubVector, sortedVector;
    int midpoint = (vector.size() + 1) / 2;

    // populating the left subvector with elements from the 
    // beginning of the vector passed in to the midpoint
    for (unsigned int i = 0; i < midpoint; i++) 
    {
        leftSubVector.push_back(vector.at(i));
    }

    // populating the right subvector with elements from the 
    // midpoint to the end of the vector passed in
    for (unsigned int i = midpoint; i < vector.size(); i++)
    {
        rightSubVector.push_back(vector.at(i));
    }

    // sorting the first subvector
    leftSubVector = mergeSort(leftSubVector);
    printVector(leftSubVector);
    
    // sorting the right subvector
    rightSubVector = mergeSort(rightSubVector);
    printVector(rightSubVector);

    // merging the subvectors
    sortedVector = merge(leftSubVector, rightSubVector);

    return sortedVector;
}


int main()
{
    std::vector<char> unsortedVector = 
    {'I', 'N', 'D', 'E', 'P', 'E', 'N', 'D', 'E', 'N', 'C', 'E' };

    // printing the original vector
    printVector(unsortedVector);

    // dynamic formatting
    for (unsigned int i = 0; i < unsortedVector.size(); i++)
    {
        std::cout << "--";
    }

    std::cout << std::endl;

    // calling mergesort to sort the vector in ascending order
    unsortedVector = mergeSort(unsortedVector);

    // printing the newly sorted vector
    printVector(unsortedVector);

    return 0;
}