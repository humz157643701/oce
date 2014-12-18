// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Blend_CurvPointFuncInv_HeaderFile
#define _Blend_CurvPointFuncInv_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <math_FunctionSetWithDerivatives.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <math_Vector.hxx>
#include <Standard_Real.hxx>
class math_Matrix;
class gp_Pnt;


//! Deferred   class  for a  function  used  to compute  a
//! blending surface between a  surface and a curve, using
//! a  guide  line.   This   function is  used  to find  a
//! solution on a done point of the curve.
//! The vector <X>  used in Value, Values and  Derivatives
//! methods  has  to   be the  vector   of the  parametric
//! coordinates w, U,  V where w is  the parameter  on the
//! guide line, U,V   are the parametric coordinates of  a
//! point on the partner surface.
class Blend_CurvPointFuncInv  : public math_FunctionSetWithDerivatives
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns 3.
  Standard_EXPORT   Standard_Integer NbVariables()  const;
  
  //! returns the number of equations of the function.
  Standard_EXPORT virtual   Standard_Integer NbEquations()  const = 0;
  
  //! computes the values <F> of the Functions for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Value (const math_Vector& X, math_Vector& F)  = 0;
  
  //! returns the values <D> of the derivatives for the
  //! variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Derivatives (const math_Vector& X, math_Matrix& D)  = 0;
  
  //! returns the values <F> of the functions and the derivatives
  //! <D> for the variable <X>.
  //! Returns True if the computation was done successfully,
  //! False otherwise.
  Standard_EXPORT virtual   Standard_Boolean Values (const math_Vector& X, math_Vector& F, math_Matrix& D)  = 0;
  
  //! Set the Point on which a solution has to be found.
  Standard_EXPORT virtual   void Set (const gp_Pnt& P)  = 0;
  
  //! Returns in the vector Tolerance the parametric tolerance
  //! for each of the 3 variables;
  //! Tol is the tolerance used in 3d space.
  Standard_EXPORT virtual   void GetTolerance (math_Vector& Tolerance, const Standard_Real Tol)  const = 0;
  
  //! Returns in the vector InfBound the lowest values allowed
  //! for each of the 3 variables.
  //! Returns in the vector SupBound the greatest values allowed
  //! for each of the 3 variables.
  Standard_EXPORT virtual   void GetBounds (math_Vector& InfBound, math_Vector& SupBound)  const = 0;
  
  //! Returns Standard_True if Sol is a zero of the function.
  //! Tol is the tolerance used in 3d space.
  Standard_EXPORT virtual   Standard_Boolean IsSolution (const math_Vector& Sol, const Standard_Real Tol)  = 0;




protected:





private:





};







#endif // _Blend_CurvPointFuncInv_HeaderFile
