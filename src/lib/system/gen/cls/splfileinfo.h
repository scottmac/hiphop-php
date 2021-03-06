/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __GENERATED_cls_splfileinfo_h__
#define __GENERATED_cls_splfileinfo_h__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/splfile.php line 3 */
class c_splfileinfo : virtual public ObjectData {
  BEGIN_CLASS_MAP(splfileinfo)
  END_CLASS_MAP(splfileinfo)
  DECLARE_CLASS(splfileinfo, SplFileInfo, ObjectData)
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: void t___construct(Variant v_file_name);
  public: ObjectData *create(Variant v_file_name);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: String t_getpath();
  public: String t_getfilename();
  public: Object t_getfileinfo(CStrRef v_class_name = "");
  public: String t_getbasename(CStrRef v_suffix = "");
  public: String t_getpathname();
  public: Object t_getpathinfo(CStrRef v_class_name = "");
  public: int64 t_getperms();
  public: int64 t_getinode();
  public: int64 t_getsize();
  public: int64 t_getowner();
  public: int64 t_getgroup();
  public: int64 t_getatime();
  public: int64 t_getmtime();
  public: int64 t_getctime();
  public: String t_gettype();
  public: bool t_iswritable();
  public: bool t_isreadable();
  public: bool t_isexecutable();
  public: bool t_isfile();
  public: bool t_isdir();
  public: bool t_islink();
  public: String t_getlinktarget();
  public: Variant t_getrealpath();
  public: String t___tostring();
  public: Object t_openfile(CStrRef v_mode = "r", bool v_use_include_path = false, CVarRef v_context = null_variant);
  public: Variant t_setfileclass(CStrRef v_class_name = "SplFileObject");
  public: Variant t_setinfoclass(CStrRef v_class_name = "SplFileInfo");
  public: Variant m_rsrc;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_splfileinfo_h__
