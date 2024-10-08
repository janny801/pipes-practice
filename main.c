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

        //"pipe(fd)" returns 0 if successful(pipe is created) and -1 if not sucessful(pipe creation failed )

    
    if(pipe(fd)==-1) //error handling 
    { 
        printf("an error occured with opening the pipe\n" ) ;
        return 1;   

    } 

    int id = fork(); 

    //when forking file descriptors get copied over 
        //file descriptors are also assigned to the newly created process "file descriptors get INHERITED"
        //file descriptors independent of each other in each process 

    

    if (id ==0)
    {
        //2 file descriptors are inherited here 
            //we are in the child procss since we forked 

        //
        /*
        1. ask user to input a number 
        2. sends to the parent process (child -> parent process) 
        3. parent process prints it on the screen 
        
        */

    }








    

     
    




    return 0; 
}