#ifndef __SERVER_H
#define __SERVER_H

#define PORT 6666

#include "crypto.h"

#ifdef __cplusplus
extern "C"
{
#endif





#ifdef __cplusplus
}
#endif



class SERVER {
	public:
		SERVER ();
		~SERVER ();
		void Start();
	private:
                CRYPTO cryptinfo;
};

void client_Communication (SERVER *server_p, int sockfd);


#endif
