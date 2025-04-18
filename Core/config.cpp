#include "license.txt" 
#include "config.h"

bool saveADCsamplesflag = false;
uint32_t  adcnominalfreq = DEFAULT_ADC_FREQ; 
uint32_t MIN_ADC_FREQ = 2000000;	   // ADC sampling frequency minimum
uint32_t MAX_ADC_FREQ = 140000000;	// ADC sampling frequency maximium
uint32_t N2_BANDSWITCH = 80000000;    // threshold 5 or 6 SR bandwidths
