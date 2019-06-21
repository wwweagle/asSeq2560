/**
 * \file
 *
 * \brief ADC related functionality implementation.
 *
 (c) 2018 Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms,you may use this software and
    any derivatives exclusively with Microchip products.It is your responsibility
    to comply with third party license terms applicable to your use of third party
    software (including open source software) that may accompany Microchip software.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/**
 * \defgroup doc_driver_adc_init ADC Init Driver
 * \ingroup doc_driver_adc
 *
 * \section doc_driver_adc_rev Revision History
 * - v0.0.0.1 Initial Commit
 *
 *@{
 */

#include <adc.h>

/**
 * \brief Initialize adc interface
 * \return Initialization status.
 */
int8_t ADC_0_init()
{

	/* Enable clock to write ADC registers */
	PRR0 &= ~(1 << PRADC);

	ADMUX = (0x01 << REFS0)   /* AVCC with external capacitor at AREF pin */
	        | (0 << ADLAR)    /* Left Adjust Result: disabled */
	        | (0x20 << MUX0); /* ADC Single Ended Input pin 8 */

	ADCSRA = (1 << ADEN)        /* ADC: enabled */
	         | (1 << ADATE)     /* Auto Trigger: enabled */
	         | (1 << ADIE)      /* ADC Interrupt: enabled */
	         | (0x07 << ADPS0); /* 128 */
	ADCSRB = (0x00 << ADTS0)    /* Free Running mode */
	         | (0 << ACME)      /* Analog Comparator Multiplexer: disabled */
	    ;

	DIDR2 = 1 << ADC8D     /* Disable digital input buffer for ADC8 */
	        | 1 << ADC9D   /* Disable digital input buffer for ADC9 */
	        | 1 << ADC10D  /* Disable digital input buffer for ADC10 */
	        | 1 << ADC11D  /* Disable digital input buffer for ADC11 */
	        | 1 << ADC12D  /* Disable digital input buffer for ADC12 */
	        | 1 << ADC13D  /* Disable digital input buffer for ADC13 */
	        | 1 << ADC14D  /* Disable digital input buffer for ADC14 */
	        | 1 << ADC15D; /* Disable digital input buffer for ADC15 */

	return 0;
}
