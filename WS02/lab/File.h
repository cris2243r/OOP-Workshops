/***********************************************************************
// OOP244 Workshop #2 lab (part 1)
//
// File  File.h
// Version 1.0
// Author   Fardad Soleimanloo
// Description
//    To be completed by students
// Revision History
// -----------------------------------------------------------
// Cristhian Rosero            9/19/2023
***********************************************************************/
#ifndef SDDS_FILE_H_
#define SDDS_FILE_H_
namespace sdds {
   bool openFile(const char filename[]);
   void closeFile();
   int noOfRecords();
   // TODO: Declare overloaded read function prototypes
 

}

#endif // !SDDS_FILE_H_