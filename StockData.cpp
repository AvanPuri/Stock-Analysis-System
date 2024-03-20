#include "StockData.h"
#include <curl/curl.h>
#include <string>
#include <iostream>
#include <sstream>
#include <regex>
#include <vector>
#include <map>
#include <chrono>


using namespace std;
using namespace std::chrono;

struct StockValues {

    string date;
	double open;
	double high;
	double low;
	double close;
	double adjclose;
	double volume;



};

StockValues S;


StockData::StockData() {
    m_linecount = 0;
}

StockData::StockData(const string& url) {
    Parsefile(url); 
}

void StockData::Parsefile(const string& url) {
    istringstream filestream(url);
    string line;

    getline(filestream, line); 

    while (getline(filestream, line)) {

        const regex regex{ "((?:[^\\\\,]|\\\\.)*?)(?:,|$)" };
        
        vector<string> vector{ sregex_token_iterator(line.begin(), line.end(), regex, 1), sregex_token_iterator() };

        if (vector[0] != "null" && vector[1] != "null") {
           
            
            S.date = vector[0];

            S.open = stod(vector[1]);
            S.high = stod(vector[2]);
            S.low = stod(vector[3]);
            S.close = stod(vector[4]);
            S.adjclose = stod(vector[5]);
            S.volume = stod(vector[6]);

            
            m_linecount++;
        }
    }
}

void StockData::Print() {
    for (int i = 0; i < m_linecount; i++) {


        

        cout << "Date: " << S.date << endl;
        cout << "Open: " << S.open << endl;
        cout << "High: " << S.high << endl;
        cout << "Low: " << S.low << endl;
        cout << "Close: " << S.close << endl;
        cout << "Adjusted Volume: " << S.adjclose << endl;
        cout << "Volume: " << S.volume << endl;
        cout << endl;
    }
}
