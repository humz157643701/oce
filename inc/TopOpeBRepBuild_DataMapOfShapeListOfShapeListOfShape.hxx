// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape_HeaderFile
#define _TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Handle_TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopOpeBRepBuild_ListOfShapeListOfShape;
class TopTools_ShapeMapHasher;
class TopOpeBRepBuild_DataMapNodeOfDataMapOfShapeListOfShapeListOfShape;
class TopOpeBRepBuild_DataMapIteratorOfDataMapOfShapeListOfShapeListOfShape;



class TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& Assign (const TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& Other) ;
  TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& operator = (const TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const TopoDS_Shape& K, const TopOpeBRepBuild_ListOfShapeListOfShape& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const TopoDS_Shape& K) ;
  
  Standard_EXPORT  const  TopOpeBRepBuild_ListOfShapeListOfShape& Find (const TopoDS_Shape& K)  const;
 const  TopOpeBRepBuild_ListOfShapeListOfShape& operator() (const TopoDS_Shape& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   TopOpeBRepBuild_ListOfShapeListOfShape& ChangeFind (const TopoDS_Shape& K) ;
  TopOpeBRepBuild_ListOfShapeListOfShape& operator() (const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const TopoDS_Shape& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const TopoDS_Shape& K) ;




protected:





private:

  
  Standard_EXPORT TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape(const TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape& Other);




};







#endif // _TopOpeBRepBuild_DataMapOfShapeListOfShapeListOfShape_HeaderFile
