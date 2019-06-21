/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set PA0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PA0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA0_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(0, dir);
}

/**
 * \brief Set PA0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA0_set_level(const bool level)
{
	PORTA_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PA0
 *
 * Toggle the pin level
 */
static inline void PA0_toggle_level()
{
	PORTA_toggle_pin_level(0);
}

/**
 * \brief Get level on PA0
 *
 * Reads the level on a pin
 */
static inline bool PA0_get_level()
{
	return PORTA_get_pin_level(0);
}

/**
 * \brief Set PA1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PA1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA1_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(1, dir);
}

/**
 * \brief Set PA1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA1_set_level(const bool level)
{
	PORTA_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PA1
 *
 * Toggle the pin level
 */
static inline void PA1_toggle_level()
{
	PORTA_toggle_pin_level(1);
}

/**
 * \brief Get level on PA1
 *
 * Reads the level on a pin
 */
static inline bool PA1_get_level()
{
	return PORTA_get_pin_level(1);
}

/**
 * \brief Set PA2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PA2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA2_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(2, dir);
}

/**
 * \brief Set PA2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA2_set_level(const bool level)
{
	PORTA_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PA2
 *
 * Toggle the pin level
 */
static inline void PA2_toggle_level()
{
	PORTA_toggle_pin_level(2);
}

/**
 * \brief Get level on PA2
 *
 * Reads the level on a pin
 */
static inline bool PA2_get_level()
{
	return PORTA_get_pin_level(2);
}

/**
 * \brief Set PA3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PA3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA3_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(3, dir);
}

/**
 * \brief Set PA3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA3_set_level(const bool level)
{
	PORTA_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PA3
 *
 * Toggle the pin level
 */
static inline void PA3_toggle_level()
{
	PORTA_toggle_pin_level(3);
}

/**
 * \brief Get level on PA3
 *
 * Reads the level on a pin
 */
static inline bool PA3_get_level()
{
	return PORTA_get_pin_level(3);
}

/**
 * \brief Set PA4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PA4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA4_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(4, dir);
}

/**
 * \brief Set PA4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA4_set_level(const bool level)
{
	PORTA_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PA4
 *
 * Toggle the pin level
 */
static inline void PA4_toggle_level()
{
	PORTA_toggle_pin_level(4);
}

/**
 * \brief Get level on PA4
 *
 * Reads the level on a pin
 */
static inline bool PA4_get_level()
{
	return PORTA_get_pin_level(4);
}

/**
 * \brief Set PA5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PA5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA5_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(5, dir);
}

/**
 * \brief Set PA5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA5_set_level(const bool level)
{
	PORTA_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PA5
 *
 * Toggle the pin level
 */
static inline void PA5_toggle_level()
{
	PORTA_toggle_pin_level(5);
}

/**
 * \brief Get level on PA5
 *
 * Reads the level on a pin
 */
static inline bool PA5_get_level()
{
	return PORTA_get_pin_level(5);
}

/**
 * \brief Set PA6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PA6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA6_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set PA6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA6_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PA6
 *
 * Toggle the pin level
 */
static inline void PA6_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on PA6
 *
 * Reads the level on a pin
 */
static inline bool PA6_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set PA7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PA7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PA7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PA7_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(7, dir);
}

/**
 * \brief Set PA7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PA7_set_level(const bool level)
{
	PORTA_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PA7
 *
 * Toggle the pin level
 */
static inline void PA7_toggle_level()
{
	PORTA_toggle_pin_level(7);
}

/**
 * \brief Get level on PA7
 *
 * Reads the level on a pin
 */
static inline bool PA7_get_level()
{
	return PORTA_get_pin_level(7);
}

/**
 * \brief Set PC0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PC0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC0_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set PC0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC0_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PC0
 *
 * Toggle the pin level
 */
static inline void PC0_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on PC0
 *
 * Reads the level on a pin
 */
static inline bool PC0_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set PC1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PC1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC1_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set PC1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC1_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PC1
 *
 * Toggle the pin level
 */
static inline void PC1_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on PC1
 *
 * Reads the level on a pin
 */
