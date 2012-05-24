#define interface_number 0x01 //Real-Mode-Schnittstelle
#define power_state 0x03      //Power off
.global shutdown //Die "Funktion"
shutdown:
pusha
mov $0x53,%ah            //Das APM-Komando
mov $0x00,%al            //Versionsanzeigebefehl
xor %bx,%bx              //Geräte-ID (0 = APM BIOS)
int $0x15               //Die BIOS-Funktion über Interrupt 15h aufrufen
jc APM_error          //Wenn das Carry-Flag gesetzt wurde, gab es einen Fehler (APM_error ist eigenes Label)

mov $0x53,%ah               //dies ist das APM-Kommando
mov $0x04,%al               //Trennbefehl
xor %bx,%bx                 //Geräte-ID (0 = APM BIOS)
int $0x15                   //Die BIOS-Funktion über Interrupt 15h aufrufen
jc .disconnect_error        //Wenn das Carry-Flag gesetzt wird, kontrollieren, was für ein Fehler auftrat
jmp .no_error

.disconnect_error:       //Der Fehlercode ist in AH.
cmp $0x03,%ah               //Wenn der Fehlercode nicht 03h ist, gab es einen Fehler
jne APM_error            //Der Fehlercode 03h bedeutet, dass keine Schnittstelle vebunden war. (APM_error ist eigenes Label)

.no_error:

//Verbinden zu einer APM-Schnittstelle
mov $0x53,%ah               //Dies ist das APM-Kommando
mov (interface_number),%al //Siehe oben
xor %bx,%bx                //Geräte-ID (0 = APM BIOS)
int $0x15                  //
jc APM_error             //Wenn das Carry-Flag gesetzt wurde, gab es einen Fehler

//Power Management für alle Geräte aktivieren
mov $0x53,%ah              //Dies ist das APM-Kommando
mov $0x08,%al              //Den Status des Power Managements wechseln...
mov $0x0001,%bx            //...bei allen Geräten zu...
mov $0x0001,%cx            //...Power Management an.
int $0x15                 //Die BIOS-Funktion über Interrupt 15h aufrufen
jc APM_error            //Wenn das Carry-Flag gesetzt wurde, gab es einen Fehler

mov $0x53,%ah              //Dies ist das APM-Kommando
mov $0x07,%al              //Setze den Status...
mov $0x0001,%bx            //...aller Geräte...
mov (power_state),%cx     //...zu (siehe oben)
int $0x15                 //Die BIOS-Funktion über Interrupt 15h aufrufen
jc APM_error            //Wenn das Carry-Flag gesetzt wurde gab es einen Fehler
                        //Keine Rückgabe


APM_error:
popa
ret

