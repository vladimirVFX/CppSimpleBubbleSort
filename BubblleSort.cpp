// BubblleSort

#include <iostream>
#include <random>
#include <array>

using namespace std;

void GenerateVariables(float a[],int N) {  //FunctionGenerateVariables    
    for (int i = 0; i < N; i++) {   
        a[i] = rand() % 10;
    }
}

void PrintMassive(float a[],int &N) {   //FunctionPrintMassiveInitial
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void BubbleSortAlgorithm(float a[], int N) {    //FunctionBuubleSortAlgorithm
    for (int j = 0; j < N; j++) {   
        for (int i = 0; i < N; i++) {
            if (i != N) {
                if (a[i] < a[i + 1]) {
                    swap(a[i + 1], a[i]);
                }
            }
            else break;
        }
    }
    cout << endl;
}

int main()
{
    int N = 0;
      
    cout << "Enter massive dimensions: ";
    cin >> N;
    cout << endl;

    float *a = new float[N];
    for (int i = 0; i < N; i++) {
        GenerateVariables(a, N);
    }

    cout << "InitialMassive: ";
    PrintMassive(a, N);
    
    BubbleSortAlgorithm(a, N);
    
    cout << "SortMassive: "; 
    PrintMassive(a, N);
        
    delete[]a;
    getchar();
    return 0;
}


