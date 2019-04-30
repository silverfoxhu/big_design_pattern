#ifndef STRATEGY_H
#define STRATEGY_H

class cash_super
{
    public:
        virtual double accept_cash(double money) = 0;
};

class cash_normal:public cash_super
{
    public:
        double accept_cash(double money);
};

class cash_return:public cash_super
{
    private:
        double money_condition;
        double money_return;

    public:
        cash_return(double money_condition, double money_return);
        double accept_cash(double money);
};

class cash_rebate:public cash_super
{
    private:
        double money_rebate;

    public:
        cash_rebate(double money_rebate);
        double accept_cash(double money);
};

#endif