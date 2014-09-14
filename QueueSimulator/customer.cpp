#include "customer.h"

Customer::Customer() : waitTime(0), serviceTime(1)
{

}

Customer::~Customer()
{

}

int Customer::getWaitTime()
{
    return waitTime;
}

void Customer::setWaitTime(int newTime)
{
    waitTime = newTime;
}

int Customer::getServiceTime()
{
    return serviceTime;
}

void Customer::setServiceTime(int newTime)
{
    serviceTime = newTime;
}
