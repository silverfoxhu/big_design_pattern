/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-01 18:43:15
 * @LastEditTime: 2019-05-01 18:47:14
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

class person {
private:
    string name;

public:
    person(){};
    person(string name)
    {
        this->name = name;
    }

    virtual void show()
    {
        cout << "zhuang shi de" << name << endl;
    }
};

#endif // ! PERSON_H