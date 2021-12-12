#include <iostream>
#include "grid.h"

/*
 * The class with the problem must have
 * 6 functions for communicate with Learning
 * these are:
 *      unsigned int actualToSt() return the actual
 *              state of the environment
 *      bool isObj() return true if actually is terminated
 *      void doAction(unsigned int action)
 *      float getActualReward() the value of the actual reward
 *      void reset() set proble to initial conditions
 *
 */

int main(){
    //parameters rows, columns
    Grid test(5,10);
    // parameter : alfa, gamma, epsilon, type of learning(qlearning or sarsa)
    test.configLearn(0.6,0.95,0.3, LearnType::Sarsa);
    //parameter num of executions
    test.makeItLearn(3000);
    return 0;
}
