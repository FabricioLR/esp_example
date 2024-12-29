
#include "esp_rom_uart.h"
#include "esp32/rom/uart.h"

void app_main(void){
    esp_rom_output_tx_one_char('H');
    esp_rom_output_tx_one_char('E');
    esp_rom_output_tx_one_char('L');
    esp_rom_output_tx_one_char('L');
    esp_rom_output_tx_one_char('O');
    esp_rom_output_tx_one_char(' ');

    uart_tx_one_char('W');
    uart_tx_one_char('O');
    uart_tx_one_char('R');
    uart_tx_one_char('L');
    uart_tx_one_char('D');
    uart_tx_one_char(' ');

    uint32_t fifo_addr = UART_FIFO_AHB_REG(0);
    WRITE_PERI_REG(fifo_addr, 'F');
    WRITE_PERI_REG(fifo_addr, 'A');
    WRITE_PERI_REG(fifo_addr, 'B');

    WRITE_PERI_REG(fifo_addr, '\n');
}
