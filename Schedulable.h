#pragma once
#ifndef SCHEDULABLE_H
#define SCHEDULABLE_H

class Schedulable
{
public:
    virtual void schedule(string time) = 0;// pure virtual
    virtual void cancelSchedule() = 0;

    virtual ~Schedulable() {}
};

#endif