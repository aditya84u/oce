// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ExternalSource_HeaderFile
#define _StepBasic_ExternalSource_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ExternalSource.hxx>

#include <StepBasic_SourceItem.hxx>
#include <MMgt_TShared.hxx>
class StepBasic_SourceItem;


//! Representation of STEP entity ExternalSource
class StepBasic_ExternalSource : public MMgt_TShared
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepBasic_ExternalSource();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const StepBasic_SourceItem& aSourceId) ;
  
  //! Returns field SourceId
  Standard_EXPORT   StepBasic_SourceItem SourceId()  const;
  
  //! Set field SourceId
  Standard_EXPORT   void SetSourceId (const StepBasic_SourceItem& SourceId) ;




  DEFINE_STANDARD_RTTI(StepBasic_ExternalSource)

protected:




private: 


  StepBasic_SourceItem theSourceId;


};







#endif // _StepBasic_ExternalSource_HeaderFile
