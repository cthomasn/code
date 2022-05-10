// Author: Christine Thomas
// Algorithm: Floyd Warshall
// Date: 12/07/20

#include <iostream>
#include <fstream>

// defining the number of vertices in the graph  
#define VERTICES 20

// defining INF for infinity
#define INF 9999

void printFinalMatrix(std::ostream &outputFile, int distance[VERTICES][VERTICES])
{
    outputFile << "Christine Thomas fz8925\n\n";

    for (int i = 0; i < VERTICES; i++)
    {
        for (int j = 0; j < VERTICES; j++)
        {
            if (distance[i][j] == INF)
                outputFile << "INF" << " ";
            else
                outputFile << distance[i][j] << " ";
        }
        outputFile << "\n";
    }
}

void warshall(std::ostream &outputFile, int graph[VERTICES][VERTICES])
{
    // algorithm
    // 20 new matrices will be formed each one taking the k row and column from the last
    // the 20th matrix will be the final solution showing the shortest paths of each vertex to another
    for (int k = 0; k < VERTICES; k++)
    {
        for (int i = 0; i < VERTICES; i++)
        { 
            for (int j = 0; j < VERTICES; j++)
            {
                // evaluating which distance is shorter, the established distance or the new distance given by formula
                if (graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
    // Printing the shortest distance matrix final solution 
    printFinalMatrix(outputFile, graph);
}

// Driver code  
int main()
{
    // 20 x 20 multidimensional array based on information in Graph1.data
    // 1 indicates that there is a direct edge
    // 0 indicates there are no loops to the same vertex
    // INF indicates that there is no direct edge between two vertices-- no direct path

    int arrayGraph[VERTICES][VERTICES] = 
    {
     {0, INF, INF, 1, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, 0, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {1, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, 0, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, 0, INF, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, 1, INF, INF, INF, 0, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, 0, 1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 1, INF, INF, INF, 1, INF},
     {INF, INF, INF, INF, INF, INF, INF, 1, INF, INF, INF, 0, 1, INF, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, 1, INF, INF, 0, INF, 1, 1, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1, 0, INF, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1, INF, INF, 0, INF, INF, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, 1, INF, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1, INF, INF, 0, INF, INF, INF},
     {INF, INF, INF, INF, INF, 1, INF, INF, INF, INF, INF, INF,INF, INF, INF, INF, INF, 0, INF, INF},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1, 0, 1},
     {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0}
    };

    // creating an output file in project directory
    std::ofstream theFile("C:\\Users\\chris\\Documents\\WSU Computer Science\\FloydWarshallAlg\\Christine_Thomas_fz8925_Assignment9_Output.txt");

    // error handling
    if (theFile.fail()) 
    {
        std::cout << "Unable to create the file." << std::endl;
        return 1;
    }
 
    // calling the algorithm function
    warshall(theFile, arrayGraph);

    // closing the file
    theFile.close();

    return 0;
}
