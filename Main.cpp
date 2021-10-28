/**
 * Driver file
 *
 * Schedule is in the format
 *
 *  [name] [priority] [CPU burst]
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#include "task.h"
#include "scheduler.h"

#define SIZE 100

int main(int argc, char* argv[])
{
    std::cout << "CS 433 Programming assignment 3" << std::endl;
    std::cout << "Author: xxxxxx and xxxxxxx" << std::endl;
    std::cout << "Date: xx/xx/20xx" << std::endl;
    std::cout << "Course: CS433 (Operating Systems)" << std::endl;
    std::cout << "Description : **** " << std::endl;
    std::cout << "=================================" << std::endl;

    FILE* in;
    char* temp;
    char task[SIZE]; 

    char* name;
    int priority;
    int burst;

    scheduler master_scheduler;

    in = fopen("input.txt", "r");

    while (fgets(task, SIZE, in) != NULL) {
        temp = strdup(task);
        name = strsep(&temp, ",");
        priority = atoi(strsep(&temp, ","));
        burst = atoi(strsep(&temp, ","));

        
        // add the task to the scheduler's list of tasks
        master_scheduler.add(name, priority, burst);
        
        free(temp);
    }

    fclose(in);

    // invoke the schedulers
    master_scheduler.schedule();

    return 0;
}
