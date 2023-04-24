#ifndef WORKER_H
#define WORKER_H


#include"../user_implement/user_implement.h"

#include<functional>

using std::function;

class Worker
{

    public:
    //运行woker的进程入口（main）
    void WorkerEntry(function< vector<KeyValue<string,int>>(string,string) > map_func, function< int(string,vector<int>) > reduce_func);

};




#endif