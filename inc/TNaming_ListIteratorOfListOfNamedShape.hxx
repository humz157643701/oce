// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_ListIteratorOfListOfNamedShape_HeaderFile
#define _TNaming_ListIteratorOfListOfNamedShape_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TNaming_NamedShape.hxx>
#include <Handle_TNaming_ListNodeOfListOfNamedShape.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TNaming_ListOfNamedShape;
class TNaming_NamedShape;
class TNaming_ListNodeOfListOfNamedShape;



class TNaming_ListIteratorOfListOfNamedShape 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TNaming_ListIteratorOfListOfNamedShape();
  
  Standard_EXPORT TNaming_ListIteratorOfListOfNamedShape(const TNaming_ListOfNamedShape& L);
  
  Standard_EXPORT   void Initialize (const TNaming_ListOfNamedShape& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   Handle(TNaming_NamedShape)& Value()  const;


friend class TNaming_ListOfNamedShape;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item Handle(TNaming_NamedShape)
#define Item_hxx <TNaming_NamedShape.hxx>
#define TCollection_ListNode TNaming_ListNodeOfListOfNamedShape
#define TCollection_ListNode_hxx <TNaming_ListNodeOfListOfNamedShape.hxx>
#define TCollection_ListIterator TNaming_ListIteratorOfListOfNamedShape
#define TCollection_ListIterator_hxx <TNaming_ListIteratorOfListOfNamedShape.hxx>
#define Handle_TCollection_ListNode Handle_TNaming_ListNodeOfListOfNamedShape
#define TCollection_ListNode_Type_() TNaming_ListNodeOfListOfNamedShape_Type_()
#define TCollection_List TNaming_ListOfNamedShape
#define TCollection_List_hxx <TNaming_ListOfNamedShape.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TNaming_ListIteratorOfListOfNamedShape_HeaderFile
