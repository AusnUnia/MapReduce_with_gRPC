#ifndef USER_IMPLEMENT_H
#define USER_IMPLEMENT_H

#include<string>
#include<vector>

using std::string;
using std::vector;

template<class Key,class Value>
class KeyValue
{
	public:
    Key key_;
    Value value_;
};

int MyHash(string hash_key) 
{
	std::hash<string> my_hash;
    return my_hash(hash_key);
}

std::vector< KeyValue<string,int> > Map(string file_name,string file_content)
{
    size_t pos=0;
    vector< KeyValue<string,int> > tasks;
    while ((pos = file_content.find(' ') != string::npos) )
    {
        KeyValue<string,int> kv;
        kv.key_=file_content.substr(0, pos);
        kv.value_=1;
        tasks.push_back(kv);
        file_content.erase(0, pos+1);
    }
    return tasks;
}


int Reduce(string word,vector<int> count)
{
    return count.size();
}

#endif