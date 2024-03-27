#include "GetStockData.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


using namespace std;

GetStockData::GetStockData() {

    m_file = " ";
    m_linecount = 0;
   

   
}



void GetStockData::SetFile(string file) {
    m_file = file;
}
string GetStockData::GetFile() {
    return m_file;
}
int GetStockData::GetLineCount() {
    return m_linecount;
}
string GetStockData::GetDate(int i) {
    return Date[i];
}
double GetStockData::GetOpen(int i) {
    return Open[i];
}
double GetStockData::GetHigh(int i) {
    return High[i];
}
double GetStockData::GetLow(int i) {
    return Low[i];
}
double GetStockData::GetClose(int i) {
    return Close[i];
}
double GetStockData::GetAdjClose(int i) {
    return AdjClose[i];
}
int GetStockData::GetVolume(int i) {
    return Volume[i];
}

void GetStockData::OpenFile() {

    

   
   
    cout << "Paste this URL into a web browser and save the file as a .csv file, then copy the name of the file and input it here: " << endl;
    cin.ignore();
    getline(cin, m_file);

    
    

    fstream csvfile;
    csvfile.open(m_file);

    string line;


   

    if (csvfile) {
        while (getline(csvfile, line)) {

            m_linecount++;

        }

        
    }

    else {

        cout << "Not reading the file" << endl;
    }

    Date = new string[m_linecount];
    Open = new double[m_linecount];
    High = new double[m_linecount];
    Low = new double[m_linecount];
    Close = new double[m_linecount];
    AdjClose = new double[m_linecount];
    Volume = new int[m_linecount];
    csvfile.close();    
}
void GetStockData::Parsedata() {


    fstream csvfile;

    csvfile.open(m_file);


    if (csvfile) {
        string line;
        string temp;
       int i = 0;

       getline(csvfile, line);  
        while (getline(csvfile, line)) {
            stringstream s(line);
            getline(s, temp, ',');
            Date[i] = temp;
            getline(s, temp, ',');
            Open[i] = stod(temp);
            getline(s, temp, ',');
            High[i] = stod(temp);
            getline(s, temp, ',');
            Low[i] = stod(temp);
            getline(s, temp, ',');
            Close[i] = stod(temp);
            getline(s, temp, ',');
            AdjClose[i] = stod(temp);
            getline(s, temp, ',');
            Volume[i] = stoi(temp);
            i++;
        }
    }

    
    else {
        cout << "File not open" << endl;
    }
    csvfile.close();

}
    


