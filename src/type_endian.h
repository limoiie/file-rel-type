//
// Created by ligen on 11/20/2020.
//

#ifndef FILE_REL_TYPE_SRC_TYPE_ENDIAN_H_
#define FILE_REL_TYPE_SRC_TYPE_ENDIAN_H_

#include "val_typ.h"

val_endian_t endian_of_typ(val_typ_t typ);

val_typ_t erase_endian(val_typ_t typ);

#endif //FILE_REL_TYPE_SRC_TYPE_ENDIAN_H_
