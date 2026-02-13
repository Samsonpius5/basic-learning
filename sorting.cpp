#include <iostream>
using namespace std;
void bubbleSort(float ratings[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ratings[j] > ratings[j + 1]) {
                // Werte tauschen
                float temp = ratings[j];
                ratings[j] = ratings[j + 1];
                ratings[j + 1] = temp;
            }
        }
    }
}



int main() {
    float ratings[] = {4.5, 2.0, 3.8, 1.2, 5.0};
    int n = 5.0;

    bubbleSort(ratings, n);

    for (int i = 0; i < n; i++) {
        cout << ratings[i] << " "<<endl;
    }

    return 0;
}