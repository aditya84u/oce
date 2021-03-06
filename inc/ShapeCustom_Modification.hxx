// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeCustom_Modification_HeaderFile
#define _ShapeCustom_Modification_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_ShapeCustom_Modification.hxx>

#include <Handle_ShapeExtend_BasicMsgRegistrator.hxx>
#include <BRepTools_Modification.hxx>
#include <Message_Gravity.hxx>
class ShapeExtend_BasicMsgRegistrator;
class TopoDS_Shape;
class Message_Msg;


//! A base class of Modification's from ShapeCustom.
//! Implements message sending mechanism.
class ShapeCustom_Modification : public BRepTools_Modification
{

public:

  
  //! Sets message registrator
  Standard_EXPORT virtual   void SetMsgRegistrator (const Handle(ShapeExtend_BasicMsgRegistrator)& msgreg) ;
  
  //! Returns message registrator
  Standard_EXPORT   Handle(ShapeExtend_BasicMsgRegistrator) MsgRegistrator()  const;
  
  //! Sends a message to be attached to the shape.
  //! Calls corresponding message of message registrator.
  Standard_EXPORT   void SendMsg (const TopoDS_Shape& shape, const Message_Msg& message, const Message_Gravity gravity = Message_Info)  const;




  DEFINE_STANDARD_RTTI(ShapeCustom_Modification)

protected:




private: 


  Handle(ShapeExtend_BasicMsgRegistrator) myMsgReg;


};







#endif // _ShapeCustom_Modification_HeaderFile
