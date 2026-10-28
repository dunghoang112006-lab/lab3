/*
 * osal.c
 *
 *  Created on: Oct 26, 2026
 *      Author: USER
 */


#include "osal.h"
#include "stm32f4xx_hal.h"

// 1. Nhường luồng (chạy bare-metal không dùng RTOS nên để trống)
void osal_yield(void)
{

}

// 2. Tạm dừng một nhịp ngắn trong quá trình chờ đợi
void osal_pause(void)
{
    HAL_Delay(1);
}

// 3. Khởi tạo Mutex (giả lập trả về OK vì chạy đơn luồng)
osal_err_t osal_mutex_create(osal_mutex_t *mutex)
{
    (void)mutex;
    return OSAL_ERR_NONE;
}

// 4. Khóa Mutex
osal_err_t osal_mutex_lock(osal_mutex_t *mutex, uint32_t timeout_ms)
{
    (void)mutex;
    (void)timeout_ms;
    return OSAL_ERR_NONE;
}

// 5. Mở khóa Mutex
void osal_mutex_unlock(osal_mutex_t *mutex)
{
    (void)mutex;
}

// 6. Hàm trễ thời gian (delay) bằng HAL của STM32
void osal_delay_ms(uint32_t ms)
{
    HAL_Delay(ms);
}
