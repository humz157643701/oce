// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PCDM_HeaderFile
#define _PCDM_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_CDM_Document.hxx>
#include <Handle_PCDM_StorageDriver.hxx>
#include <Handle_Storage_Schema.hxx>
#include <Handle_CDM_Application.hxx>
#include <PCDM_TypeOfFileDriver.hxx>
#include <PCDM_BaseDriverPointer.hxx>
class CDM_Document;
class PCDM_StorageDriver;
class Storage_Schema;
class TCollection_ExtendedString;
class CDM_Application;
class TCollection_AsciiString;
class PCDM_Document;
class PCDM_SequenceOfDocument;
class PCDM_Reader;
class PCDM_Writer;
class PCDM_RetrievalDriver;
class PCDM_StorageDriver;
class PCDM_ReferenceIterator;
class PCDM_Reference;
class PCDM_SequenceOfReference;
class PCDM_ReadWriter;
class PCDM_ReadWriter_1;
class PCDM_SequenceNodeOfSequenceOfDocument;
class PCDM_SequenceNodeOfSequenceOfReference;



class PCDM 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT static   Standard_Boolean FindStorageDriver (const Handle(CDM_Document)& aDocument) ;
  
  //! gets   in the  EuclidDesktop   resource  the plugin
  //! identifier of the driver plugs the driver.
  Standard_EXPORT static   Handle(PCDM_StorageDriver) StorageDriver (const Handle(CDM_Document)& aDocument) ;
  
  //! returns a schema to be used during a Store or Retrieve
  //! operation.
  //! Schema will plug the schema defined by
  //! the SchemaName method.
  Standard_EXPORT static   Handle(Storage_Schema) Schema (const TCollection_ExtendedString& aSchemaName, const Handle(CDM_Application)& anApplication) ;




protected:





private:

  
  Standard_EXPORT static   PCDM_TypeOfFileDriver FileDriverType (const TCollection_AsciiString& aFileName, PCDM_BaseDriverPointer& aBaseDriver) ;



friend class PCDM_Document;
friend class PCDM_SequenceOfDocument;
friend class PCDM_Reader;
friend class PCDM_Writer;
friend class PCDM_RetrievalDriver;
friend class PCDM_StorageDriver;
friend class PCDM_ReferenceIterator;
friend class PCDM_Reference;
friend class PCDM_SequenceOfReference;
friend class PCDM_ReadWriter;
friend class PCDM_ReadWriter_1;
friend class PCDM_SequenceNodeOfSequenceOfDocument;
friend class PCDM_SequenceNodeOfSequenceOfReference;

};







#endif // _PCDM_HeaderFile
