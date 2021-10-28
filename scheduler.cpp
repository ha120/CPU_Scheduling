#include "scheduler.h"

scheduler::scheduler(){
	//default constructor, do something here, maybe create CPU object to track timings of each program
}

void scheduler::add(char* name, int priority, int burst){
	//add to each of the scheduler_algo references
	std::cout << "adding this stuff to algos->" << name << priority << burst << '\n';

	fcfs.add(name, priority, burst);
	sjf.add(name, priority, burst);
}

void scheduler::schedule(){
	//invoke each of the algos, report time using CPU in each algo
}
