/*
 * @Descripttion: 
 * @version: 
 * @Author: Hu Dayuan
 * @LastEditors: Hu Dayuan
 * @Date: 2019-05-01 19:50:45
 * @LastEditTime: 2019-05-01 20:07:10
 */

#include <iostream>
#include <string>

using namespace std;

class school_girl {
private:
    string name;

public:
    void set_name(string name)
    {
        this->name = name;
    }

    string get_name()
    {
        return name;
    }
};

class igive_gift {
public:
    virtual void give_dolls() = 0;
    virtual void give_flowers() = 0;
    virtual void give_cholocate() = 0;
};

class pursuit : public igive_gift {
private:
    school_girl* mm;

public:
    pursuit(school_girl* mm)
    {
        this->mm = mm;
    }

    void give_dolls()
    {
        cout << mm->get_name() << " give dolls" << endl;
    }

    void give_flowers()
    {
        cout << mm->get_name() << " give flowers" << endl;
    }

    void give_cholocate()
    {
        cout << mm->get_name() << " give cholocate" << endl;
    }
};

class proxy : public igive_gift {
private:
    pursuit* gg;

public:
    proxy(school_girl* mm)
    {
        gg = new pursuit(mm);
    }

    void give_dolls()
    {
        gg->give_dolls();
    }

    void give_flowers()
    {
        gg->give_flowers();
    }

    void give_cholocate()
    {
        gg->give_cholocate();
    }
};

