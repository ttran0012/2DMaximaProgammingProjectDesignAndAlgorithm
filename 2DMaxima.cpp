
#include <iostream>
#include <fstream> 
#include <iomanip>
#include <string>
#include <vector>

using namespace std;


struct Points{
    double x, y; // x and y coordinates

};

//Source: 
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
// create quick sort algorithm
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

//print quick sort count  of elements
void print(int arr[], int n)
{
    cout << "Quick Sort Count: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    ifstream inFile;
    ofstream outFile;
    
    vector<Points> points;
    Points temp;
    //create an array
    float x[10], y[10];

    inFile.open("points1.txt");
    if(!inFile.is_open()) {
        cout << "Error opening file" << endl;
        return 1;
    }
    else {
      
        for(int i = 1; i < 10; i++) {
            inFile >> temp.x >> temp.y;
            points.push_back(temp);
        }
    }
    inFile.close();

    return 0;

}