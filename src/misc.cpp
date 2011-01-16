#include <string>
#include "misc.h"

misc::misc(void)
{
}


misc::~misc(void)
{
}


void misc::find_and_replace( std::string &source, const std::string find, std::string replace ) 
{
	int found = source.rfind( find );
	if( found != std::string::npos )
		source.replace( found, find.length(), replace );
}