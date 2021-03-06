// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectBypassGroup_HeaderFile
#define _IGESSelect_SelectBypassGroup_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESSelect_SelectBypassGroup.hxx>

#include <IFSelect_SelectExplore.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
class Interface_InterfaceError;
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! Selects a list built as follows :
//! Groups are entities type 402, forms 1,7,14,15 (Group,
//! Ordered or not, "WithoutBackPointer" or not)
//!
//! Entities which are not GROUP are taken as such
//! For Groups, their list of Elements is explore
//! Hence, level 0 (D) recursively explores a Group if some of
//! its Elements are Groups. level 1 explores just at first level
class IGESSelect_SelectBypassGroup : public IFSelect_SelectExplore
{

public:

  
  //! Creates a SelectBypassGroup, by default all level
  //! (level = 1 explores at first level)
  Standard_EXPORT IGESSelect_SelectBypassGroup(const Standard_Integer level = 0);
  
  //! Explores an entity : for a Group, gives its elements
  //! Else, takes the entity itself
  Standard_EXPORT   Standard_Boolean Explore (const Standard_Integer level, const Handle(Standard_Transient)& ent, const Interface_Graph& G, Interface_EntityIterator& explored)  const;
  
  //! Returns a text defining the criterium : "Content of Group"
  Standard_EXPORT   TCollection_AsciiString ExploreLabel()  const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectBypassGroup)

protected:




private: 




};







#endif // _IGESSelect_SelectBypassGroup_HeaderFile
