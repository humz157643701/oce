// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_Protocol_HeaderFile
#define _IGESDimen_Protocol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESDimen_Protocol.hxx>

#include <IGESData_Protocol.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Interface_Protocol.hxx>
#include <Handle_Standard_Type.hxx>
class Interface_Protocol;
class Standard_Type;


//! Description of Protocol for IGESDimen
class IGESDimen_Protocol : public IGESData_Protocol
{

public:

  
  Standard_EXPORT IGESDimen_Protocol();
  
  //! Gives the count of Resource Protocol. Here, two
  //! (Protocols from IGESGraph and IGESGeom)
  Standard_EXPORT virtual   Standard_Integer NbResources()  const;
  
  //! Returns a Resource, given a rank.
  Standard_EXPORT virtual   Handle(Interface_Protocol) Resource (const Standard_Integer num)  const;
  
  //! Returns a Case Number, specific of each recognized Type
  //! This Case Number is then used in Libraries : the various
  //! Modules attached to this class of Protocol must use them
  //! in accordance (for a given value of TypeNumber, they must
  //! consider the same Type as the Protocol defines)
  Standard_EXPORT virtual   Standard_Integer TypeNumber (const Handle(Standard_Type)& atype)  const;




  DEFINE_STANDARD_RTTI(IGESDimen_Protocol)

protected:




private: 




};







#endif // _IGESDimen_Protocol_HeaderFile
