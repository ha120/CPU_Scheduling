#include "schedule_fcfs.h"


void schedule_fcfs::add(char* name, int priority, int burst){
	// TODO: add your implementation 
	task temp;
	temp.name = name, temp.priority = priority, temp.burst = burst;
	scheduled_tasks.push_back(temp);

}

/**
 *   Run the FCFS scheduler
 */
void schedule_fcfs::schedule(){
	// TODO: add your implementation here
}
