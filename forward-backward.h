#include <math.h>
#include "phone.h"
#include "observation.h"
#include "transition.h"

extern double forward[N_PHONE][N_STATE];
extern double backward[N_PHONE][N_STATE];