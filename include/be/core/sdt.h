#ifndef BE_CORE_SDT_H_
#define BE_CORE_SDT_H_

/* simple data types */

#include <stdint.h>


typedef enum {
   be_core_OBJECT,
   be_core_PRIMITIVE,
   be_core_U8,
   be_core_S8,
   be_core_U16,
   be_core_S16,
   be_core_U32,
   be_core_S32,
   be_core_U64,
   be_core_S64,

} be_core_sdt_enum;


typedef uint32_t  be_core_primitive; //abstract type, just for the framework

typedef uint8_t   be_core_u8;
typedef uint16_t  be_core_u16;
typedef uint32_t  be_core_u32;
typedef uint64_t  be_core_u64;

typedef int8_t    be_core_s8;
typedef int16_t   be_core_s16;
typedef int32_t   be_core_s32;

typedef int64_t   be_core_s64;

typedef struct { be_core_u32 val_;} be_core_Context;

typedef struct { be_core_u32 val_;} be_core_Generic;

/* global pointer: 
 * for 32 bit it is register + pointer as well 
 * though the resulting pointer will be 32 bit
 * */
typedef struct {
   be_core_Context context_;
   be_core_s32 pointer_;
} be_core_gp; //global pointer

/* TODO ... define for other basic types */


/* macros to retrieve the type ID based on the type ... used in other macros */


#define BE_CORE_SDT_TYPE_ID_be_core_u8 be_core_U8;
#define BE_CORE_SDT_TYPE_ID_be_core_s8 be_core_S8;
#define BE_CORE_SDT_TYPE_ID_be_core_u16 be_core_U16;
#define BE_CORE_SDT_TYPE_ID_be_core_s16 be_core_S16;
#define BE_CORE_SDT_TYPE_ID_be_core_u32 be_core_U32;
#define BE_CORE_SDT_TYPE_ID_be_core_s32 be_core_S32;
#define BE_CORE_SDT_TYPE_ID_be_core_u64 be_core_U64;
#define BE_CORE_SDT_TYPE_ID_be_core_s64 be_core_S64;




#endif //_BE_CORE_SDT_H_

