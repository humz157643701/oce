// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FWOSDriver_DriverFactory_HeaderFile
#define _FWOSDriver_DriverFactory_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_FWOSDriver_DriverFactory.hxx>

#include <CDF_MetaDataDriverFactory.hxx>
#include <Handle_CDF_MetaDataDriver.hxx>
class CDF_MetaDataDriver;



class FWOSDriver_DriverFactory : public CDF_MetaDataDriverFactory
{

public:

  
  Standard_EXPORT FWOSDriver_DriverFactory();
  
  Standard_EXPORT   Handle(CDF_MetaDataDriver) Build()  const;




  DEFINE_STANDARD_RTTI(FWOSDriver_DriverFactory)

protected:




private: 




};







#endif // _FWOSDriver_DriverFactory_HeaderFile
