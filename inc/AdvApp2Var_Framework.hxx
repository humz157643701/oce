// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AdvApp2Var_Framework_HeaderFile
#define _AdvApp2Var_Framework_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <AdvApp2Var_SequenceOfNode.hxx>
#include <AdvApp2Var_SequenceOfStrip.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <GeomAbs_IsoType.hxx>
#include <Standard_Real.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
class Standard_NoSuchObject;
class AdvApp2Var_SequenceOfNode;
class AdvApp2Var_SequenceOfStrip;
class AdvApp2Var_Iso;
class AdvApp2Var_Node;
class TColStd_HArray1OfReal;



class AdvApp2Var_Framework 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT AdvApp2Var_Framework();
  
  Standard_EXPORT AdvApp2Var_Framework(const AdvApp2Var_SequenceOfNode& Frame, const AdvApp2Var_SequenceOfStrip& UFrontier, const AdvApp2Var_SequenceOfStrip& VFrontier);
  
  //! search the Index of the first Iso not approximated,
  //! if all Isos are approximated Standard_False is returned.
  Standard_EXPORT   Standard_Boolean FirstNotApprox (Standard_Integer& IndexIso, Standard_Integer& IndexStrip, AdvApp2Var_Iso& anIso)  const;
  
  Standard_EXPORT   Standard_Integer FirstNode (const GeomAbs_IsoType Type, const Standard_Integer IndexIso, const Standard_Integer IndexStrip)  const;
  
  Standard_EXPORT   Standard_Integer LastNode (const GeomAbs_IsoType Type, const Standard_Integer IndexIso, const Standard_Integer IndexStrip)  const;
  
  Standard_EXPORT   void ChangeIso (const Standard_Integer IndexIso, const Standard_Integer IndexStrip, const AdvApp2Var_Iso& anIso) ;
  
     const  AdvApp2Var_Node& Node (const Standard_Integer IndexNode)  const;
  
  Standard_EXPORT  const  AdvApp2Var_Node& Node (const Standard_Real U, const Standard_Real V)  const;
  
  Standard_EXPORT  const  AdvApp2Var_Iso& IsoU (const Standard_Real U, const Standard_Real V0, const Standard_Real V1)  const;
  
  Standard_EXPORT  const  AdvApp2Var_Iso& IsoV (const Standard_Real U0, const Standard_Real U1, const Standard_Real V)  const;
  
      AdvApp2Var_Node& ChangeNode (const Standard_Integer IndexNode) ;
  
  Standard_EXPORT   void UpdateInU (const Standard_Real CuttingValue) ;
  
  Standard_EXPORT   void UpdateInV (const Standard_Real CuttingValue) ;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& UEquation (const Standard_Integer IndexIso, const Standard_Integer IndexStrip)  const;
  
  Standard_EXPORT  const  Handle(TColStd_HArray1OfReal)& VEquation (const Standard_Integer IndexIso, const Standard_Integer IndexStrip)  const;




protected:





private:



  AdvApp2Var_SequenceOfNode myNodeConstraints;
  AdvApp2Var_SequenceOfStrip myUConstraints;
  AdvApp2Var_SequenceOfStrip myVConstraints;


};


#include <AdvApp2Var_Framework.lxx>





#endif // _AdvApp2Var_Framework_HeaderFile
