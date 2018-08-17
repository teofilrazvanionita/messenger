#ifndef __SERVER_H
#define __SERVER_H

#define PORT 6666


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

};

void client_Communication (SERVER *server_p, int sockfd);


#endif
