#include "globals.h"
#include <string.h>
#include <errno.h>
#include <applibs/log.h>

void RegisterTerminationHandler();
void TerminationHandler(int signalNumber);
int StartTimer(Timer* timer, int epollFd);
int OpenPeripheral(Peripheral* peripheral);
