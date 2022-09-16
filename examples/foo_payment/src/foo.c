#include "foo.h"

int payment(float value, char status[15]){
	if(value < 0.01 && value > 99999.00)
		return 1;
	if(status != "estudante" && status != "regular" && status != "aposentado" && status != "VIP")
		return 2;

	return 0;
}
