// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBC_VArrayNodeOfVArrayOfExtCharacter_HeaderFile
#define _DBC_VArrayNodeOfVArrayOfExtCharacter_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_DBC_VArrayNodeOfVArrayOfExtCharacter.hxx>

#include <Standard_Address.hxx>
#include <Standard_ExtCharacter.hxx>
#include <PStandard_ArrayNode.hxx>
class DBC_VArrayOfExtCharacter;
class DBC_VArrayTNodeOfVArrayOfExtCharacter;


class DBC_VArrayNodeOfVArrayOfExtCharacter : public PStandard_ArrayNode
{

public:

  
  Standard_EXPORT DBC_VArrayNodeOfVArrayOfExtCharacter();
  
  Standard_EXPORT DBC_VArrayNodeOfVArrayOfExtCharacter(const Standard_ExtCharacter& aValue);
  
  Standard_EXPORT   void SetValue (const Standard_ExtCharacter& aValue) ;
  
  Standard_EXPORT   Standard_Address Value()  const;

DBC_VArrayNodeOfVArrayOfExtCharacter(const Storage_stCONSTclCOM& a) : PStandard_ArrayNode(a)
{
  
}
    Standard_ExtCharacter _CSFDB_GetDBC_VArrayNodeOfVArrayOfExtCharactermyValue() const { return myValue; }
    void _CSFDB_SetDBC_VArrayNodeOfVArrayOfExtCharactermyValue(const Standard_ExtCharacter p) { myValue = p; }



  DEFINE_STANDARD_RTTI(DBC_VArrayNodeOfVArrayOfExtCharacter)

protected:




private: 


  Standard_ExtCharacter myValue;


};







#endif // _DBC_VArrayNodeOfVArrayOfExtCharacter_HeaderFile
