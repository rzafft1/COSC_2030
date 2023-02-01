#ifndef PREP_
#define PREP_

#include "node.h"

                                // we are not using data types (strings, int, etc.)... 
                                // we are using template instead 
		        	// in main code we can declare the type with a variable
			        	// Prep<int> PrepInt;
				        // Prep<string> PrepStr;
			        // compiler will use one of these types at runtime
template <class T>

class Prep
{
        private:

                node<T> *head;   // pointer to data structure
		int size;	 // count number of objects contained in data structure

        public:
		     		 // constructor, destructor, getSize, and isEmtpy are required
				 // some variation of insert/add, remove/delete, and print

		prep()
		{
			head = nullptr;
			size = 0;
		}
};

#endif


