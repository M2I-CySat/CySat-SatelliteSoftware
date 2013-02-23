/* 
 * File:   system.h
 * Author: Kris
 *
 * Created on October 30, 2012, 8:49 AM
 */

#ifndef SYSTEM_H
#define	SYSTEM_H

#include "task.h"

#define systemPRIORITY_BASE     ( tskIDLE_PRIORITY + 2 )


#define systemPRIORITY_UART1    ( systemPRIORITY_BASE + 0 )
#define systemPRIORITY_UART2    ( systemPRIORITY_BASE + 1 )
#define systemPRIORITY_WIRE     ( systemPRIORITY_BASE + 2 )
#define systemPRIORITY_POWER    ( systemPRIORITY_BASE + 3 )
#define systemPRIORITY_PAYLOAD  ( systemPRIORITY_BASE + 4 )

#define systemPRIORITY_TEST     ( systemPRIORITY_BASE + 7 )


#endif	/* SYSTEM_H */
