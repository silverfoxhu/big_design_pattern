#include <proxy.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    school_girl* jiaojiao = new school_girl();
    jiaojiao->set_name("jiaojiao");

    proxy* daili = new proxy(jiaojiao);

    daili->give_dolls();
    daili->give_flowers();
    daili->give_cholocate();

    return 0;
}