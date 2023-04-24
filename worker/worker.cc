#include"worker.h"

#include<functional>



void Worker::WorkerEntry(function< vector<KeyValue<string,int>>(string,string) > map_func, function< int(string,vector<int>) > reduce_func)
{


}


