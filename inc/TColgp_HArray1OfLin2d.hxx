// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray1OfLin2d_HeaderFile
#define _TColgp_HArray1OfLin2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TColgp_HArray1OfLin2d.hxx>

#include <TColgp_Array1OfLin2d.hxx>
#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class gp_Lin2d;
class TColgp_Array1OfLin2d;



class TColgp_HArray1OfLin2d : public MMgt_TShared
{

public:

  
    TColgp_HArray1OfLin2d(const Standard_Integer Low, const Standard_Integer Up);
  
    TColgp_HArray1OfLin2d(const Standard_Integer Low, const Standard_Integer Up, const gp_Lin2d& V);
  
      void Init (const gp_Lin2d& V) ;
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
      Standard_Integer Upper()  const;
  
      void SetValue (const Standard_Integer Index, const gp_Lin2d& Value) ;
  
     const  gp_Lin2d& Value (const Standard_Integer Index)  const;
  
      gp_Lin2d& ChangeValue (const Standard_Integer Index) ;
  
     const  TColgp_Array1OfLin2d& Array1()  const;
  
      TColgp_Array1OfLin2d& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray1OfLin2d)

protected:




private: 


  TColgp_Array1OfLin2d myArray;


};

#define ItemHArray1 gp_Lin2d
#define ItemHArray1_hxx <gp_Lin2d.hxx>
#define TheArray1 TColgp_Array1OfLin2d
#define TheArray1_hxx <TColgp_Array1OfLin2d.hxx>
#define TCollection_HArray1 TColgp_HArray1OfLin2d
#define TCollection_HArray1_hxx <TColgp_HArray1OfLin2d.hxx>
#define Handle_TCollection_HArray1 Handle_TColgp_HArray1OfLin2d
#define TCollection_HArray1_Type_() TColgp_HArray1OfLin2d_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_




#endif // _TColgp_HArray1OfLin2d_HeaderFile
