/*
 * Drone_Epoll.h
 *
 * @date 2015/10/08
 * @author Leejewoo
 * @email nowwoo91@gmail.com
 *
 * 패킷을 받는 방법에 대한 방법론중, epoll에 관련된 함수의 선언
 */

#include "TCP_Server.h"
#include "UCP_Server.h"
//#include "Ctl.h"
//#include "Protocol.h"

/*  UDP socket PORT number define */
#define __UDP_PORT__ 8004
/*  TCP socket PORT number define */
#define __TCP_PORT__ 8003        //

//#define __EPOLL__  0
//#define __POLLING__  1

//socket create and setting
int network_init();

int network_read(int socket,float* x,float* y,float* z,int* t);

void network_write(int socket,float x,float y,float z,int t);

//happening abnomal event, connection weak or network exit also network exit
int network_exit(int tcp,int udp);

//abnormal status handling function
int network_error();