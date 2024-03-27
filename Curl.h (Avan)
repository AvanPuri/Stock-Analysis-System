#pragma once
#include <curl/curl.h>
#include <string>
#include <chrono>
#include <tuple>
using namespace std::chrono;
using namespace std;



class CurlWrap
{

private:
	CURL* curl;
	string m_s;
	string response_data;

public:

	CurlWrap();
	~CurlWrap();
	string URL(const string& ticker, system_clock::time_point& begindate, system_clock::time_point& enddate, const string& interval);
	

};

