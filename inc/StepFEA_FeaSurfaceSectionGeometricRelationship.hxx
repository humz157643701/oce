// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_FeaSurfaceSectionGeometricRelationship_HeaderFile
#define _StepFEA_FeaSurfaceSectionGeometricRelationship_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>

#include <Handle_StepElement_SurfaceSection.hxx>
#include <Handle_StepElement_AnalysisItemWithinRepresentation.hxx>
#include <MMgt_TShared.hxx>
class StepElement_SurfaceSection;
class StepElement_AnalysisItemWithinRepresentation;


//! Representation of STEP entity FeaSurfaceSectionGeometricRelationship
class StepFEA_FeaSurfaceSectionGeometricRelationship : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepFEA_FeaSurfaceSectionGeometricRelationship();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(StepElement_SurfaceSection)& aSectionRef, const Handle(StepElement_AnalysisItemWithinRepresentation)& aItem) ;
  
  //! Returns field SectionRef
  Standard_EXPORT   Handle(StepElement_SurfaceSection) SectionRef()  const;
  
  //! Set field SectionRef
  Standard_EXPORT   void SetSectionRef (const Handle(StepElement_SurfaceSection)& SectionRef) ;
  
  //! Returns field Item
  Standard_EXPORT   Handle(StepElement_AnalysisItemWithinRepresentation) Item()  const;
  
  //! Set field Item
  Standard_EXPORT   void SetItem (const Handle(StepElement_AnalysisItemWithinRepresentation)& Item) ;




  DEFINE_STANDARD_RTTI(StepFEA_FeaSurfaceSectionGeometricRelationship)

protected:




private: 


  Handle(StepElement_SurfaceSection) theSectionRef;
  Handle(StepElement_AnalysisItemWithinRepresentation) theItem;


};







#endif // _StepFEA_FeaSurfaceSectionGeometricRelationship_HeaderFile
