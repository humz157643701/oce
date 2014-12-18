// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomFill_BSplineCurves_HeaderFile
#define _GeomFill_BSplineCurves_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Geom_BSplineSurface.hxx>
#include <Handle_Geom_BSplineCurve.hxx>
#include <GeomFill_FillingStyle.hxx>
class Geom_BSplineSurface;
class Standard_ConstructionError;
class Geom_BSplineCurve;


//! An algorithm for constructing a BSpline surface filled
//! from contiguous BSpline curves which form its boundaries.
//! The algorithm accepts two, three or four BSpline
//! curves as the boundaries of the target surface.
//! A range of filling styles - more or less rounded, more
//! or less flat - is available.
//! A BSplineCurves object provides a framework for:
//! -   defining the boundaries, and the filling style of the surface
//! -   implementing the construction algorithm
//! -   consulting the result.
//! Warning
//! Some problems may show up with rational curves.
class GeomFill_BSplineCurves 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Constructs a default BSpline surface framework.
  Standard_EXPORT GeomFill_BSplineCurves();
  
  Standard_EXPORT GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const Handle(Geom_BSplineCurve)& C3, const Handle(Geom_BSplineCurve)& C4, const GeomFill_FillingStyle Type);
  
  Standard_EXPORT GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const Handle(Geom_BSplineCurve)& C3, const GeomFill_FillingStyle Type);
  
  //! Constructs a framework for building a BSpline surface from either
  //! -   the four contiguous BSpline curves, C1, C2, C3 and C4, or
  //! -   the three contiguous BSpline curves, C1, C2 and C3, or
  //! -   the two contiguous BSpline curves, C1 and C2.
  //! The type of filling style Type to be used is one of:
  //! -   GeomFill_Stretch - the style with the flattest patch
  //! -   GeomFill_Coons - a rounded style of patch with
  //! less depth than that of Curved
  //! -   GeomFill_Curved - the style with the most rounded
  //! patch.Constructs a framework for building a BSpline
  //! surface common to the two BSpline curves, C1 and C2.
  //! Exceptions
  //! Standard_ConstructionError if the curves are not contiguous.
  Standard_EXPORT GeomFill_BSplineCurves(const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const GeomFill_FillingStyle Type);
  
  //! if the curves cannot be joined
  Standard_EXPORT   void Init (const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const Handle(Geom_BSplineCurve)& C3, const Handle(Geom_BSplineCurve)& C4, const GeomFill_FillingStyle Type) ;
  
  //! if the curves cannot be joined
  Standard_EXPORT   void Init (const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const Handle(Geom_BSplineCurve)& C3, const GeomFill_FillingStyle Type) ;
  
  //! Initializes or reinitializes this algorithm with two, three,
  //! or four curves - C1, C2, C3, and C4 - and Type, one
  //! of the following filling styles:
  //! -   GeomFill_Stretch - the style with the flattest patch
  //! -   GeomFill_Coons - a rounded style of patch with
  //! less depth than that of Curved
  //! -   GeomFill_Curved - the style with the most rounded patch.
  //! Exceptions
  //! Standard_ConstructionError if the curves are not contiguous.
  Standard_EXPORT   void Init (const Handle(Geom_BSplineCurve)& C1, const Handle(Geom_BSplineCurve)& C2, const GeomFill_FillingStyle Type) ;
  
  //! Returns the BSpline surface Surface resulting from
  //! the computation performed by this algorithm.
     const  Handle(Geom_BSplineSurface)& Surface()  const;




protected:





private:



  Handle(Geom_BSplineSurface) mySurface;


};


#include <GeomFill_BSplineCurves.lxx>





#endif // _GeomFill_BSplineCurves_HeaderFile
