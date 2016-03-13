#include <util/delay.h>

#include "../../../spi.h"

using namespace spi;

void init(void);

int main(void) {
	//
	// init MCU
	//
	init();
	
	for(;;) {
		spi_wrrd(0xcc);
		_delay_ms(1000);
		spi_wrrd(0xdd);
		_delay_ms(1000);
	}
	return 0;
}

void init(void) {
	//
	// init spi
	//
	spi_init(SPI_MASTER);
}
