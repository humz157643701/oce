// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_ExtStringList_HeaderFile
#define _PDataStd_ExtStringList_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PDataStd_ExtStringList.hxx>

#include <Handle_PCollection_HExtendedString.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PColStd_HArray1OfExtendedString.hxx>
#include <PDF_Attribute.hxx>
class PCollection_HExtendedString;
class PColStd_HArray1OfExtendedString;


class PDataStd_ExtStringList : public PDF_Attribute
{

public:

  
  Standard_EXPORT PDataStd_ExtStringList();
  
  Standard_EXPORT   void Init (const Standard_Integer lower, const Standard_Integer upper) ;
  
  Standard_EXPORT   void SetValue (const Standard_Integer index, const Handle(PCollection_HExtendedString)& value) ;
  
  Standard_EXPORT   Handle(PCollection_HExtendedString) Value (const Standard_Integer index)  const;
  
  Standard_EXPORT   Standard_Integer Lower()  const;
  
  Standard_EXPORT   Standard_Integer Upper()  const;

PDataStd_ExtStringList(const Storage_stCONSTclCOM& a) : PDF_Attribute(a)
{
  
}
    Handle(PColStd_HArray1OfExtendedString) _CSFDB_GetPDataStd_ExtStringListmyValue() const { return myValue; }
    void _CSFDB_SetPDataStd_ExtStringListmyValue(const Handle(PColStd_HArray1OfExtendedString)& p) { myValue = p; }



  DEFINE_STANDARD_RTTI(PDataStd_ExtStringList)

protected:




private: 


  Handle(PColStd_HArray1OfExtendedString) myValue;


};







#endif // _PDataStd_ExtStringList_HeaderFile
