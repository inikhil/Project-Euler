#include <iostream>
using namespace std;
int main()
{
        const int total = 200;
        int coins[ 8 ] = { 1, 2, 5, 10, 20, 50, 100, 200 };
        int ways[ total + 1 ];
        for ( int N = 0; N <= total; N++ )
                ways[ N ] = 1;
        for ( int i = 1; i < 8; i++ ) {
                for (int N = 1;N <= total;N++) {
                        if ( N >= coins[ i ] )
                                ways[ N ] += ways[ N - coins[ i ] ];
                }
        }
        cout << ways[total] << endl;
        return 0;
}
