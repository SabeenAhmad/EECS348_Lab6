#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addition(float matrixA[100][100], float matrixB[100][100], int matrixSize){
    cout<< "\nMatrix Addition between Matrix A and B"<<endl;
    float newMatrix[100][100];
    for (int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            newMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
            cout << newMatrix[i][j] << " ";
        }
        cout<<endl;

    }
}
void multiplication(float matrixA[100][100], float matrixB[100][100], int matrixSize){
    cout<< "\nMatrix Multiplication A x B"<<endl;
    float newMatrix[100][100];
    
    for (int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            newMatrix[i][j] = 0;
            for(int k = 0; k < matrixSize; k++){
            newMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        cout << newMatrix[i][j] << " ";
        }
    cout<<endl;

    }
}
void difference(float matrixA[100][100], float matrixB[100][100], int matrixSize){
    cout<< "\nMatrix Difference A - B"<<endl;
    float newMatrix[100][100];
    for (int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            newMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
            cout << newMatrix[i][j] << " ";
        }
        cout<<endl;

    }
}

int main() {

    float matrixA [100][100];
    float matrixB[100][100];
    ifstream file("text.txt");
    if (!file.is_open()){
        cout<<"No file found"<< endl;
        return 1;
    }
    int size;
    file>>size;
    cout<<"\nMatrix A"<<endl;
    for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
           file >> matrixA[i][j];
           cout << matrixA[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"\nMatrix B"<<endl;
     for (int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
           file >> matrixB[i][j];
           cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
    file.close();
    addition(matrixA,matrixB,size);
    multiplication(matrixA,matrixB,size);
    difference(matrixA,matrixB,size);

}