// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_HeaderFile
#define _XSControl_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_XSControl_WorkSession.hxx>
#include <Handle_IFSelect_SessionPilot.hxx>
#include <Handle_XSControl_Vars.hxx>
class XSControl_WorkSession;
class IFSelect_SessionPilot;
class XSControl_Vars;
class XSControl_Controller;
class XSControl_TransferReader;
class XSControl_TransferWriter;
class XSControl_WorkSession;
class XSControl_SelectForTransfer;
class XSControl_SignTransferStatus;
class XSControl_ConnectedShapes;
class XSControl_Reader;
class XSControl_Writer;
class XSControl_Functions;
class XSControl_FuncShape;
class XSControl_Utils;
class XSControl_Vars;


//! This package provides complements to IFSelect & Co for
//! control of a session
class XSControl 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Returns the WorkSession of a SessionPilot, but casts it as
  //! from XSControl : it then gives access to Control & Transfers
  Standard_EXPORT static   Handle(XSControl_WorkSession) Session (const Handle(IFSelect_SessionPilot)& pilot) ;
  
  //! Returns the Vars of a SessionPilot, it is brought by Session
  //! it provides access to external variables
  Standard_EXPORT static   Handle(XSControl_Vars) Vars (const Handle(IFSelect_SessionPilot)& pilot) ;




protected:





private:




friend class XSControl_Controller;
friend class XSControl_TransferReader;
friend class XSControl_TransferWriter;
friend class XSControl_WorkSession;
friend class XSControl_SelectForTransfer;
friend class XSControl_SignTransferStatus;
friend class XSControl_ConnectedShapes;
friend class XSControl_Reader;
friend class XSControl_Writer;
friend class XSControl_Functions;
friend class XSControl_FuncShape;
friend class XSControl_Utils;
friend class XSControl_Vars;

};







#endif // _XSControl_HeaderFile
