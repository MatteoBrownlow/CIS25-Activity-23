#include "checkNumber.hpp"
int checkNumber(std::string customerNumber){
    int valid = 1;
    for(int i = 0; i < 2; i++){
        if(!isalpha(customerNumber[i])){
            valid = 0;
        }
        
    }
    for(int j = 2; j < 6; j++){
        if(!isdigit(customerNumber[j])){
            valid = 0;
        }
    }
    if(customerNumber[6] != '\0'){
        valid = 0;
    }
    return valid;
}
