#include <iostream>
#include <math.h>
#include "strategy.h"

double cash_normal::accept_cash(double money)
{
    return money;
}

cash_return::cash_return(double money_condition, double money_return)
{
    this->money_condition = money_condition;
    this->money_return = money_return;
}

double cash_return::accept_cash(double money)
{   
    double result = money;
    if (money > money_condition)
    {
        result = money - floor(money / money_condition) * money_return;
    }
    return result;
}

cash_rebate::cash_rebate(double money_rebate)
{
    this->money_rebate = money_rebate;
}

double cash_rebate::accept_cash(double money)
{
    return money * money_rebate;
}



