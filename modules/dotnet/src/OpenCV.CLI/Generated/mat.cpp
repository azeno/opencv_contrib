#include "mat.h"
#include "core.h"
#include "mat.h"

using namespace System;
using namespace System::Runtime::InteropServices;

OpenCV::Cv::MatOp::MatOp(::cv::MatOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::MatOp::MatOp(System::IntPtr native)
{
    auto __native = (::cv::MatOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::MatOp::~MatOp()
{
    delete NativePtr;
}

OpenCV::Cv::MatOp::!MatOp()
{
    delete NativePtr;
}

OpenCV::Cv::MatOp::MatOp()
{
}

bool OpenCV::Cv::MatOp::ElementWise(OpenCV::Cv::MatExpr^ expr)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto __ret = ((::cv::MatOp*)NativePtr)->elementWise(arg0);
    return __ret;
}

void OpenCV::Cv::MatOp::Assign(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m, int type)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->assign(arg0, arg1, type);
}

void OpenCV::Cv::MatOp::Roi(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Range^ rowRange, OpenCV::Cv::Range^ colRange, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Range*)rowRange->NativePtr;
    auto &arg2 = *(::cv::Range*)colRange->NativePtr;
    auto &arg3 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->roi(arg0, arg1, arg2, arg3);
}

void OpenCV::Cv::MatOp::Diag(OpenCV::Cv::MatExpr^ expr, int d, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->diag(arg0, d, arg2);
}

void OpenCV::Cv::MatOp::AugAssignAdd(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignAdd(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignSubtract(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignSubtract(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignMultiply(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignMultiply(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignDivide(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignDivide(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignAnd(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignAnd(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignOr(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignOr(arg0, arg1);
}

void OpenCV::Cv::MatOp::AugAssignXor(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    ((::cv::MatOp*)NativePtr)->augAssignXor(arg0, arg1);
}

void OpenCV::Cv::MatOp::Add(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)expr2->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->add(arg0, arg1, arg2);
}

void OpenCV::Cv::MatOp::Subtract(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)expr2->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->subtract(arg0, arg1, arg2);
}

void OpenCV::Cv::MatOp::Multiply(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res, double scale)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)expr2->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->multiply(arg0, arg1, arg2, scale);
}

void OpenCV::Cv::MatOp::Multiply(OpenCV::Cv::MatExpr^ expr1, double s, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->multiply(arg0, s, arg2);
}

void OpenCV::Cv::MatOp::Divide(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res, double scale)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)expr2->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->divide(arg0, arg1, arg2, scale);
}

void OpenCV::Cv::MatOp::Divide(double s, OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res)
{
    auto &arg1 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->divide(s, arg1, arg2);
}

void OpenCV::Cv::MatOp::Abs(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->abs(arg0, arg1);
}

void OpenCV::Cv::MatOp::Transpose(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->transpose(arg0, arg1);
}

void OpenCV::Cv::MatOp::Matmul(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)expr2->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->matmul(arg0, arg1, arg2);
}

void OpenCV::Cv::MatOp::Invert(OpenCV::Cv::MatExpr^ expr, int method, OpenCV::Cv::MatExpr^ res)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto &arg2 = *(::cv::MatExpr*)res->NativePtr;
    ((::cv::MatOp*)NativePtr)->invert(arg0, method, arg2);
}

int OpenCV::Cv::MatOp::Type(OpenCV::Cv::MatExpr^ expr)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    auto __ret = ((::cv::MatOp*)NativePtr)->type(arg0);
    return __ret;
}

bool OpenCV::Cv::MatOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<MatOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::MatOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::MatOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::MatOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::MatOp*)object.ToPointer();
}
OpenCV::Cv::MatExpr::MatExpr(::cv::MatExpr* native)
{
    NativePtr = native;
}

