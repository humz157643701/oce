// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_CsgSolid_HeaderFile
#define _StepShape_CsgSolid_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_CsgSolid.hxx>

#include <StepShape_CsgSelect.hxx>
#include <StepShape_SolidModel.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;
class StepShape_CsgSelect;



class StepShape_CsgSolid : public StepShape_SolidModel
{

public:

  
  //! Returns a CsgSolid
  Standard_EXPORT StepShape_CsgSolid();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const StepShape_CsgSelect& aTreeRootExpression) ;
  
  Standard_EXPORT   void SetTreeRootExpression (const StepShape_CsgSelect& aTreeRootExpression) ;
  
  Standard_EXPORT   StepShape_CsgSelect TreeRootExpression()  const;




  DEFINE_STANDARD_RTTI(StepShape_CsgSolid)

protected:




private: 


  StepShape_CsgSelect treeRootExpression;


};







#endif // _StepShape_CsgSolid_HeaderFile
