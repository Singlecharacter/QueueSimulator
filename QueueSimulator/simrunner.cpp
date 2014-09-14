#include "simrunner.h"

SimRunner::SimRunner()
{

}

SimRunner::~SimRunner()
{

}

std::vector<float> SimRunner::basicSim(int minutes, int serviceTimeLow, int serviceTimeHigh,bool useCarts)
{
    std::vector<Customer*> waitingCustomers;
    std::vector<Customer*> servedCustomers;

    for(int i = 0; i < minutes; i++)
    {
        for(int j = 0; j < waitingCustomers.size(); j++)
        {
            waitingCustomers.at(j)->setWaitTime(waitingCustomers.at(j)->getWaitTime() + 1);
        }

        Customer *currentCustomer = NULL;
        if(waitingCustomers.size() > 0)
        {
            currentCustomer = waitingCustomers.at(0);
            currentCustomer->setServiceTime(currentCustomer->getServiceTime()-1);

            if(currentCustomer->getServiceTime() <= 0)
            {
                waitingCustomers.erase(waitingCustomers.begin(),waitingCustomers.begin()+1);
                servedCustomers.push_back(currentCustomer);
            }
        }

        int newCustomers = rand() % 3;

        for(int j = 0; j < newCustomers; j++)
        {
            int serviceTime = 0;

            if(!useCarts)
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow;
                }
                else
                {
                    serviceTime = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;
                }
            }
            else
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow / 6;
                    if(serviceTimeLow % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
                else
                {
                    int numItems = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;

                    serviceTime = numItems / 6;
                    if(numItems % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
            }

            currentCustomer = new Customer();
            currentCustomer->setServiceTime(serviceTime);
            waitingCustomers.push_back(currentCustomer);
        }
    }

    std::vector<float> returnVector;

    returnVector.push_back(servedCustomers.size());

    int totalWaitTime = 0;

    for(int i = 0; i < servedCustomers.size(); i++)
    {
        totalWaitTime += servedCustomers.at(i)->getWaitTime();
    }

    if(servedCustomers.size() > 0)
    {
        returnVector.push_back(totalWaitTime / servedCustomers.size());

        int longestWaitTime = servedCustomers.at(0)->getWaitTime();

        for(int i = 0; i < servedCustomers.size(); i++)
        {
            if(servedCustomers.at(i)->getWaitTime() > longestWaitTime)
            {
                longestWaitTime = servedCustomers.at(i)->getWaitTime();
            }
        }

        returnVector.push_back(longestWaitTime);
    }
    else
    {
        returnVector.push_back(0);
        returnVector.push_back(0);
    }

    return returnVector;
}

std::vector<float> SimRunner::multiCashierSim(int minutes, int serviceTimeLow, int serviceTimeHigh, bool useCarts, int cashiers)
{
    std::vector<Customer*> waitingCustomers;
    std::vector<Customer*> servedCustomers;

    for(int i = 0; i < minutes; i++)
    {
        for(int j = 0; j < waitingCustomers.size(); j++)
        {
            waitingCustomers.at(j)->setWaitTime(waitingCustomers.at(j)->getWaitTime() + 1);
        }

        Customer *currentCustomer = NULL;

        for(int j = 0; j < cashiers; j++)
        {
            if(waitingCustomers.size() > j)
            {
                currentCustomer = waitingCustomers.at(j);
                currentCustomer->setServiceTime(currentCustomer->getServiceTime()-1);
            }
            else
            {
                break;
            }
        }

        if(cashiers > waitingCustomers.size())
        {
            for(int j = waitingCustomers.size()-1; j >= 0; j--)
            {
                currentCustomer = waitingCustomers.at(j);
                if(currentCustomer->getServiceTime() <= 0)
                {
                    waitingCustomers.erase(waitingCustomers.begin()+j,waitingCustomers.begin()+j+1);
                    servedCustomers.push_back(currentCustomer);
                }
            }
        }
        else
        {
            for(int j = cashiers - 1; j >= 0; j--)
            {
                currentCustomer = waitingCustomers.at(j);
                if(currentCustomer->getServiceTime() <= 0)
                {
                    waitingCustomers.erase(waitingCustomers.begin()+j,waitingCustomers.begin()+j+1);
                    servedCustomers.push_back(currentCustomer);
                }
            }
        }

        //Create and add new customers
        int newCustomers = rand() % 3;

        for(int j = 0; j < newCustomers; j++)
        {
            int serviceTime = 0;

            if(!useCarts)
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow;
                }
                else
                {
                    serviceTime = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;
                }
            }
            else
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow / 6;
                    if(serviceTimeLow % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
                else
                {
                    int numItems = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;

                    serviceTime = numItems / 6;
                    if(numItems % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
            }

            currentCustomer = new Customer();
            currentCustomer->setServiceTime(serviceTime);
            waitingCustomers.push_back(currentCustomer);
        }
    }

    std::vector<float> returnVector;

    returnVector.push_back(servedCustomers.size());

    int totalWaitTime = 0;

    for(int i = 0; i < servedCustomers.size(); i++)
    {
        totalWaitTime += servedCustomers.at(i)->getWaitTime();
    }

    if(servedCustomers.size() > 0)
    {
        returnVector.push_back(totalWaitTime / servedCustomers.size());

        int longestWaitTime = servedCustomers.at(0)->getWaitTime();

        for(int i = 0; i < servedCustomers.size(); i++)
        {
            if(servedCustomers.at(i)->getWaitTime() > longestWaitTime)
            {
                longestWaitTime = servedCustomers.at(i)->getWaitTime();
            }
        }

        returnVector.push_back(longestWaitTime);
    }
    else
    {
        returnVector.push_back(0);
        returnVector.push_back(0);
    }

    return returnVector;
}


