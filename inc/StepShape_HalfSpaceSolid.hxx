// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_HalfSpaceSolid_HeaderFile
#define _StepShape_HalfSpaceSolid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_HalfSpaceSolid.hxx>

#include <Handle_StepGeom_Surface.hxx>
#include <Standard_Boolean.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Surface;
class TCollection_HAsciiString;



class StepShape_HalfSpaceSolid : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a HalfSpaceSolid
  Standard_EXPORT StepShape_HalfSpaceSolid();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Surface)& aBaseSurface, const Standard_Boolean aAgreementFlag) ;
  
  Standard_EXPORT   void SetBaseSurface (const Handle(StepGeom_Surface)& aBaseSurface) ;
  
  Standard_EXPORT   Handle(StepGeom_Surface) BaseSurface()  const;
  
  Standard_EXPORT   void SetAgreementFlag (const Standard_Boolean aAgreementFlag) ;
  
  Standard_EXPORT   Standard_Boolean AgreementFlag()  const;




  DEFINE_STANDARD_RTTI(StepShape_HalfSpaceSolid)

protected:




private: 


  Handle(StepGeom_Surface) baseSurface;
  Standard_Boolean agreementFlag;


};







#endif // _StepShape_HalfSpaceSolid_HeaderFile
