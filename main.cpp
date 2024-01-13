#include "gpio.hpp"
#include "display.hpp"
#include "timer.hpp"
#include "stopwatch.hpp"

#include <avr/interrupt.h>

/**
 * Obsługa przerwania przepełnienia Timer/Counter1.
 */
ISR(TIMER1_OVF_vect)
{
	refreshDisplay();
	stopwatchTick();
}

/**
 * Funkcja główna.
 */
int main()
{
	gpioInitialize();
	timerInitialize();

	sei();

	while (true) {
	}
}
