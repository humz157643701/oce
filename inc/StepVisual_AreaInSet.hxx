// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_AreaInSet_HeaderFile
#define _StepVisual_AreaInSet_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_AreaInSet.hxx>

#include <Handle_StepVisual_PresentationArea.hxx>
#include <Handle_StepVisual_PresentationSet.hxx>
#include <MMgt_TShared.hxx>
class StepVisual_PresentationArea;
class StepVisual_PresentationSet;



class StepVisual_AreaInSet : public MMgt_TShared
{

public:

  
  //! Returns a AreaInSet
  Standard_EXPORT StepVisual_AreaInSet();
  
  Standard_EXPORT virtual   void Init (const Handle(StepVisual_PresentationArea)& aArea, const Handle(StepVisual_PresentationSet)& aInSet) ;
  
  Standard_EXPORT   void SetArea (const Handle(StepVisual_PresentationArea)& aArea) ;
  
  Standard_EXPORT   Handle(StepVisual_PresentationArea) Area()  const;
  
  Standard_EXPORT   void SetInSet (const Handle(StepVisual_PresentationSet)& aInSet) ;
  
  Standard_EXPORT   Handle(StepVisual_PresentationSet) InSet()  const;




  DEFINE_STANDARD_RTTI(StepVisual_AreaInSet)

protected:




private: 


  Handle(StepVisual_PresentationArea) area;
  Handle(StepVisual_PresentationSet) inSet;


};







#endif // _StepVisual_AreaInSet_HeaderFile
