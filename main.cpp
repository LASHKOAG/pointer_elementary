#include <iostream>
#include <stdio.h>

using namespace std;
uint8_t flag=0;
uint8_t flag2=0;

void test_pointer(uint8_t*);
void test_ref(uint8_t&);

int main()
{
    cout << "Hello World! \n" << endl;

    printf("flag: %u \n", flag);
    flag=1;
    printf("flag: %u \n", flag);
    test_pointer(&flag);
    printf("flag: %u \n", flag);


    printf("\nflag2: %u \n", flag2);
    flag2=1;
    printf("flag2: %u \n", flag2);
    test_ref(flag2);
    printf("flag2: %u \n", flag2);

    return 0;
}

void test_pointer(uint8_t* _flag)
{
    *_flag=0;
}

void test_ref(uint8_t& _flag2){
    _flag2=0;
}
