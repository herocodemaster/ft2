/***************************************************************************/
/*                                                                         */
/*  gxvmod.h                                                               */
/*                                                                         */
/*    FreeType's TrueTypeGX/AAT validation module implementation           */
/*    (specification).                                                     */
/*                                                                         */
/*  Copyright 2004, 2005 by suzuki toshiya, Masatake YAMATO, Red Hat K.K., */
/*  David Turner, Robert Wilhelm, and Werner Lemberg.                      */
/*                                                                         */
/*  This file is part of the FreeType project, and may only be used,       */
/*  modified, and distributed under the terms of the FreeType project      */
/*  license, LICENSE.TXT.  By continuing to use, modify, or distribute     */
/*  this file you indicate that you have read the license and              */
/*  understand and accept it fully.                                        */
/*                                                                         */
/***************************************************************************/

/***************************************************************************/
/* gxvalid is derived from both gxlayout module and otvalid module.        */
/* Development of gxlayout was support of Information-technology Promotion */
/* Agency(IPA), Japan.                                                     */
/***************************************************************************/


#ifndef __GXVMOD_H__
#define __GXVMOD_H__


#include <ft2build.h>
#include FT_MODULE_H


FT_BEGIN_HEADER


  FT_EXPORT_VAR( const FT_Module_Class )  gxv_module_class;


FT_END_HEADER

#endif /* Not def: __GXVMOD_H__ */


/* END */