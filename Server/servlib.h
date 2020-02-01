#ifndef HEADER_FILE
#define HEADER_FILE

#include <signal.h>

char* getIP();
void signalHandler(int);
char* getVersion();
void printManual();
void createLogfile(char*);
void setTimeStartListen();
void daemonize();
char* messageOfError(int);
char* successServing(char*);
void showMessage(char*);

#endif
