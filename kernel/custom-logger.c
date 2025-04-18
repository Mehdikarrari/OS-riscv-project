#include "types.h" 
#include "riscv.h" 
#include "custom-logger.h"
#include "defs.h" 
 
void log_message(int level, const char *message) { 
    if(level == 3) {
        printf("INFO-%s\n",message);
    }
    else if(level == 2) {
        printf("WARNING-%s\n",message);
    }
    else{
        printf("ERROR-%s\n",message);
    } 
}  