std::vector<float> SimRunner::multiQueueSim(int minutes, int serviceTimeLow, int serviceTimeHigh, bool useCarts, int queues)
{
    std::vector<std::vector<Customer*> > waitingCustomerQueues;
    std::vector<Customer*> servedCustomers;

    for(int i = 0; i < queues; i++)
    {
        std::vector<Customer*> temp;
        waitingCustomerQueues.push_back(temp);
    }

    for(int i = 0; i < minutes; i++)
    {
        for(int j = 0; j < waitingCustomerQueues.size(); j++)
        {
            for(int k = 0; k < waitingCustomerQueues.at(j).size(); k++)
            {
                waitingCustomerQueues.at(j).at(k)->setWaitTime(waitingCustomerQueues.at(j).at(k)->getWaitTime() + 1);
            }
        }

        Customer *currentCustomer = NULL;

        for(int j = 0; j < queues; j++)
        {
            if(waitingCustomerQueues.at(j).size() > 0)
            {
                currentCustomer = waitingCustomerQueues.at(j).at(0);
                currentCustomer->setServiceTime(currentCustomer->getServiceTime()-1);

                if(currentCustomer->getServiceTime() <= 0)
                {
                    waitingCustomerQueues.at(j).erase(waitingCustomerQueues.at(j).begin(),waitingCustomerQueues.at(j).begin()+1);
                    servedCustomers.push_back(currentCustomer);
                }
            }
        }

        int newCustomers = rand() % 3;

        for(int j = 0; j < newCustomers; j++)
        {
            int serviceTime = 0;

            if(!useCarts)
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow;
                }
                else
                {
                    serviceTime = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;
                }
            }
            else
            {
                if(serviceTimeLow == serviceTimeHigh || serviceTimeLow > serviceTimeHigh)
                {
                    serviceTime = serviceTimeLow / 6;
                    if(serviceTimeLow % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
                else
                {
                    int numItems = rand() % (serviceTimeHigh - serviceTimeLow) + serviceTimeLow;

                    serviceTime = numItems / 6;
                    if(numItems % 6 != 0)
                    {
                        serviceTime++;
                    }
                }
            }

            currentCustomer = new Customer();
            currentCustomer->setServiceTime(serviceTime);

            int smallestIndex = 0;
            int smallestSize = waitingCustomerQueues.at(0).size();
            for(int j = 0; j < waitingCustomerQueues.size(); j++)
            {
                if(waitingCustomerQueues.at(j).size() < smallestSize)
                {
                    smallestIndex = j;
                    smallestSize = waitingCustomerQueues.at(j).size();
                }
            }

            waitingCustomerQueues.at(smallestIndex).push_back(currentCustomer);
        }
    }

    std::vector<float> returnVector;

    returnVector.push_back(servedCustomers.size());

    int totalWaitTime = 0;

    for(int i = 0; i < servedCustomers.size(); i++)
    {
        totalWaitTime += servedCustomers.at(i)->getWaitTime();
    }

    if(servedCustomers.size() > 0)
    {
        returnVector.push_back(totalWaitTime / servedCustomers.size());

        int longestWaitTime = servedCustomers.at(0)->getWaitTime();

        for(int i = 0; i < servedCustomers.size(); i++)
        {
            if(servedCustomers.at(i)->getWaitTime() > longestWaitTime)
            {
                longestWaitTime = servedCustomers.at(i)->getWaitTime();
            }
        }

        returnVector.push_back(longestWaitTime);
    }
    else
    {
        returnVector.push_back(0);
        returnVector.push_back(0);
    }

    return returnVector;
}
