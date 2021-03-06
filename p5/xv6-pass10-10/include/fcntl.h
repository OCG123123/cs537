#ifndef _FCNTL_H_
#define _FCNTL_H_

// File control options for use with open

#define O_RDONLY  0x000
#define O_WRONLY  0x001
#define O_RDWR    0x002
#define O_CREATE  0x200
//O_CREATE 	0x200 = 0010 0000 0000
#define O_CHECKED 0x400
//O_CHECKED	0x400 = 0100 0000 0000

#endif //_FCNTL_H_
