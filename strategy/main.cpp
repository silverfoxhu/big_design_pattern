#include <iostream>
#include "cash_context.h"

using namespace std;

int main()
{
    double total = 0;
    double total_prices = 0;

    cash_context* cc1 = NULL;
    cc1 = new cash_context(1);
    total_prices = cc1->get_result(100);
    total += total_prices;
    std::cout << "Type: normal totalprices: " << total_prices << "total: "<< total << std::endl; 
    total_prices = 0;

    cout << "hello world!" << endl;

    return 0;
}