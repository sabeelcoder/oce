// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_BooleanResult_HeaderFile
#define _StepShape_BooleanResult_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_BooleanResult.hxx>

#include <StepShape_BooleanOperator.hxx>
#include <StepShape_BooleanOperand.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TCollection_HAsciiString;
class StepShape_BooleanOperand;



class StepShape_BooleanResult : public StepGeom_GeometricRepresentationItem
{

public:

  
  //! Returns a BooleanResult
  Standard_EXPORT StepShape_BooleanResult();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const StepShape_BooleanOperator aOperator, const StepShape_BooleanOperand& aFirstOperand, const StepShape_BooleanOperand& aSecondOperand) ;
  
  Standard_EXPORT   void SetOperator (const StepShape_BooleanOperator aOperator) ;
  
  Standard_EXPORT   StepShape_BooleanOperator Operator()  const;
  
  Standard_EXPORT   void SetFirstOperand (const StepShape_BooleanOperand& aFirstOperand) ;
  
  Standard_EXPORT   StepShape_BooleanOperand FirstOperand()  const;
  
  Standard_EXPORT   void SetSecondOperand (const StepShape_BooleanOperand& aSecondOperand) ;
  
  Standard_EXPORT   StepShape_BooleanOperand SecondOperand()  const;




  DEFINE_STANDARD_RTTI(StepShape_BooleanResult)

protected:




private: 


  StepShape_BooleanOperator anOperator;
  StepShape_BooleanOperand firstOperand;
  StepShape_BooleanOperand secondOperand;


};







#endif // _StepShape_BooleanResult_HeaderFile
