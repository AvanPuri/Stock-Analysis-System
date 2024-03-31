#include <curl/curl.h>
#include <string>
#include <iostream>

using namespace std;

class NewsCurl
{
private:
    CURL* curl;
    string stockanalysiswebsite;
    string link;

public:
    NewsCurl();
    ~NewsCurl();
    string getwebsite(const string& ticker);
};
