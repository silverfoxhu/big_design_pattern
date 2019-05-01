/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-01 19:17:41
 * @LastEditTime: 2019-05-01 19:23:21
 */

#include <string>
#include <iostream>
#include "person.h"
#include "decorator.h"

int main()
{
    person* xc = NULL;
    xc = new person("xiaochai ");

    Tshirts* pqx = new Tshirts();
    BigTrouser* kk = new BigTrouser();

    pqx->decorator(xc);
    kk->decorator(pqx);

    kk->show();

    return 0;
}