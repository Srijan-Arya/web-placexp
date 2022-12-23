#include <stdio.h>
#include <netinet/in.h>
#include <sys/socket.h>
int main(){
	int sd, sd2, nsd, client, sport, len, port, clilen;
	
	sd = socket(AF_INET, SOCK_STREAM,0);
	
	if(sd<0)
		printf("cant create\n");
	else
		printf("Socket created\n");
	
	
struct sockaddr_in servaddr, cliaddr;
servaddr.sin_family=AF_INET;
servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
servaddr.sin_port=htons(sport);

sd2 = bind(sd, (struct sockaddr*) &servaddr, sizeof(servaddr));

if(sd2<0)
	printf("cant bind\n");
	
else
	printf("binded\n");

listen(sd,7);
sport = 5500;
clilen = sizeof(cliaddr);
nsd = accept(sd, (struct sockaddr*)&cliaddr, &clilen);
	if(nsd<0)
		printf("cant accept");
	else
		printf("Accepted");
}









