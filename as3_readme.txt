2.2 :   
	
	I/O line   PerA   
	PA12       MISO   
    	PA13       MOSI   
    	PA14       SPCK   
    	PA11       NPCS0  
    	
		/* Enable A0 on PA12    */
	*AT91C_PIOA_PER             = AT91C_PIO_PA12;         
	*AT91C_PIOA_OER             = AT91C_PIO_PA12;
	*AT91C_PIOA_CODR            = AT91C_PIO_PA12;

		/* Enable SPCK on PA14  */
		REGS                     PINS
         AT91C_PIOA_ASR             = AT91C_PA14_SPCK;
	 AT91C_PIOA_ODR             = AT91C_PA14_SPCK;
	 AT91C_PIOA_OWER            = AT91C_PA14_SPCK;
	 AT91C_PIOA_MDDR            = AT91C_PA14_SPCK;
	 AT91C_PIOA_PPUDR           = AT91C_PA14_SPCK;
	 AT91C_PIOA_IFDR            = AT91C_PA14_SPCK;
	 AT91C_PIOA_CODR            = AT91C_PA14_SPCK;
	 AT91C_PIOA_IDR             = AT91C_PA14_SPCK;
		/* Enable mosi on PA13  */
	AT91C_PIOA_ASR             = AT91C_PA13_MOSI;
	AT91C_PIOA_ODR             = AT91C_PA13_MOSI;
	AT91C_PIOA_OWER            = AT91C_PA13_MOSI;
	AT91C_PIOA_MDDR            = AT91C_PA13_MOSI;
	AT91C_PIOA_PPUDR           = AT91C_PA13_MOSI;
	AT91C_PIOA_IFDR            = AT91C_PA13_MOSI;
	AT91C_PIOA_CODR            = AT91C_PA13_MOSI;
	AT91C_PIOA_IDR             = AT91C_PA13_MOSI;
		/* Enable npcs0 on PA11  */
	AT91C_PIOA_BSR             = AT91C_PA10_NPCS2;
	AT91C_PIOA_ODR             = AT91C_PA10_NPCS2;
	AT91C_PIOA_OWER            = AT91C_PA10_NPCS2;
	AT91C_PIOA_MDDR            = AT91C_PA10_NPCS2;
	AT91C_PIOA_PPUDR           = AT91C_PA10_NPCS2;
	AT91C_PIOA_IFDR            = AT91C_PA10_NPCS2;
	AT91C_PIOA_CODR            = AT91C_PA10_NPCS2;
	AT91C_PIOA_IDR             = AT91C_PA10_NPCS2;
	
