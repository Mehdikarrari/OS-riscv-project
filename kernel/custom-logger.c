#include "types.h" 
#include "riscv.h" 
#include "custom-logger.h"
#include "defs.h" 
 
void log_message(int level, const char *message) { 
    if(level == 1) {
        printf("INFO-%s",message);
    }
    else if(level == 2) {
        printf("WARNING-%s",message);
    }
    else{
        printf("ERROR-%s",message);
    } 
}  