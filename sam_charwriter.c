#include <unistd.h>
#include "main.h"

/* single character printing  function */

int sam_charwriter(char c)
{
    write(1, &c, 1);
    return 1;
}
