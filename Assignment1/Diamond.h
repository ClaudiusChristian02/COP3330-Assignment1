/*************************************************************************************************************************************************************/
/*                                                                       Diamond Class                                                                       */ 

/*************************************************************************************************************************************************************/
/*                                                                       Author and Date                                                                     */
/*

Author: Claudius Christian 
Date: 1/13/2013 

/*************************************************************************************************************************************************************/
/*                                                                       Citations                                                                           */
/*

Dr. David Gaitros provided a lot of example code for this program. Specifically I used his box example code to make my program.


/*************************************************************************************************************************************************************/
/*                                                                       Description                                                                         */
/*

Description: A class that provides the capability to draw a diamond of varying size to standard output. The   
diamond will have a border and fill character and be restricted to certain sizes as specified by the       
constants MINIMUMSIZE and MAXIMUMSIZE. Diamonds of sizes 1 and 2 have no fill characters.  

/*************************************************************************************************************************************************************/
/*                                                                       Header Files                                                                        */

#include <iostream>
using namespace std;
                                                                                 
/*************************************************************************************************************************************************************/
/*                                                                       Constants                                                                           */

  const char LOWERBOUND = '!';
  const char UPPERBOUND = '~';
  const int PADDINGSIZE = 80;
  const int SIZE1 = 1;
  const int SIZE2 = 2;
  const int MINIMUMSIZE = 1;
  const int MAXIMUMSIZE = 39;
  const char DEFAULTBORDER = '#';
  const char DEFAULTFILL = '*';
 



class Diamond
{

/*************************************************************************************************************************************************************/
/*                                                                Public Member Functions                                                                    */

public:
	Diamond();     
	Diamond (const int s, const char border = '#', const char fill = '*');
   
  void Draw();
  void Shrink();
  void Grow();
  int GetSize(); 
  int Perimeter();
  double Area();
  void SetBorder(const char borderchar);
  void SetFill(const char fillchar);
  void Summary();

/*************************************************************************************************************************************************************/
/*                                                                Private Member Functions                                                                   */
  
private:
 
  char fill;
  char border;
  int size;
};
