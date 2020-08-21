#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int numSequence;
int numQueries;
int size;

// ask number of sequences and queries respectively
cin >> numSequence >> numQueries;

// where to store the sequence elements, dynamically allocate
int** arr = new int*[numSequence];
// where to store numbers for the queries, dynamically allocate
int**   dummy = new int*[numQueries];

// now enter sequences
for ( int i = 0; i < numSequence; i++){
    cin >> size;
    arr[i] = new int[size];             // allocate memory for integer array
    for( int j = 0; j < size; j++ ){    // enter numbers in the sequence
        cin >> arr[i][j];
    }
}

// now allocate memory for query elements
for( int i = 0; i < numQueries; i++){
    dummy[i] = new int[2];
}

// now enter queries
for( int i = 0; i < numQueries; i++){
    cin >> dummy[i][0] >> dummy[i][1];
}

// now output those queries
for( int i = 0; i < numQueries; i++){
    cout << arr[ dummy[i][0] ][ dummy[i][1] ] << endl;
}
return 0;
}
