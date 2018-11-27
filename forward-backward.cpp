#include "forward-backward.h"

using namespace std;

double forward[N_PHONE][N_STATE];
double backward[N_PHONE][N_STATE];\

void calculateForward() {
    for (int v = 0; v < N_VOCA; v++) {
        int p_index = phoneIndex[v][0];
        int n_state = getNumberOfPhoneState(p_index);
        for (int s = 0; s < n_state; s++) {
            
        }
    }
}