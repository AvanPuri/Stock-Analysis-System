#include "CURL.h"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <chrono>
#include <curl/curl.h>
#include <tuple>

using namespace std::chrono;
using namespace std;

size_t curl_handler(char* data, size_t size, size_t size2, void* userdata) {

	static_cast<string*>(userdata)->append(data, size * size2);
	return size * size2;
}


	CurlWrap::CurlWrap() {

		curl = curl_easy_init();
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &curl_handler);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, m_s);

	}
	CurlWrap::~CurlWrap() {

		curl_easy_cleanup(curl);

	}
	string CurlWrap::URL(const string& ticker, system_clock::time_point& begindate, system_clock::time_point& enddate, const string& interval) {

		auto begindate1 = to_string(duration_cast<seconds>(begindate.time_since_epoch()).count());
		auto enddate1 = to_string(duration_cast<seconds>(enddate.time_since_epoch()).count());

		string url = "https://query1.finance.yahoo.com/v7/finance/download/" + ticker + "?period1=" + begindate1 + "&period2=" + enddate1 + "&interval=" + interval + "&events=history";

		return url;
	}