OpenCV::Cv::MatExpr::MatExpr(System::IntPtr native)
{
    auto __native = (::cv::MatExpr*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::MatExpr::~MatExpr()
{
    delete NativePtr;
}

OpenCV::Cv::MatExpr::!MatExpr()
{
    delete NativePtr;
}

OpenCV::Cv::MatExpr::MatExpr()
{
    NativePtr = new ::cv::MatExpr();
}

OpenCV::Cv::MatExpr::MatExpr(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    NativePtr = new ::cv::MatExpr(arg0);
}

OpenCV::Cv::MatExpr::operator OpenCV::Cv::Mat^(OpenCV::Cv::MatExpr^ __op)
{
    auto &arg0 = *(::cv::MatExpr*)__op->NativePtr;
    auto __ret = (::cv::Mat) arg0;
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Row(int y)
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->row(y);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Col(int x)
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->col(x);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Diag(int d)
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->diag(d);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::MatExpr::Cross(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = ((::cv::MatExpr*)NativePtr)->cross(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

double OpenCV::Cv::MatExpr::Dot(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = ((::cv::MatExpr*)NativePtr)->dot(arg0);
    return __ret;
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::T()
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->t();
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Inv(int method)
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->inv(method);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Mul(OpenCV::Cv::MatExpr^ e, double scale)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = ((::cv::MatExpr*)NativePtr)->mul(arg0, scale);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::Mul(OpenCV::Cv::Mat^ m, double scale)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = ((::cv::MatExpr*)NativePtr)->mul(arg0, scale);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

int OpenCV::Cv::MatExpr::Type()
{
    auto __ret = ((::cv::MatExpr*)NativePtr)->type();
    return __ret;
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator+(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    auto __ret = arg0 + arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator+(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2)
{
    auto &arg0 = *(::cv::MatExpr*)e1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e2->NativePtr;
    auto __ret = arg0 + arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator-(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    auto __ret = arg0 - arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator-(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2)
{
    auto &arg0 = *(::cv::MatExpr*)e1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e2->NativePtr;
    auto __ret = arg0 - arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator-(OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = - arg0;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator*(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    auto __ret = arg0 * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator*(OpenCV::Cv::MatExpr^ e, double s)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 * s;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator*(double s, OpenCV::Cv::MatExpr^ e)
{
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = s * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator*(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2)
{
    auto &arg0 = *(::cv::MatExpr*)e1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e2->NativePtr;
    auto __ret = arg0 * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator/(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    auto __ret = arg0 / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator/(OpenCV::Cv::MatExpr^ e, double s)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 / s;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator/(double s, OpenCV::Cv::MatExpr^ e)
{
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = s / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::MatExpr::operator/(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2)
{
    auto &arg0 = *(::cv::MatExpr*)e1->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e2->NativePtr;
    auto __ret = arg0 / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr::operator OpenCV::Cv::_InputArray^(OpenCV::Cv::MatExpr^ __op)
{
    auto &arg0 = *(::cv::MatExpr*)__op->NativePtr;
    auto __ret = (::cv::_InputArray) arg0;
    auto ____ret = new ::cv::_InputArray(__ret);
    return gcnew OpenCV::Cv::_InputArray((::cv::_InputArray*)____ret);
}

bool OpenCV::Cv::MatExpr::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<MatExpr^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::MatExpr::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::MatExpr::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::MatExpr::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::MatExpr*)object.ToPointer();
}

OpenCV::Cv::MatOp^ OpenCV::Cv::MatExpr::Op::get()
{
    return (((::cv::MatExpr*)NativePtr)->op == nullptr) ? nullptr : gcnew OpenCV::Cv::MatOp((::cv::MatOp*)((::cv::MatExpr*)NativePtr)->op);
}

void OpenCV::Cv::MatExpr::Op::set(OpenCV::Cv::MatOp^ value)
{
    ((::cv::MatExpr*)NativePtr)->op = (::cv::MatOp*)value->NativePtr;
}

int OpenCV::Cv::MatExpr::Flags::get()
{
    return ((::cv::MatExpr*)NativePtr)->flags;
}

void OpenCV::Cv::MatExpr::Flags::set(int value)
{
    ((::cv::MatExpr*)NativePtr)->flags = value;
}

OpenCV::Cv::Mat^ OpenCV::Cv::MatExpr::A::get()
{
    return (&((::cv::MatExpr*)NativePtr)->a == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::MatExpr*)NativePtr)->a);
}

void OpenCV::Cv::MatExpr::A::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::MatExpr*)NativePtr)->a = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::MatExpr::B::get()
{
    return (&((::cv::MatExpr*)NativePtr)->b == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::MatExpr*)NativePtr)->b);
}

void OpenCV::Cv::MatExpr::B::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::MatExpr*)NativePtr)->b = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::MatExpr::C::get()
{
    return (&((::cv::MatExpr*)NativePtr)->c == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::MatExpr*)NativePtr)->c);
}

void OpenCV::Cv::MatExpr::C::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::MatExpr*)NativePtr)->c = *(::cv::Mat*)value->NativePtr;
}

double OpenCV::Cv::MatExpr::Alpha::get()
{
    return ((::cv::MatExpr*)NativePtr)->alpha;
}

void OpenCV::Cv::MatExpr::Alpha::set(double value)
{
    ((::cv::MatExpr*)NativePtr)->alpha = value;
}

double OpenCV::Cv::MatExpr::Beta::get()
{
    return ((::cv::MatExpr*)NativePtr)->beta;
}

void OpenCV::Cv::MatExpr::Beta::set(double value)
{
    ((::cv::MatExpr*)NativePtr)->beta = value;
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::Min(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = ::cv::min(arg0, arg1);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::min(OpenCV::Cv::Mat^ a, double s)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto __ret = ::cv::min(arg0, s);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::min(double s, OpenCV::Cv::Mat^ a)
{
    auto &arg1 = *(::cv::Mat*)a->NativePtr;
    auto __ret = ::cv::min(s, arg1);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::Max(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = ::cv::max(arg0, arg1);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::max(OpenCV::Cv::Mat^ a, double s)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto __ret = ::cv::max(arg0, s);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::max(double s, OpenCV::Cv::Mat^ a)
{
    auto &arg1 = *(::cv::Mat*)a->NativePtr;
    auto __ret = ::cv::max(s, arg1);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::Abs(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = ::cv::abs(arg0);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::mat::abs(OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = ::cv::abs(arg0);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

