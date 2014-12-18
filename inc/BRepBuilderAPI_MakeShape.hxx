// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#define _BRepBuilderAPI_MakeShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <Standard_Boolean.hxx>
class StdFail_NotDone;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! This    is  the  root     class for     all  shape
//! constructions.  It stores the result.
//!
//! It  provides deferred methods to trace the history
//! of sub-shapes.
class BRepBuilderAPI_MakeShape  : public BRepBuilderAPI_Command
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT virtual   void Delete() ;
Standard_EXPORT virtual ~BRepBuilderAPI_MakeShape(){Delete() ; }
  
  //! This is  called by  Shape().  It does  nothing but
  //! may be redefined.
  Standard_EXPORT virtual   void Build() ;
  
  //! Returns a shape built by the shape construction algorithm.
  //! Raises exception StdFail_NotDone if the shape was not built.
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
Standard_EXPORT operator TopoDS_Shape() const;
  
  //! Returns the  list   of shapes generated   from the
  //! shape <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Generated (const TopoDS_Shape& S) ;
  
  //! Returns the list  of shapes modified from the shape
  //! <S>.
  Standard_EXPORT virtual  const  TopTools_ListOfShape& Modified (const TopoDS_Shape& S) ;
  
  //! Returns true if the shape S has been deleted.
  Standard_EXPORT virtual   Standard_Boolean IsDeleted (const TopoDS_Shape& S) ;




protected:

  
  Standard_EXPORT BRepBuilderAPI_MakeShape();


  TopoDS_Shape myShape;
  TopTools_ListOfShape myGenerated;


private:





};







#endif // _BRepBuilderAPI_MakeShape_HeaderFile
