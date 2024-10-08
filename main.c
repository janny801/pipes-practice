#include <stdio.h> //standard input/ output like printf
#include <unistd.h> //pipe(), fork(), close() sys calls
#include <stdlib.h> //exit() function 
#include <sys/types.h> //pid_t data type
#include <sys/wait.h> //wait() to handle child processes 


int main(int argc, char* argv[])
{
    //pipe - in memory file 
        //file that only has a buffer saved in memory ~ and you can read and write from it 


    int fd[2]; //fd array holds file descriptors for the pipe 
                //when calling pipe(fd) ~system creates a pipe and assigns two file descriptors 

                //fd[0] = read end of the pipe 
                //fd[1] = write end of the pipe 



    //"pipe(fd)" initializes the array fd with two integers (representing both the read and write end of the pipe) 

        //"pipe(fd)" returns 0 if successful and -1 if not successful 
    
    if(pipe(fd)==-1) //error handling 
    { 
        printf("an error occured with opening the pipe\n" ) ;
        return 1;   

    } 




    

     
    




    return 0; 
}