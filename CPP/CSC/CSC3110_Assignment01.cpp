#include <iostream>
#include <string>
#include <iterator>
#include <fstream>
#include <vector>
#include <cstdio>

std::vector<double> addVectorPositions(std::vector<double> v1, std::vector<double> v2) {
	std::vector<double> sumOfVectors;
	for (unsigned int i = 0; i < v1.size(); i++) {
		sumOfVectors.push_back(v1.at(i) + v2.at(i));
	}

	return sumOfVectors;
}

std::vector<double> multiplyVectorPositions(std::vector<double> v1, std::vector<double> v2) {
	std::vector<double> productOfVectors;
	for (unsigned int i = 0; i < v1.size(); i++) {
		productOfVectors.push_back(v1.at(i) * v2.at(i));
	}

	return productOfVectors;
}

void writeVectorDoubleToFile(std::ofstream &outputFile, std::vector<double> v) {
	std::ostream_iterator<double> outputs(outputFile, "\n");
	std::copy(v.begin(), v.end(), outputs);
}

/* Simpler way to do the function above lol
void writeToFile(std::ofstream& file, std::vector<double> v) {
	for (int i = 0; i < v.size(); i++) {
		file << v.at(i) << std::endl;
	}
}
*/

int main()
{

	//assigning the data points
	double columnA, columnB;

	//creating the vectors
	std::vector<double> vColumnA;
	std::vector<double> vColumnB;

	//opening the file to read
	std::ifstream theFile;
	theFile.open("Datafile1.data");

	//error handling
	if (theFile.fail()) {
		std::cout << "Unable to open the file." << std::endl;
		return 0;
	}

	//reading each column into corresponding vectors
	while (theFile >> columnA >> columnB) {
		vColumnA.push_back(columnA);
		vColumnB.push_back(columnB);
	}

	//closing the input file
	theFile.close();


	//creating the output files
	std::ofstream sumFile("Output-Addition.data");
	std::ofstream productFile("Output-Multiplication.data");
	std::ofstream testFile("test.txt");

	//writing to the files
	writeVectorDoubleToFile(sumFile, addVectorPositions(vColumnA, vColumnB));
	writeVectorDoubleToFile(productFile, multiplyVectorPositions(vColumnA, vColumnB));

	//closing the output files
	sumFile.close();
	productFile.close();

	/*same result different function- the simpler function.
	writeToFile(testFile, addVectorPositions(vColumnA, vColumnB));

	testFile.close();

	*/

	//string fileName;
//std::cout << "What is the name of the file? ";
//std::cin.ignore();
//std::getline(cin, fileName);
//std::ifstream theFile;
//theFile.open(fileName);

////error handling
//if (theFile.fail()) 
//{
//   std::cout << "Unable to open the file." << std::endl;
//   return 0;
//}
	
	std::cout << "Program end.";

	std::getchar();


}