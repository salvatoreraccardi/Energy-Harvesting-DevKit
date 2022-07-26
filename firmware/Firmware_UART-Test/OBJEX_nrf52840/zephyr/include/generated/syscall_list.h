/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ADC_CHANNEL_SETUP 0
#define K_SYSCALL_ADC_READ 1
#define K_SYSCALL_ADC_READ_ASYNC 2
#define K_SYSCALL_ATOMIC_ADD 3
#define K_SYSCALL_ATOMIC_AND 4
#define K_SYSCALL_ATOMIC_CAS 5
#define K_SYSCALL_ATOMIC_NAND 6
#define K_SYSCALL_ATOMIC_OR 7
#define K_SYSCALL_ATOMIC_PTR_CAS 8
#define K_SYSCALL_ATOMIC_PTR_SET 9
#define K_SYSCALL_ATOMIC_SET 10
#define K_SYSCALL_ATOMIC_SUB 11
#define K_SYSCALL_ATOMIC_XOR 12
#define K_SYSCALL_BBRAM_CHECK_INVALID 13
#define K_SYSCALL_BBRAM_CHECK_POWER 14
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 15
#define K_SYSCALL_BBRAM_GET_SIZE 16
#define K_SYSCALL_BBRAM_READ 17
#define K_SYSCALL_BBRAM_WRITE 18
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 19
#define K_SYSCALL_CAN_CALC_TIMING 20
#define K_SYSCALL_CAN_CALC_TIMING_DATA 21
#define K_SYSCALL_CAN_GET_CAPABILITIES 22
#define K_SYSCALL_CAN_GET_CORE_CLOCK 23
#define K_SYSCALL_CAN_GET_MAX_BITRATE 24
#define K_SYSCALL_CAN_GET_MAX_FILTERS 25
#define K_SYSCALL_CAN_GET_STATE 26
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 27
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 28
#define K_SYSCALL_CAN_GET_TIMING_MAX 29
#define K_SYSCALL_CAN_GET_TIMING_MIN 30
#define K_SYSCALL_CAN_RECOVER 31
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 32
#define K_SYSCALL_CAN_SEND 33
#define K_SYSCALL_CAN_SET_BITRATE 34
#define K_SYSCALL_CAN_SET_BITRATE_DATA 35
#define K_SYSCALL_CAN_SET_MODE 36
#define K_SYSCALL_CAN_SET_TIMING 37
#define K_SYSCALL_CAN_SET_TIMING_DATA 38
#define K_SYSCALL_CLOCK_GETTIME 39
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 40
#define K_SYSCALL_COUNTER_GET_FREQUENCY 41
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 42
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 43
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 44
#define K_SYSCALL_COUNTER_GET_PENDING_INT 45
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 46
#define K_SYSCALL_COUNTER_GET_VALUE 47
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 48
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 49
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 50
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 51
#define K_SYSCALL_COUNTER_START 52
#define K_SYSCALL_COUNTER_STOP 53
#define K_SYSCALL_COUNTER_TICKS_TO_US 54
#define K_SYSCALL_COUNTER_US_TO_TICKS 55
#define K_SYSCALL_DAC_CHANNEL_SETUP 56
#define K_SYSCALL_DAC_WRITE_VALUE 57
#define K_SYSCALL_DEVICE_GET_BINDING 58
#define K_SYSCALL_DEVICE_IS_READY 59
#define K_SYSCALL_DMA_CHAN_FILTER 60
#define K_SYSCALL_DMA_RELEASE_CHANNEL 61
#define K_SYSCALL_DMA_REQUEST_CHANNEL 62
#define K_SYSCALL_DMA_RESUME 63
#define K_SYSCALL_DMA_START 64
#define K_SYSCALL_DMA_STOP 65
#define K_SYSCALL_DMA_SUSPEND 66
#define K_SYSCALL_EC_HOST_CMD_PERIPH_INIT 67
#define K_SYSCALL_EC_HOST_CMD_PERIPH_SEND 68
#define K_SYSCALL_EEPROM_GET_SIZE 69
#define K_SYSCALL_EEPROM_READ 70
#define K_SYSCALL_EEPROM_WRITE 71
#define K_SYSCALL_ENTROPY_GET_ENTROPY 72
#define K_SYSCALL_ESPI_CONFIG 73
#define K_SYSCALL_ESPI_FLASH_ERASE 74
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 75
#define K_SYSCALL_ESPI_READ_FLASH 76
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 77
#define K_SYSCALL_ESPI_READ_REQUEST 78
#define K_SYSCALL_ESPI_RECEIVE_OOB 79
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 80
#define K_SYSCALL_ESPI_SAF_ACTIVATE 81
#define K_SYSCALL_ESPI_SAF_CONFIG 82
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 83
#define K_SYSCALL_ESPI_SAF_FLASH_READ 84
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 85
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 86
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 87
#define K_SYSCALL_ESPI_SEND_OOB 88
#define K_SYSCALL_ESPI_SEND_VWIRE 89
#define K_SYSCALL_ESPI_WRITE_FLASH 90
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 91
#define K_SYSCALL_ESPI_WRITE_REQUEST 92
#define K_SYSCALL_FLASH_ERASE 93
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 94
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 95
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 96
#define K_SYSCALL_FLASH_GET_PARAMETERS 97
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 98
#define K_SYSCALL_FLASH_READ 99
#define K_SYSCALL_FLASH_READ_JEDEC_ID 100
#define K_SYSCALL_FLASH_SFDP_READ 101
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 102
#define K_SYSCALL_FLASH_WRITE 103
#define K_SYSCALL_GPIO_GET_PENDING_INT 104
#define K_SYSCALL_GPIO_PIN_CONFIGURE 105
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 106
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 107
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 108
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 109
#define K_SYSCALL_GPIO_PORT_GET_RAW 110
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 111
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 112
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 113
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 114
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 115
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 116
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 117
#define K_SYSCALL_I2C_CONFIGURE 118
#define K_SYSCALL_I2C_GET_CONFIG 119
#define K_SYSCALL_I2C_RECOVER_BUS 120
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 121
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 122
#define K_SYSCALL_I2C_TRANSFER 123
#define K_SYSCALL_I2S_BUF_READ 124
#define K_SYSCALL_I2S_BUF_WRITE 125
#define K_SYSCALL_I2S_CONFIGURE 126
#define K_SYSCALL_I2S_TRIGGER 127
#define K_SYSCALL_IPM_COMPLETE 128
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 129
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 130
#define K_SYSCALL_IPM_SEND 131
#define K_SYSCALL_IPM_SET_ENABLED 132
#define K_SYSCALL_IVSHMEM_GET_ID 133
#define K_SYSCALL_IVSHMEM_GET_MEM 134
#define K_SYSCALL_IVSHMEM_GET_VECTORS 135
#define K_SYSCALL_IVSHMEM_INT_PEER 136
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 137
#define K_SYSCALL_KSCAN_CONFIG 138
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 139
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 140
#define K_SYSCALL_K_BUSY_WAIT 141
#define K_SYSCALL_K_CONDVAR_BROADCAST 142
#define K_SYSCALL_K_CONDVAR_INIT 143
#define K_SYSCALL_K_CONDVAR_SIGNAL 144
#define K_SYSCALL_K_CONDVAR_WAIT 145
#define K_SYSCALL_K_EVENT_INIT 146
#define K_SYSCALL_K_EVENT_POST 147
#define K_SYSCALL_K_EVENT_SET 148
#define K_SYSCALL_K_EVENT_SET_MASKED 149
#define K_SYSCALL_K_EVENT_WAIT 150
#define K_SYSCALL_K_EVENT_WAIT_ALL 151
#define K_SYSCALL_K_FLOAT_DISABLE 152
#define K_SYSCALL_K_FLOAT_ENABLE 153
#define K_SYSCALL_K_FUTEX_WAIT 154
#define K_SYSCALL_K_FUTEX_WAKE 155
#define K_SYSCALL_K_IS_PREEMPT_THREAD 156
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 157
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 158
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 159
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 160
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 161
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 162
#define K_SYSCALL_K_MSGQ_GET 163
#define K_SYSCALL_K_MSGQ_GET_ATTRS 164
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 165
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 166
#define K_SYSCALL_K_MSGQ_PEEK 167
#define K_SYSCALL_K_MSGQ_PURGE 168
#define K_SYSCALL_K_MSGQ_PUT 169
#define K_SYSCALL_K_MUTEX_INIT 170
#define K_SYSCALL_K_MUTEX_LOCK 171
#define K_SYSCALL_K_MUTEX_UNLOCK 172
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 173
#define K_SYSCALL_K_OBJECT_ALLOC 174
#define K_SYSCALL_K_OBJECT_RELEASE 175
#define K_SYSCALL_K_PIPE_ALLOC_INIT 176
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 177
#define K_SYSCALL_K_PIPE_FLUSH 178
#define K_SYSCALL_K_PIPE_GET 179
#define K_SYSCALL_K_PIPE_PUT 180
#define K_SYSCALL_K_PIPE_READ_AVAIL 181
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 182
#define K_SYSCALL_K_POLL 183
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 184
#define K_SYSCALL_K_POLL_SIGNAL_INIT 185
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 186
#define K_SYSCALL_K_POLL_SIGNAL_RESET 187
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 188
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 189
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 190
#define K_SYSCALL_K_QUEUE_GET 191
#define K_SYSCALL_K_QUEUE_INIT 192
#define K_SYSCALL_K_QUEUE_IS_EMPTY 193
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 194
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 195
#define K_SYSCALL_K_SEM_COUNT_GET 196
#define K_SYSCALL_K_SEM_GIVE 197
#define K_SYSCALL_K_SEM_INIT 198
#define K_SYSCALL_K_SEM_RESET 199
#define K_SYSCALL_K_SEM_TAKE 200
#define K_SYSCALL_K_SLEEP 201
#define K_SYSCALL_K_STACK_ALLOC_INIT 202
#define K_SYSCALL_K_STACK_POP 203
#define K_SYSCALL_K_STACK_PUSH 204
#define K_SYSCALL_K_STR_OUT 205
#define K_SYSCALL_K_THREAD_ABORT 206
#define K_SYSCALL_K_THREAD_CREATE 207
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 208
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 209
#define K_SYSCALL_K_THREAD_DEADLINE_SET 210
#define K_SYSCALL_K_THREAD_JOIN 211
#define K_SYSCALL_K_THREAD_NAME_COPY 212
#define K_SYSCALL_K_THREAD_NAME_SET 213
#define K_SYSCALL_K_THREAD_PRIORITY_GET 214
#define K_SYSCALL_K_THREAD_PRIORITY_SET 215
#define K_SYSCALL_K_THREAD_RESUME 216
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 217
#define K_SYSCALL_K_THREAD_START 218
#define K_SYSCALL_K_THREAD_SUSPEND 219
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 220
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 221
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 222
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 223
#define K_SYSCALL_K_TIMER_START 224
#define K_SYSCALL_K_TIMER_STATUS_GET 225
#define K_SYSCALL_K_TIMER_STATUS_SYNC 226
#define K_SYSCALL_K_TIMER_STOP 227
#define K_SYSCALL_K_TIMER_USER_DATA_GET 228
#define K_SYSCALL_K_TIMER_USER_DATA_SET 229
#define K_SYSCALL_K_UPTIME_TICKS 230
#define K_SYSCALL_K_USLEEP 231
#define K_SYSCALL_K_WAKEUP 232
#define K_SYSCALL_K_YIELD 233
#define K_SYSCALL_LED_BLINK 234
#define K_SYSCALL_LED_GET_INFO 235
#define K_SYSCALL_LED_OFF 236
#define K_SYSCALL_LED_ON 237
#define K_SYSCALL_LED_SET_BRIGHTNESS 238
#define K_SYSCALL_LED_SET_CHANNEL 239
#define K_SYSCALL_LED_SET_COLOR 240
#define K_SYSCALL_LED_WRITE_CHANNELS 241
#define K_SYSCALL_LOG_BUFFERED_CNT 242
#define K_SYSCALL_LOG_FILTER_SET 243
#define K_SYSCALL_LOG_PANIC 244
#define K_SYSCALL_LOG_PROCESS 245
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 246
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 247
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 248
#define K_SYSCALL_MBOX_MTU_GET 249
#define K_SYSCALL_MBOX_SEND 250
#define K_SYSCALL_MBOX_SET_ENABLED 251
#define K_SYSCALL_MDIO_BUS_DISABLE 252
#define K_SYSCALL_MDIO_BUS_ENABLE 253
#define K_SYSCALL_MDIO_READ 254
#define K_SYSCALL_MDIO_WRITE 255
#define K_SYSCALL_NET_ADDR_NTOP 256
#define K_SYSCALL_NET_ADDR_PTON 257
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 258
#define K_SYSCALL_NET_IF_GET_BY_INDEX 259
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 260
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 261
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 262
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 263
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 264
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 265
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 266
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 267
#define K_SYSCALL_NRF_QSPI_NOR_BASE_CLOCK_DIV_FORCE 268
#define K_SYSCALL_PECI_CONFIG 269
#define K_SYSCALL_PECI_DISABLE 270
#define K_SYSCALL_PECI_ENABLE 271
#define K_SYSCALL_PECI_TRANSFER 272
#define K_SYSCALL_PHY_CONFIGURE_LINK 273
#define K_SYSCALL_PHY_GET_LINK_STATE 274
#define K_SYSCALL_PHY_LINK_CALLBACK_SET 275
#define K_SYSCALL_PHY_READ 276
#define K_SYSCALL_PHY_WRITE 277
#define K_SYSCALL_PS2_CONFIG 278
#define K_SYSCALL_PS2_DISABLE_CALLBACK 279
#define K_SYSCALL_PS2_ENABLE_CALLBACK 280
#define K_SYSCALL_PS2_READ 281
#define K_SYSCALL_PS2_WRITE 282
#define K_SYSCALL_PTP_CLOCK_GET 283
#define K_SYSCALL_PWM_CAPTURE_CYCLES 284
#define K_SYSCALL_PWM_DISABLE_CAPTURE 285
#define K_SYSCALL_PWM_ENABLE_CAPTURE 286
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 287
#define K_SYSCALL_PWM_SET_CYCLES 288
#define K_SYSCALL_RESET_LINE_ASSERT 289
#define K_SYSCALL_RESET_LINE_DEASSERT 290
#define K_SYSCALL_RESET_LINE_TOGGLE 291
#define K_SYSCALL_RESET_STATUS 292
#define K_SYSCALL_SDHC_CARD_BUSY 293
#define K_SYSCALL_SDHC_CARD_PRESENT 294
#define K_SYSCALL_SDHC_EXECUTE_TUNING 295
#define K_SYSCALL_SDHC_GET_HOST_PROPS 296
#define K_SYSCALL_SDHC_HW_RESET 297
#define K_SYSCALL_SDHC_REQUEST 298
#define K_SYSCALL_SDHC_SET_IO 299
#define K_SYSCALL_SENSOR_ATTR_GET 300
#define K_SYSCALL_SENSOR_ATTR_SET 301
#define K_SYSCALL_SENSOR_CHANNEL_GET 302
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 303
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 304
#define K_SYSCALL_SPI_RELEASE 305
#define K_SYSCALL_SPI_TRANSCEIVE 306
#define K_SYSCALL_SYSCON_GET_BASE 307
#define K_SYSCALL_SYSCON_GET_SIZE 308
#define K_SYSCALL_SYSCON_READ_REG 309
#define K_SYSCALL_SYSCON_WRITE_REG 310
#define K_SYSCALL_SYS_CACHE_DATA_ALL 311
#define K_SYSCALL_SYS_CACHE_DATA_RANGE 312
#define K_SYSCALL_SYS_CACHE_INSTR_ALL 313
#define K_SYSCALL_SYS_CACHE_INSTR_RANGE 314
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 315
#define K_SYSCALL_SYS_CSRAND_GET 316
#define K_SYSCALL_SYS_RAND32_GET 317
#define K_SYSCALL_SYS_RAND_GET 318
#define K_SYSCALL_UART_CONFIGURE 319
#define K_SYSCALL_UART_CONFIG_GET 320
#define K_SYSCALL_UART_DRV_CMD 321
#define K_SYSCALL_UART_ERR_CHECK 322
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 323
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 324
#define K_SYSCALL_UART_IRQ_IS_PENDING 325
#define K_SYSCALL_UART_IRQ_RX_DISABLE 326
#define K_SYSCALL_UART_IRQ_RX_ENABLE 327
#define K_SYSCALL_UART_IRQ_TX_DISABLE 328
#define K_SYSCALL_UART_IRQ_TX_ENABLE 329
#define K_SYSCALL_UART_IRQ_UPDATE 330
#define K_SYSCALL_UART_LINE_CTRL_GET 331
#define K_SYSCALL_UART_LINE_CTRL_SET 332
#define K_SYSCALL_UART_MUX_FIND 333
#define K_SYSCALL_UART_POLL_IN 334
#define K_SYSCALL_UART_POLL_IN_U16 335
#define K_SYSCALL_UART_POLL_OUT 336
#define K_SYSCALL_UART_POLL_OUT_U16 337
#define K_SYSCALL_UART_RX_DISABLE 338
#define K_SYSCALL_UART_RX_ENABLE 339
#define K_SYSCALL_UART_RX_ENABLE_U16 340
#define K_SYSCALL_UART_TX 341
#define K_SYSCALL_UART_TX_ABORT 342
#define K_SYSCALL_UART_TX_U16 343
#define K_SYSCALL_USER_FAULT 344
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 345
#define K_SYSCALL_W1_CONFIGURE 346
#define K_SYSCALL_W1_GET_SLAVE_COUNT 347
#define K_SYSCALL_W1_READ_BIT 348
#define K_SYSCALL_W1_READ_BLOCK 349
#define K_SYSCALL_W1_READ_BYTE 350
#define K_SYSCALL_W1_RESET_BUS 351
#define K_SYSCALL_W1_SEARCH_BUS 352
#define K_SYSCALL_W1_WRITE_BIT 353
#define K_SYSCALL_W1_WRITE_BLOCK 354
#define K_SYSCALL_W1_WRITE_BYTE 355
#define K_SYSCALL_WDT_DISABLE 356
#define K_SYSCALL_WDT_FEED 357
#define K_SYSCALL_WDT_SETUP 358
#define K_SYSCALL_ZEPHYR_FPUTC 359
#define K_SYSCALL_ZEPHYR_FWRITE 360
#define K_SYSCALL_ZEPHYR_READ_STDIN 361
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 362
#define K_SYSCALL_ZSOCK_ACCEPT 363
#define K_SYSCALL_ZSOCK_BIND 364
#define K_SYSCALL_ZSOCK_CLOSE 365
#define K_SYSCALL_ZSOCK_CONNECT 366
#define K_SYSCALL_ZSOCK_FCNTL 367
#define K_SYSCALL_ZSOCK_GETHOSTNAME 368
#define K_SYSCALL_ZSOCK_GETPEERNAME 369
#define K_SYSCALL_ZSOCK_GETSOCKNAME 370
#define K_SYSCALL_ZSOCK_GETSOCKOPT 371
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 372
#define K_SYSCALL_ZSOCK_INET_PTON 373
#define K_SYSCALL_ZSOCK_LISTEN 374
#define K_SYSCALL_ZSOCK_POLL 375
#define K_SYSCALL_ZSOCK_RECVFROM 376
#define K_SYSCALL_ZSOCK_SELECT 377
#define K_SYSCALL_ZSOCK_SENDMSG 378
#define K_SYSCALL_ZSOCK_SENDTO 379
#define K_SYSCALL_ZSOCK_SETSOCKOPT 380
#define K_SYSCALL_ZSOCK_SHUTDOWN 381
#define K_SYSCALL_ZSOCK_SOCKET 382
#define K_SYSCALL_ZSOCK_SOCKETPAIR 383
#define K_SYSCALL_Z_CURRENT_GET 384
#define K_SYSCALL_Z_ERRNO 385
#define K_SYSCALL_Z_LOG_MSG_RUNTIME_VCREATE 386
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 387
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 388
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 389
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 390
#define K_SYSCALL_BAD 391
#define K_SYSCALL_LIMIT 392


#ifndef _ASMLANGUAGE

#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
