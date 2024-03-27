#pragma once
#include <string>

using namespace std;

class GetStockData
{

protected:
    string m_file;
    int m_linecount;
    string* Date;
    double* Open;
    double* High;
    double* Low;
    double* Close;
    double* AdjClose;
    int* Volume;

public:
   GetStockData();
  

   void SetFile(string file);
   string GetFile();    
   int GetLineCount();  
   string GetDate(int i);
    double GetOpen(int i);
    double GetHigh(int i);
    double GetLow(int i);
    double GetClose(int i);
    double GetAdjClose(int i);
    int GetVolume(int i);



    void OpenFile();
   void Parsedata();





};








