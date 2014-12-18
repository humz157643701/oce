// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppDef_SmoothCriterion_HeaderFile
#define _AppDef_SmoothCriterion_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_AppDef_SmoothCriterion.hxx>

#include <MMgt_TShared.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_FEmTool_Curve.hxx>
#include <Standard_Real.hxx>
#include <Handle_FEmTool_HAssemblyTable.hxx>
#include <Handle_TColStd_HArray2OfInteger.hxx>
#include <Standard_Integer.hxx>
#include <math_Vector.hxx>
class Standard_NotImplemented;
class Standard_DomainError;
class TColStd_HArray1OfReal;
class FEmTool_Curve;
class FEmTool_HAssemblyTable;
class TColStd_HArray2OfInteger;
class math_Matrix;
class TColStd_Array1OfReal;


//! defined criterion to smooth  points in  curve
class AppDef_SmoothCriterion : public MMgt_TShared
{

public:

  
  Standard_EXPORT virtual   void SetParameters (const Handle(TColStd_HArray1OfReal)& Parameters)  = 0;
  
  Standard_EXPORT virtual   void SetCurve (const Handle(FEmTool_Curve)& C)  = 0;
  
  Standard_EXPORT virtual   void GetCurve (Handle(FEmTool_Curve)& C)  const = 0;
  
  Standard_EXPORT virtual   void SetEstimation (const Standard_Real E1, const Standard_Real E2, const Standard_Real E3)  = 0;
  
  Standard_EXPORT virtual   Standard_Real& EstLength()  = 0;
  
  Standard_EXPORT virtual   void GetEstimation (Standard_Real& E1, Standard_Real& E2, Standard_Real& E3)  const = 0;
  
  Standard_EXPORT virtual   Handle(FEmTool_HAssemblyTable) AssemblyTable()  const = 0;
  
  Standard_EXPORT virtual   Handle(TColStd_HArray2OfInteger) DependenceTable()  const = 0;
  
  Standard_EXPORT virtual   Standard_Integer QualityValues (const Standard_Real J1min, const Standard_Real J2min, const Standard_Real J3min, Standard_Real& J1, Standard_Real& J2, Standard_Real& J3)  = 0;
  
  Standard_EXPORT virtual   void ErrorValues (Standard_Real& MaxError, Standard_Real& QuadraticError, Standard_Real& AverageError)  = 0;
  
  Standard_EXPORT virtual   void Hessian (const Standard_Integer Element, const Standard_Integer Dimension1, const Standard_Integer Dimension2, math_Matrix& H)  = 0;
  
  Standard_EXPORT virtual   void Gradient (const Standard_Integer Element, const Standard_Integer Dimension, math_Vector& G)  = 0;
  
  //! Convert the assembly Vector in an Curve;
  Standard_EXPORT virtual   void InputVector (const math_Vector& X, const Handle(FEmTool_HAssemblyTable)& AssTable)  = 0;
  
  Standard_EXPORT virtual   void SetWeight (const Standard_Real QuadraticWeight, const Standard_Real QualityWeight, const Standard_Real percentJ1, const Standard_Real percentJ2, const Standard_Real percentJ3)  = 0;
  
  Standard_EXPORT virtual   void GetWeight (Standard_Real& QuadraticWeight, Standard_Real& QualityWeight)  const = 0;
  
  Standard_EXPORT virtual   void SetWeight (const TColStd_Array1OfReal& Weight)  = 0;




  DEFINE_STANDARD_RTTI(AppDef_SmoothCriterion)

protected:




private: 




};







#endif // _AppDef_SmoothCriterion_HeaderFile
