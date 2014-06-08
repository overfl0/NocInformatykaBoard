Noc Informatyka Board
=====================

In this repository you'll find all the files related to the identifier given to every attendee of the Noc Informatyka^8 conference. You can find *[details]* here *(Polish)*.

This identifier was also a fully compatible Digispark clone.

Directories
===========

Schematics
----------

This directory holds the *[Eagle]* files used to create and produce the PCB for the identifier. The Eagle version that was used was 6.5.


Firmware
--------

This directory holds the micronucleus bootloader firmware that allows the badge to communicate with a PC and to upload sketches (programs) over the USB connector present on the board.

To upload a new firmware you either need to use an external HVSP programmer or use the virus-like firmware upgrade method.

#### Upload using an external HVSP programmer

Bear in mind that the microcontroller has its reset pin disabled. What this means is that regular ISP programmers (like USBasp) will not be able to program the board unless you reset the fuses with a HVSP programmer or something like *[Attiny fusebit Doctor]*.

```
make
make fuse
make flash
make disablereset
```

#### Upload using the virus-like method

This method has not been tested by us. **Use at your own risk!** See *upgrade* directory for details.

NocInformatyka2014
------------------

This directory holds the sketch preloaded on the badge. If for some reason you would like to revert to the original program, just upload this sketch to the board.


[eagle]:http://www.cadsoftusa.com/eagle-pcb-design-software/product-overview/?language=en
[attiny fusebit doctor]:http://www.instructables.com/id/AVR-Attiny-fusebit-doctor-HVSP/
[details]:http://nocinformatyka.pl/board/
