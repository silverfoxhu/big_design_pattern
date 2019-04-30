#include "cash_context.h"
#include "strategy.h"

cash_context::cash_context(int type)
{
    switch (type)
    {
        case 1:
        {
            cs = new cash_normal();
            break;
        }
        case 2:
        {
            cs = new cash_return(300, 100);
            break;
        }
        case 3:
        {
            cs = new cash_rebate(0.8);
            break;
        }
        default:
            break;
    }
}

cash_context::~cash_context()
{
    if (cs != NULL)
    {
        delete cs;
        cs = NULL;
    }
}

double cash_context::get_result(double money)
{
    return cs->accept_cash(money);
}
