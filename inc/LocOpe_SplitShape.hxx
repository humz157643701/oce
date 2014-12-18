// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_SplitShape_HeaderFile
#define _LocOpe_SplitShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <TopoDS_Shape.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <TopTools_MapOfShape.hxx>
#include <TopTools_ListOfShape.hxx>
#include <Standard_Real.hxx>
class StdFail_NotDone;
class Standard_ConstructionError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopoDS_Edge;
class TopoDS_Vertex;
class TopoDS_Wire;
class TopoDS_Face;
class TopTools_ListOfShape;


//! Provides a tool to cut  :
//! - edges with a vertices,
//! - faces with wires,
//! and  rebuilds  the shape containing the edges and
//! the faces.
class LocOpe_SplitShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Empty constructor.
    LocOpe_SplitShape();
  
  //! Creates the process  with the shape <S>.
    LocOpe_SplitShape(const TopoDS_Shape& S);
  
  //! Initializes the process on the shape <S>.
  Standard_EXPORT   void Init (const TopoDS_Shape& S) ;
  
  //! Tests if it is possible to split the edge <E>.
  Standard_EXPORT   Standard_Boolean CanSplit (const TopoDS_Edge& E)  const;
  
  //! Adds the vertex <V> on the edge <E>, at parameter <P>.
  Standard_EXPORT   void Add (const TopoDS_Vertex& V, const Standard_Real P, const TopoDS_Edge& E) ;
  
  //! Adds the wire <W> on the face <F>.
  Standard_EXPORT   void Add (const TopoDS_Wire& W, const TopoDS_Face& F) ;
  
  //! Adds the list of wires <Lwires> on the face <F>.
  Standard_EXPORT   void Add (const TopTools_ListOfShape& Lwires, const TopoDS_Face& F) ;
  
  //! Returns the "original" shape.
     const  TopoDS_Shape& Shape()  const;
  
  //! Returns the list of descendant shapes of <S>.
  Standard_EXPORT  const  TopTools_ListOfShape& DescendantShapes (const TopoDS_Shape& S) ;
  
  //! Returns the "left" part defined by the wire <W> on
  //! the face <F>.   The  returned list of shape  is in
  //! fact  a list of faces. The  face <F> is considered
  //! with its topological  orientation  in the original
  //! shape.  <W> is considered with its orientation.
  Standard_EXPORT  const  TopTools_ListOfShape& LeftOf (const TopoDS_Wire& W, const TopoDS_Face& F) ;




protected:





private:

  
  Standard_EXPORT   void AddOpenWire (const TopoDS_Wire& W, const TopoDS_Face& F) ;
  
  Standard_EXPORT   void AddClosedWire (const TopoDS_Wire& W, const TopoDS_Face& F) ;
  
  Standard_EXPORT   void Put (const TopoDS_Shape& S) ;
  
  Standard_EXPORT   Standard_Boolean Rebuild (const TopoDS_Shape& S) ;


  Standard_Boolean myDone;
  TopoDS_Shape myShape;
  TopTools_DataMapOfShapeListOfShape myMap;
  TopTools_MapOfShape myDblE;
  TopTools_ListOfShape myLeft;


};


#include <LocOpe_SplitShape.lxx>





#endif // _LocOpe_SplitShape_HeaderFile