static inline bool PC1_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set PC2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PC2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC2_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set PC2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC2_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PC2
 *
 * Toggle the pin level
 */
static inline void PC2_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on PC2
 *
 * Reads the level on a pin
 */
static inline bool PC2_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set PC3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PC3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC3_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set PC3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC3_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PC3
 *
 * Toggle the pin level
 */
static inline void PC3_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on PC3
 *
 * Reads the level on a pin
 */
static inline bool PC3_get_level()
{
	return PORTC_get_pin_level(3);
}

/**
 * \brief Set PC4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PC4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC4_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set PC4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC4_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PC4
 *
 * Toggle the pin level
 */
static inline void PC4_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on PC4
 *
 * Reads the level on a pin
 */
static inline bool PC4_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set PC5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PC5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC5_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set PC5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC5_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PC5
 *
 * Toggle the pin level
 */
static inline void PC5_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on PC5
 *
 * Reads the level on a pin
 */
static inline bool PC5_get_level()
{
	return PORTC_get_pin_level(5);
}

/**
 * \brief Set PC6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PC6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC6_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(6, dir);
}

/**
 * \brief Set PC6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC6_set_level(const bool level)
{
	PORTC_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PC6
 *
 * Toggle the pin level
 */
static inline void PC6_toggle_level()
{
	PORTC_toggle_pin_level(6);
}

/**
 * \brief Get level on PC6
 *
 * Reads the level on a pin
 */
static inline bool PC6_get_level()
{
	return PORTC_get_pin_level(6);
}

/**
 * \brief Set PC7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PC7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PC7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PC7_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(7, dir);
}

/**
 * \brief Set PC7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PC7_set_level(const bool level)
{
	PORTC_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PC7
 *
 * Toggle the pin level
 */
static inline void PC7_toggle_level()
{
	PORTC_toggle_pin_level(7);
}

/**
 * \brief Get level on PC7
 *
 * Reads the level on a pin
 */
static inline bool PC7_get_level()
{
	return PORTC_get_pin_level(7);
}

/**
 * \brief Set PD0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PD0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD0_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(0, dir);
}

/**
 * \brief Set PD0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD0_set_level(const bool level)
{
	PORTD_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PD0
 *
 * Toggle the pin level
 */
static inline void PD0_toggle_level()
{
	PORTD_toggle_pin_level(0);
}

/**
 * \brief Get level on PD0
 *
 * Reads the level on a pin
 */
static inline bool PD0_get_level()
{
	return PORTD_get_pin_level(0);
}

/**
 * \brief Set PD1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PD1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTD_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PD1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PD1_set_dir(const enum port_dir dir)
{
	PORTD_set_pin_dir(1, dir);
}

/**
 * \brief Set PD1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PD1_set_level(const bool level)
{
	PORTD_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PD1
 *
 * Toggle the pin level
 */
static inline void PD1_toggle_level()
{
	PORTD_toggle_pin_level(1);
}

/**
 * \brief Get level on PD1
 *
 * Reads the level on a pin
 */
static inline bool PD1_get_level()
{
	return PORTD_get_pin_level(1);
}

/**
 * \brief Set PE0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PE0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PE0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PE0_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(0, dir);
}

/**
 * \brief Set PE0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PE0_set_level(const bool level)
{
	PORTE_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PE0
 *
 * Toggle the pin level
 */
static inline void PE0_toggle_level()
{
	PORTE_toggle_pin_level(0);
}

/**
 * \brief Get level on PE0
 *
 * Reads the level on a pin
 */
static inline bool PE0_get_level()
{
	return PORTE_get_pin_level(0);
}

/**
 * \brief Set PE1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PE1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTE_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PE1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PE1_set_dir(const enum port_dir dir)
{
	PORTE_set_pin_dir(1, dir);
}

/**
 * \brief Set PE1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PE1_set_level(const bool level)
{
	PORTE_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PE1
 *
 * Toggle the pin level
 */
static inline void PE1_toggle_level()
{
	PORTE_toggle_pin_level(1);
}

/**
 * \brief Get level on PE1
 *
 * Reads the level on a pin
 */
