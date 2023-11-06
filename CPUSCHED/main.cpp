#include <iostream> 
#include <fstream>
#include <mutex>
#include <thread>
#include <chrono> // Fixed typo here
#include <string>
#include <queue>


using namespace std;

int numProducers;
int numConsumers;
int sleepTime;

struct Process
{
    int id;
    int arrivalTime;
    int brustTime;
    int priority;
    int startTime;
    int endTime;
    int remainingTime;
};


int main()
{
    queue<Process> processes;
    ifstream inputFile("Datafile1-txt.txt");

    if (!inputFile){
        cerr<< "Error: Input file not found!!!";
        return 1;
    }
    else if(inputFile){
        string header;
        getline(inputFile, header);

        Process process;
        int id = 1;
        while(inputFile >> process.arrivalTime >> process.brustTime >> process.priority){
            process.id = id;
            processes.push(process);
            id ++;
        }
    }
    inputFile.close();

    

}
