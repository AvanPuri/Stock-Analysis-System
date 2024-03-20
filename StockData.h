#pragma once
#include <string>
#include <iostream>
#include <curl/curl.h>
#include <chrono>
#include <map>

using namespace std;
class StockData
{

private:
    
    int m_linecount;
    
public:
    StockData();
    StockData(const string& url);
    void Parsefile(const string& url);
    void Print();
};







