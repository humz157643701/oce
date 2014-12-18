// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApprox_SimpleApprox_HeaderFile
#define _AdvApprox_SimpleApprox_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Handle_PLib_JacobiPolynomial.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TColStd_HArray2OfReal.hxx>
#include <Standard_Address.hxx>
#include <Standard_Boolean.hxx>
#include <GeomAbs_Shape.hxx>
#include <AdvApprox_EvaluatorFunction.hxx>
#include <Standard_Real.hxx>
#include <Standard_OStream.hxx>
class PLib_JacobiPolynomial;
class TColStd_HArray1OfReal;
class TColStd_HArray2OfReal;
class Standard_OutOfRange;
class Standard_ConstructionError;
class TColStd_Array1OfInteger;
class TColStd_Array1OfReal;


//! Approximate  a function on   an intervall [First,Last]
//! The result  is  a simple  polynomial  whose  degree is  as low as
//! possible  to   satisfy  the required  tolerance  and  the
//! maximum degree.  The maximum  error and the averrage error
//! resulting from  approximating the function by the polynomial are computed
class AdvApprox_SimpleApprox 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AdvApprox_SimpleApprox(const Standard_Integer TotalDimension, const Standard_Integer TotalNumSS, const GeomAbs_Shape Continuity, const Standard_Integer WorkDegree, const Standard_Integer NbGaussPoints, const Handle(PLib_JacobiPolynomial)& JacobiBase, const AdvApprox_EvaluatorFunction& Func);
  
  //! Constructs approximator tool.
  //!
  //! Warning:
  //! the Func should be valid reference to object of type
  //! inherited from class EvaluatorFunction from Approx
  //! with life time longer than that of the approximator tool;
  Standard_EXPORT   void Perform (const TColStd_Array1OfInteger& LocalDimension, const TColStd_Array1OfReal& LocalTolerancesArray, const Standard_Real First, const Standard_Real Last, const Standard_Integer MaxDegree) ;
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Integer Degree()  const;
  
  //! returns the coefficients in the Jacobi Base
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) Coefficients()  const;
  
  //! returns the constraints at First
  Standard_EXPORT   Handle(TColStd_HArray2OfReal) FirstConstr()  const;
  
  //! returns the constraints at Last
  Standard_EXPORT   Handle(TColStd_HArray2OfReal) LastConstr()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) SomTab()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) DifTab()  const;
  
  Standard_EXPORT   Standard_Real MaxError (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Standard_Real AverageError (const Standard_Integer Index)  const;
  
  //! display information on approximation
  Standard_EXPORT   void Dump (Standard_OStream& o)  const;




protected:





private:



  Standard_Integer myTotalNumSS;
  Standard_Integer myTotalDimension;
  Standard_Integer myNbGaussPoints;
  Standard_Integer myWorkDegree;
  Standard_Integer myNivConstr;
  Handle(PLib_JacobiPolynomial) myJacPol;
  Handle(TColStd_HArray1OfReal) myTabPoints;
  Handle(TColStd_HArray2OfReal) myTabWeights;
  Standard_Address myEvaluator;
  Standard_Integer myDegree;
  Handle(TColStd_HArray1OfReal) myCoeff;
  Handle(TColStd_HArray2OfReal) myFirstConstr;
  Handle(TColStd_HArray2OfReal) myLastConstr;
  Handle(TColStd_HArray1OfReal) mySomTab;
  Handle(TColStd_HArray1OfReal) myDifTab;
  Handle(TColStd_HArray1OfReal) myMaxError;
  Handle(TColStd_HArray1OfReal) myAverageError;
  Standard_Boolean done;


};







#endif // _AdvApprox_SimpleApprox_HeaderFile
