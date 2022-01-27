#include "iostream"

struct this_test{
    std::string that;
    this_test(std::string there){
        that = there;
    }

    void const this_function(){
        std::cout<<"value: "<< this -> that <<"\n";
    }
};

int main(){
    this_test that("it is indeed loading, i think... dont make it blow up, you made it blow up did you");
    that.this_function();

    std::cout<<"Yeah you did this: "<< &that.that <<"\n";
}