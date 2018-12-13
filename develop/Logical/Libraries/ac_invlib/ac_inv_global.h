#ifndef _AC_INV_GLOBAL_H
#define _AC_INV_GLOBAL_H


#include <bur/plctypes.h>
#include <ac_invlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


#define STEP_W_NETWORK					0	
#define STEP_READ_DEVICE_NAME			1
#define STEP_LOG_DEVICE_TYPE			200
#define STEP_W_LOG_DEVICE_TYPE			201
#define STEP_W_FACTORY_RESET_P74		202
#define STEP_W_P74_CONFIG_1				203
#define STEP_W_P74_CONFIG_2				204

#define STEP_W_DISABLE_PCHECK_P76		205
#define STEP_W_FACTORY_RESET_P76		206
#define STEP_W_P76_CONFIG_1				207
#define STEP_W_P76_CONFIG_2				208

#define STEP_W_FACTORY_RESET_P84		3
#define STEP_W_P84_CONFIG_1				4
#define STEP_W_P84_CONFIG_2				5
#define STEP_W_REFERENCE_CHANNEL_SET 	9
#define STEP_W_PARAMETER_LIST_DOWNLOAD	10
#define STEP_CHECK_PARAMETER_LIST		20
#define STEP_W_ENABLE_PCHECK_P76		209
#define STEP_W_PARAMETER_LIST_CHECKED	22
#define STEP_READ_KV					30
#define STEP_READ_TI					31
#define STEP_READ_OUTPUT_FREQUENCY		32
#define STEP_READ_TORQUE_LIMIT_0		33
#define STEP_READ_TORQUE_LIMIT_1		34
#define STEP_READ_CTT					40
#define STEP_READ_RATED_FREQ			41
#define STEP_READ_RATED_SPEED			42
#define STEP_W_READ_RATED_SPEED			43
#define STEP_W_COMMAND					100
#define STEP_P84_WRITE_TUN				300
#define STEP_W_P84_TUNING_DONE			310
#define STEP_P74_START_TUNING			350
#define STEP_P74_TUNING_1				360
#define STEP_P74_TUNING_2				361
#define STEP_P74_TUNING_3				362
#define STEP_P74_TUNING_4				363
#define STEP_P74_TUNING_5				364
#define STEP_P74_TUNING_6				365
#define STEP_P74_TUNING_7				366
#define STEP_P74_TUNING_8				367

#define STEP_INTERNAL_ERROR				9999

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

char * m_ltoa(long value, char *string, int radix);
long m_atol(char*);
/*int strcasecmp( char *s1, char *s2 );*/
int find_parameter( char *name, UINT *index, USINT *subindex, ac_inv_DriveType drive_type );
int find_download_index( char *name,  ac_inv_DriveType drive_type );
char *find_value_constant( char *name, UINT value, ac_inv_DriveType drive_type );
int find_numeric_value( char *name, char *constant, ac_inv_DriveType drive_type );
void read_parameter( ac_inv_AxIdent *ax_ident );
void write_parameter( ac_inv_AxIdent *ax_ident );
void write_parameterlist( ac_inv_AxIdent *ax_ident );
void compare_parameterlist( ac_inv_AxIdent *ax_ident );
void logCOF( ac_inv_AxIdent *ax_ident );
void sort_parameterlist( ac_inv_AxIdent *ax_ident );
void create_parameterlist( ac_inv_AxIdent *ax_ident );
#endif



