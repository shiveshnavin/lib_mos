#include "mgos.h"
#include "mgos_pwm.h"

bool is2(int no)
{

	return no==2;

}


bool mgos_lib_mos_init(void) {

  printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library"));
  mgos_pwm_set(4,0.4,200);
  return true;
}
