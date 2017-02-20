#ifndef POINCARE_NTH_ROOT_H
#define POINCARE_NTH_ROOT_H

#include <poincare/function.h>

namespace Poincare {

class NthRoot : public Function {
public:
  NthRoot();
  float approximate(Context & context, AngleUnit angleUnit = AngleUnit::Radian) const override;
  Type type() const override;
  Expression * cloneWithDifferentOperands(Expression ** newOperands,
    int numberOfOperands, bool cloneOperands = true) const override;
  ExpressionLayout * createLayout(FloatDisplayMode FloatDisplayMode = FloatDisplayMode::Auto) const override;
  Expression * evaluate(Context& context, AngleUnit angleUnit = AngleUnit::Radian) const override;
};

}

#endif
