/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-01 18:47:58
 * @LastEditTime: 2019-05-01 19:40:34
 */

#ifndef FINERY_H
#define FINERY_H

#include "person.h"
#include <iostream>

class finery : public person {
protected:
    person* component;

public:
    void decorator(person* component)
    {
        this->component = component;
    }

    void show()
    {
        if (component != NULL) {
            component->show();
        }
    }
};

class Tshirts : public finery {
public:
    void show()
    {
        cout << "big Tshirts ";
        finery::show();
    }
};

class BigTrouser:public finery{
public:
    void show()
    {
        cout << "big Trouser ";
        finery::show();
    }
};



#endif // !FINERY_H
