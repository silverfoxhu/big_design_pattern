#ifndef CASH_CONTEXT_H
#define CASH_CONTEXT_H

#include "strategy.h"
#include <iostream>

class cash_context
{
    private:
        cash_super* cs = NULL;

    public:
        cash_context(int type);
        ~cash_context();

        double get_result(double money);
};

#endif