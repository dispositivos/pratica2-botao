/*
 * File:   main.c
 * Author: edno
 *
 * Created on 12 de Fevereiro de 2016, 09:47
 */


#include <xc.h>
#include <p18f2550.h>
#include "configuration.h" // Inclui as configurações do pic

#define _XTAL_FREQ 20e+6

#define BTN RB5 // Define pino 5 como entrada para botao
#define LED LATB1 // LED é uma saída

void main(void) {

    PORTB = 0x00; // inicializa a porta B com saída em zero
    TRISBbits.TRISB1 = 0; // define LED como saída

    // loop infinito
    while(1){
        if(BTN == 0) { // se o botao for pressionado
            LED = 1; // liga o led
            while(!BTN); // aguarda botao se liberado
            LED = 0; // desliga o led
        }
    }
    
    return;
}
