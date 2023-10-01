

/*----------------------------------------------------
   diysss1_lx_lib_user.c

   > Thanks Jesus
   
   > this is the server that runs the server-side-script
   > this gets HTML commands from browsers
   > start this (since its a server) before you start client, which is the browser
   
   > to get the IP of the device that runs the server, type: hostname -I
   > copy and paste that IP address at char *ip_addr
   > you can use any port number you want within 2010 to 5050 or more
   > the path of your html files must well define as shown in the readme.txt
   > ensure that all the devices that want to run this server-side-script must
   	 connect to the same wifi as the one the device running the server is connected to 
   > you should always change the port_no from time to time
   
   > on any of devices connected to the server, open a browser and type, for example
   	 192.168.1.100:2050/default.html
   	 and press enter
   	
   > follow the steps below to run the sever

   //first creat an object file diysss1_lx_lib_user.o for diysss1_lx_lib_user.c
   > gcc -I . -c diysss1_lx_lib_user.c

   //link diysss1_lx_lib_user.o with libDiysss1.a to create the final executable file
   > gcc -static -o diysss1_lx_lib_user diysss1_lx_lib_user.o libdiysss1.a
   
   //now run
   > ./diysss1_lx_lib_user

  ----------------------------------------------------*/


#include "serverDeclarations.h"



int main()
{
	char* port_no = "2050";
	char* ip_addr = "192.168.1.100";
	char* htmlRootPath = "/home/wole/Documents/codes/GitHub/froGitHub/diysss1-main/htmls";//or wherever the .html files are
	
	doSocket(ip_addr, port_no, htmlRootPath);
	
	return 0;

}





