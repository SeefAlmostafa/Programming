/*
* **************************************************************************
	* choiseMode()	  :  users can choise between (file,screen) as printmode
	* exit_keys()     :  exit/Exit to stop any insertion of data on a screen
	* insert_data()   :  The data can be inserted into a file or into screen
	* set_size()	  :  can be called to set the size of the vectors length
	* print()		  :  print could be called to diplay data  at the screen
	* allowedSize()   :  can be called to check if the vector size  is vaild
	* get_name()      :  get the name and the format of the nedded data file
	* **********************************************************************
*/

#include "DataImpl.h"

int main() {

	Data<string>names;
	try {
		names.insert_data();
	}
	catch (string& m) {
		cout << m;
	}
	names.printData();

	system("pause");
	return 0;
}