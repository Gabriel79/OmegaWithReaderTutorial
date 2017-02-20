#ifndef POINCARE_POWER_H
#define POINCARE_POWER_H

#include <poincare/binary_operation.h>

namespace Poincare {

class Power : public BinaryOperation {
  using BinaryOperation::BinaryOperation;
public:
  ExpressionLayout * createLayout(FloatDisplayMode FloatDisplayMode = FloatDisplayMode::Auto) const override;
  float approximate(Context& context, AngleUnit angleUnit = AngleUnit::Radian) const override;
  Type type() const override;
  Expression * cloneWithDifferentOperands(Expression** newOperands,
    int numnerOfOperands, bool cloneOperands = true) const override;
private:
  Expression * evaluateOnComplex(Complex * c, Complex * d, Context& context, AngleUnit angleUnit) const override;
  Expression * evaluateOnMatrixAndComplex(Matrix * m, Complex * c, Context& context, AngleUnit angleUnit) const override;
  Expression * evaluateOnComplexAndMatrix(Complex * c, Matrix * m, Context& context, AngleUnit angleUnit) const override;
  Expression * evaluateOnMatrices(Matrix * m, Matrix * n, Context& context, AngleUnit angleUnit) const override;
};

}

#endif
