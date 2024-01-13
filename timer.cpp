#include "timer.hpp"

#include <avr/io.h>

/**
 * Taktowanie Timer/Counter1.
 */
constexpr uint8_t TIMER1_PRESCALER = _BV(CS11);

/**
 * Inicjalizuje Timer/Counter1.
 */
void timerInitialize()
{
	TCCR1B = TIMER1_PRESCALER;
	TIMSK1 = _BV(TOIE1);
}

