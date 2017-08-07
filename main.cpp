/* 
 * File:   main.cpp
 * Author: Thomas Sobieroy
 *
 * Created on June 20, 2017, 1:49 PM
 */
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * @brief creates random numbers, that are between 1 and 14 to test the filter
 *        system gui with an integration test. See also the mockup sqlite file
 *        in resources.
 *        behaves as if a value has been read 
 * @return prints out random number between 1 and 14
 */
int main(int argc, char *argv[]) {
    //initializes random number seed 
    time_t t;
    //use secure random number and time seed
    srand((unsigned) time(&t));           
    
    if(argc == 2){
        if(strcmp(argv[1],"-t") == 0){
            printf("<Temperature>%d</Temperature>", rand() % 30);
        }        
        if(strcmp(argv[1],"-p") == 0){
            //print out random number and make sure its not small than one and not bigger 
            //than 14
            printf("<Ph>%d</Ph>", rand() % 14);
        }        
        if(strcmp(argv[1],"-c") == 0){
            printf("<EC>%d</EC>", rand() % 1800);
        }        
        if(strcmp(argv[1],"-tp") == 0){
            printf("asdafasrfgxyfxycvasdfg34235234>asd2135<yv<value>%d</value>sadgasdgawq34q23rfasdvasdvsdcy>Sdsdvcsd", rand() % 14);
        } 
        if(strcmp(argv[1],"-tc") == 0){
            printf("<value>%d</value>", rand() % 1800);
        } 
    }    
}

