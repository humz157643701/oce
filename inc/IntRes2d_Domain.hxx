// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntRes2d_Domain_HeaderFile
#define _IntRes2d_Domain_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Real.hxx>
#include <gp_Pnt2d.hxx>
#include <Standard_Boolean.hxx>
class Standard_DomainError;
class gp_Pnt2d;


//! Definition of the domain of parameter on a 2d-curve.
//! Most of the time, a domain is defined by two extremities.
//! An extremity is made of :
//! - a point in 2d-space (Pnt2d from gp),
//! - a parameter on the curve,
//! - a tolerance in the 2d-space.
//! Sometimes, it can be made of 0 or 1 point ( for an infinite
//! or semi-infinite line for example).
//!
//! For Intersection algorithms, Ellipses and Circles
//! Domains must be closed.
//! So, SetEquivalentParameters(.,.) method must be called
//! after initializing the first and the last bounds.
class IntRes2d_Domain 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Creates an infinite Domain (HasFirstPoint = False
  //! and HasLastPoint = False).
  Standard_EXPORT IntRes2d_Domain();
  
  //! Creates a bounded Domain.
  Standard_EXPORT IntRes2d_Domain(const gp_Pnt2d& Pnt1, const Standard_Real Par1, const Standard_Real Tol1, const gp_Pnt2d& Pnt2, const Standard_Real Par2, const Standard_Real Tol2);
  
  //! Creates a semi-infinite Domain. If First is set to
  //! True, the given point is the first point of the domain,
  //! otherwise it is the last point.
  Standard_EXPORT IntRes2d_Domain(const gp_Pnt2d& Pnt, const Standard_Real Par, const Standard_Real Tol, const Standard_Boolean First);
  
  //! Sets the values for a bounded domain.
  Standard_EXPORT   void SetValues (const gp_Pnt2d& Pnt1, const Standard_Real Par1, const Standard_Real Tol1, const gp_Pnt2d& Pnt2, const Standard_Real Par2, const Standard_Real Tol2) ;
  
  //! Sets the values for an infinite domain.
  Standard_EXPORT   void SetValues() ;
  
  //! Sets the values for a semi-infinite domain.
  Standard_EXPORT   void SetValues (const gp_Pnt2d& Pnt, const Standard_Real Par, const Standard_Real Tol, const Standard_Boolean First) ;
  
  //! Defines a closed domain.
      void SetEquivalentParameters (const Standard_Real zero, const Standard_Real period) ;
  
  //! Returns True if the domain has a first point, i-e
  //! a point defining the lowest admitted parameter on the
  //! curve.
      Standard_Boolean HasFirstPoint()  const;
  
  //! Returns the parameter of the first point of the domain
  //! The exception DomainError is raised if HasFirstPoint
  //! returns False.
      Standard_Real FirstParameter()  const;
  
  //! Returns the first point of the domain.
  //! The exception DomainError is raised if HasFirstPoint
  //! returns False.
     const  gp_Pnt2d& FirstPoint()  const;
  
  //! Returns the tolerance of the first (left) bound.
  //! The exception DomainError is raised if HasFirstPoint
  //! returns False.
      Standard_Real FirstTolerance()  const;
  
  //! Returns True if the domain has a last point, i-e
  //! a point defining the highest admitted parameter on the
  //! curve.
      Standard_Boolean HasLastPoint()  const;
  
  //! Returns the parameter of the last point of the domain.
  //! The exception DomainError is raised if HasLastPoint
  //! returns False.
      Standard_Real LastParameter()  const;
  
  //! Returns the last point of the domain.
  //! The exception DomainError is raised if HasLastPoint
  //! returns False.
     const  gp_Pnt2d& LastPoint()  const;
  
  //! Returns the tolerance of the last (right) bound.
  //! The exception DomainError is raised if HasLastPoint
  //! returns False.
      Standard_Real LastTolerance()  const;
  
  //! Returns True if the domain is closed.
      Standard_Boolean IsClosed()  const;
  
  //! Returns Equivalent parameters if the domain is closed.
  //! Otherwise, the exception DomainError is raised.
      void EquivalentParameters (Standard_Real& zero, Standard_Real& zeroplusperiod)  const;




protected:





private:



  Standard_Integer status;
  Standard_Real first_param;
  Standard_Real last_param;
  Standard_Real first_tol;
  Standard_Real last_tol;
  gp_Pnt2d first_point;
  gp_Pnt2d last_point;
  Standard_Real periodfirst;
  Standard_Real periodlast;


};


#include <IntRes2d_Domain.lxx>





#endif // _IntRes2d_Domain_HeaderFile
