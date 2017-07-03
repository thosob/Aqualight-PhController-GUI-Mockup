/* 
 * File:   main.cpp
 * Author: Thomas Sobieroy
 *
 * Created on June 20, 2017, 1:49 PM
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief creates random numbers, that are between 1 and 14 to test the filter
 *        system gui with an integration test. See also the mockup sqlite file
 *        in resources.
 *        behaves as if a value has been read 
 * @return prints out random number between 1 and 14
 */
int main() {
    //initializes random number seed 
    time_t t;
    //use secure random number and time seed
    srand((unsigned) time(&t));
    //print out random number and make sure its not small than one and not bigger 
    //than 14
    printf("<Ph>%d</Ph>",rand() % 14);   
}

