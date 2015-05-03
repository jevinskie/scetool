/*
* Copyright (c) 2011-2013 by naehrwert
* This file is released under the GPLv2.
*/


#ifndef _FRONTEND_H_
#define _FRONTEND_H_

int frontend_print_infos_custom(s8 *file);
int frontend_print_infos(s8 *file);
int frontend_decrypt(s8 *file_in, s8 *file_out);
int frontend_encrypt(s8 *file_in, s8 *file_out);

#endif
