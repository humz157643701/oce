// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToIGES_GeomPoint_HeaderFile
#define _GeomToIGES_GeomPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <GeomToIGES_GeomEntity.hxx>
#include <Handle_IGESGeom_Point.hxx>
#include <Handle_Geom_Point.hxx>
#include <Handle_Geom_CartesianPoint.hxx>
class GeomToIGES_GeomEntity;
class IGESGeom_Point;
class Geom_Point;
class Geom_CartesianPoint;


//! This class implements the transfer of the Point Entity from Geom
//! to IGES . These are :
//! . Point
//! * CartesianPoint
class GeomToIGES_GeomPoint  : public GeomToIGES_GeomEntity
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomToIGES_GeomPoint();
  
  //! Creates a tool GeomPoint ready to run and sets its
  //! fields as GE's.
  Standard_EXPORT GeomToIGES_GeomPoint(const GeomToIGES_GeomEntity& GE);
  
  //! Transfert  a  Point from Geom to IGES. If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESGeom_Point) TransferPoint (const Handle(Geom_Point)& start) ;
  
  //! Transfert  a  CartesianPoint from Geom to IGES. If this
  //! Entity could not be converted, this member returns a NullEntity.
  Standard_EXPORT   Handle(IGESGeom_Point) TransferPoint (const Handle(Geom_CartesianPoint)& start) ;




protected:





private:





};







#endif // _GeomToIGES_GeomPoint_HeaderFile
