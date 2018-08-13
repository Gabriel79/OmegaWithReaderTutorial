#ifndef POINCARE_EXCEPTION_NODE_H
#define POINCARE_EXCEPTION_NODE_H

#include <stddef.h>

namespace Poincare {

template <typename T>
class ExceptionNode : public T {
public:
  ExceptionNode() : T() {}
  ExceptionNode(T node) : T(node) {}

  // TreeNode
  size_t size() const override { return sizeof(ExceptionNode<T>); }
  int numberOfChildren() const override { return 0; }
  bool isException() const override { return true; }
#if POINCARE_TREE_LOG
  virtual void logNodeName(std::ostream & stream) const override {
    stream << "Exception[";
    T::logNodeName(stream);
    stream << "]";
  }
#endif
};

}

#endif