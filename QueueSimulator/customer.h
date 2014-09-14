#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
public:

    Customer();
    ~Customer();

    int getWaitTime();
    void setWaitTime(int newTime = 0);

    int getServiceTime();
    void setServiceTime(int newTime = 0);

private:

    int waitTime;
    int serviceTime;
};

#endif // CUSTOMER_H