static inline bool PE1_get_level()
{
	return PORTE_get_pin_level(1);
}

/**
 * \brief Set PK0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PK0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK0_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(0, dir);
}

/**
 * \brief Set PK0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK0_set_level(const bool level)
{
	PORTK_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PK0
 *
 * Toggle the pin level
 */
static inline void PK0_toggle_level()
{
	PORTK_toggle_pin_level(0);
}

/**
 * \brief Get level on PK0
 *
 * Reads the level on a pin
 */
static inline bool PK0_get_level()
{
	return PORTK_get_pin_level(0);
}

/**
 * \brief Set PK1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PK1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK1_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(1, dir);
}

/**
 * \brief Set PK1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK1_set_level(const bool level)
{
	PORTK_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PK1
 *
 * Toggle the pin level
 */
static inline void PK1_toggle_level()
{
	PORTK_toggle_pin_level(1);
}

/**
 * \brief Get level on PK1
 *
 * Reads the level on a pin
 */
static inline bool PK1_get_level()
{
	return PORTK_get_pin_level(1);
}

/**
 * \brief Set PK2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PK2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK2_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(2, dir);
}

/**
 * \brief Set PK2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK2_set_level(const bool level)
{
	PORTK_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PK2
 *
 * Toggle the pin level
 */
static inline void PK2_toggle_level()
{
	PORTK_toggle_pin_level(2);
}

/**
 * \brief Get level on PK2
 *
 * Reads the level on a pin
 */
static inline bool PK2_get_level()
{
	return PORTK_get_pin_level(2);
}

/**
 * \brief Set PK3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PK3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK3_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(3, dir);
}

/**
 * \brief Set PK3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK3_set_level(const bool level)
{
	PORTK_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PK3
 *
 * Toggle the pin level
 */
static inline void PK3_toggle_level()
{
	PORTK_toggle_pin_level(3);
}

/**
 * \brief Get level on PK3
 *
 * Reads the level on a pin
 */
static inline bool PK3_get_level()
{
	return PORTK_get_pin_level(3);
}

/**
 * \brief Set PK4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PK4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK4_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(4, dir);
}

/**
 * \brief Set PK4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK4_set_level(const bool level)
{
	PORTK_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PK4
 *
 * Toggle the pin level
 */
static inline void PK4_toggle_level()
{
	PORTK_toggle_pin_level(4);
}

/**
 * \brief Get level on PK4
 *
 * Reads the level on a pin
 */
static inline bool PK4_get_level()
{
	return PORTK_get_pin_level(4);
}

/**
 * \brief Set PK5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PK5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK5_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(5, dir);
}

/**
 * \brief Set PK5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK5_set_level(const bool level)
{
	PORTK_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PK5
 *
 * Toggle the pin level
 */
static inline void PK5_toggle_level()
{
	PORTK_toggle_pin_level(5);
}

/**
 * \brief Get level on PK5
 *
 * Reads the level on a pin
 */
static inline bool PK5_get_level()
{
	return PORTK_get_pin_level(5);
}

/**
 * \brief Set PK6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PK6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK6_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(6, dir);
}

/**
 * \brief Set PK6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK6_set_level(const bool level)
{
	PORTK_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PK6
 *
 * Toggle the pin level
 */
static inline void PK6_toggle_level()
{
	PORTK_toggle_pin_level(6);
}

/**
 * \brief Get level on PK6
 *
 * Reads the level on a pin
 */
static inline bool PK6_get_level()
{
	return PORTK_get_pin_level(6);
}

/**
 * \brief Set PK7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PK7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTK_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PK7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PK7_set_dir(const enum port_dir dir)
{
	PORTK_set_pin_dir(7, dir);
}

/**
 * \brief Set PK7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PK7_set_level(const bool level)
{
	PORTK_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PK7
 *
 * Toggle the pin level
 */
static inline void PK7_toggle_level()
{
	PORTK_toggle_pin_level(7);
}

/**
 * \brief Get level on PK7
 *
 * Reads the level on a pin
 */
static inline bool PK7_get_level()
{
	return PORTK_get_pin_level(7);
}

