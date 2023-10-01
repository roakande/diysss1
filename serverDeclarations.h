
/*----------------------------------------------------
serverDeclarations.h
----------------------------------------------------*/


#ifndef SERVERDEC_H_INCLUDED
#define SERVERDEC_H_INCLUDED


//general
#include <stdio.h>
#include <stdint.h>
#include <string.h>//strncpy
#include <stdlib.h>//getenv()
#include <unistd.h>//sleep()
#include <dirent.h>//for listing file and folders in a folder
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <assert.h>
#include <dirent.h>//for listing file and folders in a folder

//TCP
#include <sys/socket.h>
#include <sys/wait.h>
#include <signal.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <pthread.h>//the next two lines are for threading
#include <semaphore.h>
#include <net/if.h>

#define MAXDATASIZE 1024
#define BACKLOG 10     // how many pending connections queue will hold





void error(const char* msg);
void sigchld_handler(int s);
void *get_in_addr(struct sockaddr *sa);
void dostuff(int sock, char* rootPath);
void doSocket(char* ip_addr, char* port_no, char* rootPath);

char* cRL(char* msgFC, char* pq);
char* eRL(char *msgFC, int ns, char* pq);

char* fLOHR(char* msgFC_lt, char* pq);
char* oLOHR(char** msgFC_lt, char* pq);

char* rDe();
char* rAw();
char* rEy();
char* rSe();
char* rLd();
char* rSs(int st);
char* rCn(int wh);
char* rCe(int wh);
char* rCnn(int mBLen);

char* hD();
char* dS();
char* tE(char* pq);
char* oT(char* pq);
char* pT(char* pq);
char* tT(char* filename, char* pq);
char* dd(char* filename, char* pq);
char* eT(char* path, char* filename);

char* doD();
char* don(char* pq);
char* dod(char* pq);
char* ddd(char* pq);

char* TIME_monthOfTheYear(int mYear);
char* TIME_dayOfTheWeek(int wday);
int TIME_hour(int hr);
char* getSystemTime();

int create_File(char* fileName);
int delete_File(char* fileName);

int get_file_size(char *filePath);
char* read_File_Txt(char* filePath, int fileLen);
int check_File_Exist(char* filePath, char* fileName);

int pfia_init(char* filePath);

void ost();
void oPr();
void doAt();
void doo();
void ofRe();
void uaA();
void occ();
void oct();
void hel();
void cpt();
void ent();
void oAi();
void kfg();
void aHm();
void tEng();
void fMce();




#endif





