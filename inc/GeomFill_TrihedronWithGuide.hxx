// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_TrihedronWithGuide_HeaderFile
#define _GeomFill_TrihedronWithGuide_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_GeomFill_TrihedronWithGuide.hxx>

#include <Handle_Adaptor3d_HCurve.hxx>
#include <gp_Pnt.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <Standard_Real.hxx>
class Adaptor3d_HCurve;
class Standard_OutOfRange;
class Standard_NotImplemented;
class gp_Pnt;


//! To define Trihedron along one Curve with a guide
class GeomFill_TrihedronWithGuide : public GeomFill_TrihedronLaw
{

public:

  
  Standard_EXPORT virtual   Handle(Adaptor3d_HCurve) Guide()  const = 0;
  
  Standard_EXPORT virtual   void Origine (const Standard_Real Param1, const Standard_Real Param2)  = 0;
  
  //! Returns the current point on guide
  //! found by D0, D1 or D2.
  Standard_EXPORT   gp_Pnt CurrentPointOnGuide()  const;




  DEFINE_STANDARD_RTTI(GeomFill_TrihedronWithGuide)

protected:


  Handle(Adaptor3d_HCurve) myGuide;
  Handle(Adaptor3d_HCurve) myTrimG;
  gp_Pnt myCurPointOnGuide;


private: 




};







#endif // _GeomFill_TrihedronWithGuide_HeaderFile