/**
 * \brief Set PL0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PL0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL0_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(0, dir);
}

/**
 * \brief Set PL0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL0_set_level(const bool level)
{
	PORTL_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PL0
 *
 * Toggle the pin level
 */
static inline void PL0_toggle_level()
{
	PORTL_toggle_pin_level(0);
}

/**
 * \brief Get level on PL0
 *
 * Reads the level on a pin
 */
static inline bool PL0_get_level()
{
	return PORTL_get_pin_level(0);
}

/**
 * \brief Set PL1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PL1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL1_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(1, dir);
}

/**
 * \brief Set PL1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL1_set_level(const bool level)
{
	PORTL_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PL1
 *
 * Toggle the pin level
 */
static inline void PL1_toggle_level()
{
	PORTL_toggle_pin_level(1);
}

/**
 * \brief Get level on PL1
 *
 * Reads the level on a pin
 */
static inline bool PL1_get_level()
{
	return PORTL_get_pin_level(1);
}

/**
 * \brief Set PL2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PL2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL2_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(2, dir);
}

/**
 * \brief Set PL2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL2_set_level(const bool level)
{
	PORTL_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PL2
 *
 * Toggle the pin level
 */
static inline void PL2_toggle_level()
{
	PORTL_toggle_pin_level(2);
}

/**
 * \brief Get level on PL2
 *
 * Reads the level on a pin
 */
static inline bool PL2_get_level()
{
	return PORTL_get_pin_level(2);
}

/**
 * \brief Set PL3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PL3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL3_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(3, dir);
}

/**
 * \brief Set PL3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL3_set_level(const bool level)
{
	PORTL_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PL3
 *
 * Toggle the pin level
 */
static inline void PL3_toggle_level()
{
	PORTL_toggle_pin_level(3);
}

/**
 * \brief Get level on PL3
 *
 * Reads the level on a pin
 */
static inline bool PL3_get_level()
{
	return PORTL_get_pin_level(3);
}

/**
 * \brief Set PL4 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL4_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PL4 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL4_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(4, dir);
}

/**
 * \brief Set PL4 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL4_set_level(const bool level)
{
	PORTL_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PL4
 *
 * Toggle the pin level
 */
static inline void PL4_toggle_level()
{
	PORTL_toggle_pin_level(4);
}

/**
 * \brief Get level on PL4
 *
 * Reads the level on a pin
 */
static inline bool PL4_get_level()
{
	return PORTL_get_pin_level(4);
}

/**
 * \brief Set PL5 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL5_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PL5 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL5_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(5, dir);
}

/**
 * \brief Set PL5 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL5_set_level(const bool level)
{
	PORTL_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PL5
 *
 * Toggle the pin level
 */
static inline void PL5_toggle_level()
{
	PORTL_toggle_pin_level(5);
}

/**
 * \brief Get level on PL5
 *
 * Reads the level on a pin
 */
static inline bool PL5_get_level()
{
	return PORTL_get_pin_level(5);
}

/**
 * \brief Set PL6 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL6_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PL6 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL6_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(6, dir);
}

/**
 * \brief Set PL6 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL6_set_level(const bool level)
{
	PORTL_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PL6
 *
 * Toggle the pin level
 */
static inline void PL6_toggle_level()
{
	PORTL_toggle_pin_level(6);
}

/**
 * \brief Get level on PL6
 *
 * Reads the level on a pin
 */
static inline bool PL6_get_level()
{
	return PORTL_get_pin_level(6);
}

/**
 * \brief Set PL7 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PL7_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTL_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PL7 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PL7_set_dir(const enum port_dir dir)
{
	PORTL_set_pin_dir(7, dir);
}

/**
 * \brief Set PL7 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PL7_set_level(const bool level)
{
	PORTL_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PL7
 *
 * Toggle the pin level
 */
static inline void PL7_toggle_level()
{
	PORTL_toggle_pin_level(7);
}

/**
 * \brief Get level on PL7
 *
 * Reads the level on a pin
 */
static inline bool PL7_get_level()
{
	return PORTL_get_pin_level(7);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
