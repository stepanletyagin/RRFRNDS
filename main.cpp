#include "main.h"
#include "matrix_operations.h"
#include "algorithms.h"
#include "RRFRNDS.h"

int main()
{
    VALUE_TYPE N; // Graph size
    cout << WHITE <<"Number of members:" << RESET;
    cin >> N;
    cout << endl;

    vector<vector<VALUE_TYPE>> adjacency_matrix = fill_matrix(N);
    cout << GREEN <<"Adjacency matrix: " << RESET << endl;
    print_matrix(adjacency_matrix, N);

    vector<vector<VALUE_TYPE>> floyd_warshall_matrix = floyd_warshall(adjacency_matrix, N);
    cout << GREEN << "Floyd-Warshall matrix: " << RESET << endl;
    print_matrix(floyd_warshall_matrix, N);

    cout << GREEN <<"Number of recommendations: " << RESET << recom_num(floyd_warshall_matrix, N) << endl;

    return 0;
}
