// Task 1
//#include <iostream>
//using namespace std;
//
//int main() {
//    const int size = 3;  
//
//    int matrix[size][size] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int leftDiagonalSum = 0;
//    for (int i = 0; i < size; ++i) {
//        leftDiagonalSum += matrix[i][i];
//    }
//
//    int rightDiagonalSum = 0;
//    for (int i = 0; i < size; ++i) {
//        rightDiagonalSum += matrix[i][size - 1 - i];
//    }
//
//    cout << "Matrix:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout <<endl;
//    }
//    
//    cout << "Sum of left diagonal: " << leftDiagonalSum <<endl;
//    cout << "Sum of right diagonal: " << rightDiagonalSum <<endl;
//
//    return 0;
//}

// Task 2
//#include <iostream>
//using naespace std;
//
//const int size = 3;  
//
//
//void addMatrices(const int matrix1[][size], const int matrix2[][size], int result[][size]) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            result[i][j] = matrix1[i][j] + matrix2[i][j];
//        }
//    }
//}
//
//int main() {
//    
//    int matrix1[size][size] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int matrix2[size][size] = {
//        {9, 8, 7},
//        {6, 5, 4},
//        {3, 2, 1}
//    };
//
//    int result[size][size];
//
//    addMatrices(matrix1, matrix2, result);
//
//    cout << "Matrix 1:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix1[i][j] << " ";
//        }
//    
//    }
//
//    cout << "\nMatrix 2:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix2[i][j] << " ";
//        }
//    
//    }
//
//    cout << "\nSum of Matrices:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << result[i][j] << " ";
//        }
//    
//    }
//
//    return 0;
//}

// Task 3
//#include <iostream>
//using namespace std;
//
//const int size = 3;  
//
//void transposeMatrix(const int matrix[][size], int result[][size]) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            result[j][i] = matrix[i][j];
//        }
//    }
//}
//
//int main() {
//    
//    int matrix[size][size] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int transposeResult[size][size];
//
//    transposeMatrix(matrix, transposeResult);
//
//    cout << "Original Matrix:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix[i][j] << " ";
//        }
//        cout <<endl;
//    }
//
//    cout << "\nTranspose Matrix:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << transposeResult[i][j] << " ";
//        }
//        cout <<endl;
//    }
//
//    return 0;
//}

// Task 4

//#include <iostream>
//using namespace std;
//
//const int size = 3;  
//
//void multiplyMatrices(const int matrix1[][size], const int matrix2[][size], int result[][size]) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            result[i][j] = 0;
//            for (int k = 0; k < size; ++k) {
//                result[i][j] += matrix1[i][k] * matrix2[k][j];
//            }
//        }
//    }
//}
//
//int main() {
//    
//    int matrix1[size][size] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int matrix2[size][size] = {
//        {9, 8, 7},
//        {6, 5, 4},
//        {3, 2, 1}
//    };
//
//    int result[size][size];
//
//    multiplyMatrices(matrix1, matrix2, result);
//
//    cout << "Matrix 1:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix1[i][j] << " ";
//        }
//        cout <<endl;
//    }
//
//    cout << "\nMatrix 2:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << matrix2[i][j] << " ";
//        }
//            cout <<endl;
//    }
//
//    cout << "\nResult of Matrix Multiplication:" <<endl;
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            cout << result[i][j] << " ";
//        }
//        cout <<endl;
//    }
//
//    return 0;
//}

// Task 5

#include <iostream>
using namespace std;

void printTable(int multiplier, int limit) {
    if (multiplier > limit) {
        return;
    }

    cout << "15 * " << multiplier << " = " << 15 * multiplier <<endl;

    printTable(multiplier + 1, limit);
}

int main() {
    int limit;

    cout << "Enter the limit for the multiplication table: ";
    cin >> limit;

    printTable(1, limit);

    return 0;
}



