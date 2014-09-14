#ifndef SIMRUNNER_H
#define SIMRUNNER_H

#include <cstdlib>
#include <vector>
#include <queue>
#include "customer.h"

class SimRunner
{
public:

    SimRunner();
    ~SimRunner();

   std::vector<float> basicSim(int minutes = 30, int serviceTimeLow = 1, int serviceTimeHigh = 1, bool useCarts = false);
   std::vector<float> multiCashierSim(int minutes = 30, int serviceTimeLow = 1, int serviceTimeHigh = 1, bool useCarts = false, int cashiers = 2);
   std::vector<float> multiQueueSim(int minutes = 30, int serviceTimeLow = 1, int serviceTimeHigh = 1, bool useCarts = false, int queues = 1);

};

#endif // SIMRUNNER_H
