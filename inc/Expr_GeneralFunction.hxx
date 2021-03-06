// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_GeneralFunction_HeaderFile
#define _Expr_GeneralFunction_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Expr_GeneralFunction.hxx>

#include <MMgt_TShared.hxx>
#include <Standard_Integer.hxx>
#include <Handle_Expr_NamedUnknown.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
class Standard_OutOfRange;
class Standard_DimensionMismatch;
class Standard_NumericError;
class Expr_NotEvaluable;
class Expr_NamedUnknown;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;
class TCollection_AsciiString;


//! Defines the general purposes of any function.
class Expr_GeneralFunction : public MMgt_TShared
{

public:

  
  //! Returns the number of variables of <me>.
  Standard_EXPORT virtual   Standard_Integer NbOfVariables()  const = 0;
  
  //! Returns the variable denoted by <index> in <me>.
  //! Raises OutOfRange if index > NbOfVariables.
  Standard_EXPORT virtual   Handle(Expr_NamedUnknown) Variable (const Standard_Integer index)  const = 0;
  
  //! Returns a copy of <me> with the same form.
  Standard_EXPORT virtual   Handle(Expr_GeneralFunction) Copy()  const = 0;
  
  //! Returns Derivative of <me> for variable <var>.
  Standard_EXPORT virtual   Handle(Expr_GeneralFunction) Derivative (const Handle(Expr_NamedUnknown)& var)  const = 0;
  
  //! Returns Derivative of <me> for variable <var> with
  //! degree <deg>.
  Standard_EXPORT virtual   Handle(Expr_GeneralFunction) Derivative (const Handle(Expr_NamedUnknown)& var, const Standard_Integer deg)  const = 0;
  
  //! Computes the value of <me> with the given variables.
  //! Raises NotEvaluable if <vars> does not match all variables
  //! of <me>.
  Standard_EXPORT virtual   Standard_Real Evaluate (const Expr_Array1OfNamedUnknown& vars, const TColStd_Array1OfReal& vals)  const = 0;
  
  //! Tests if <me> and <func> are similar functions (same
  //! name and same used expression).
  Standard_EXPORT virtual   Standard_Boolean IsIdentical (const Handle(Expr_GeneralFunction)& func)  const = 0;
  
  //! Tests if <me> is linear on variable on range <index>
  Standard_EXPORT virtual   Standard_Boolean IsLinearOnVariable (const Standard_Integer index)  const = 0;
  
  Standard_EXPORT virtual   TCollection_AsciiString GetStringName()  const = 0;




  DEFINE_STANDARD_RTTI(Expr_GeneralFunction)

protected:




private: 




};







#endif // _Expr_GeneralFunction_HeaderFile
