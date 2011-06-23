//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'goil_app_generation.h'                        *
//                        Generated by version 1.9.7                         *
//                     december 17th, 2009, at 9h55'41"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_app_generation_DEFINED
#define goil_app_generation_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_routines.h"
#include "goil_semantic_types.h"
#include "goil_types_app.h"
#include "goil_types_counter.h"
#include "goil_types_isr.h"
#include "goil_types_resource.h"
#include "goil_types_scheduletable.h"
#include "goil_types_task.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                        Routine 'generate_vector'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_vector (C_Compiler &,
                                GGS_string ,
                                GGS_string &,
                                GGS_uint  & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                         Routine 'generate_apps'                           *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_apps (C_Compiler &,
                                GGS_app_map  ,
                                GGS_task_map  ,
                                GGS_isr_map  ,
                                GGS_alarm_map  ,
                                GGS_resource_map  ,
                                GGS_scheduletable_map  ,
                                GGS_counter_map  ,
                                GGS_string &,
                                GGS_string &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                   Routine 'generate_trusted_functions'                    *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_trusted_functions (C_Compiler &,
                                GGS_app_map  ,
                                GGS_string &,
                                GGS_string &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif