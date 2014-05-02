#include "core.h"
#include "core.h"
#include "mat.h"
#include "operations.h"
#include "mat.h"
#include "operations.h"

#include <sstream>

using namespace System;
using namespace System::Runtime::InteropServices;

OpenCV::Cv::Matx_AddOp::Matx_AddOp(::cv::Matx_AddOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_AddOp::Matx_AddOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_AddOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_AddOp::~Matx_AddOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_AddOp::!Matx_AddOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_AddOp::Matx_AddOp()
{
    NativePtr = new ::cv::Matx_AddOp();
}

bool OpenCV::Cv::Matx_AddOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_AddOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_AddOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_AddOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_AddOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_AddOp*)object.ToPointer();
}
OpenCV::Cv::Matx_SubOp::Matx_SubOp(::cv::Matx_SubOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_SubOp::Matx_SubOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_SubOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_SubOp::~Matx_SubOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_SubOp::!Matx_SubOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_SubOp::Matx_SubOp()
{
    NativePtr = new ::cv::Matx_SubOp();
}

bool OpenCV::Cv::Matx_SubOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_SubOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_SubOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_SubOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_SubOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_SubOp*)object.ToPointer();
}
OpenCV::Cv::Matx_ScaleOp::Matx_ScaleOp(::cv::Matx_ScaleOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_ScaleOp::Matx_ScaleOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_ScaleOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_ScaleOp::~Matx_ScaleOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_ScaleOp::!Matx_ScaleOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_ScaleOp::Matx_ScaleOp()
{
    NativePtr = new ::cv::Matx_ScaleOp();
}

bool OpenCV::Cv::Matx_ScaleOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_ScaleOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_ScaleOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_ScaleOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_ScaleOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_ScaleOp*)object.ToPointer();
}
OpenCV::Cv::Matx_MulOp::Matx_MulOp(::cv::Matx_MulOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_MulOp::Matx_MulOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_MulOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_MulOp::~Matx_MulOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_MulOp::!Matx_MulOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_MulOp::Matx_MulOp()
{
    NativePtr = new ::cv::Matx_MulOp();
}

bool OpenCV::Cv::Matx_MulOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_MulOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_MulOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_MulOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_MulOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_MulOp*)object.ToPointer();
}
OpenCV::Cv::Matx_MatMulOp::Matx_MatMulOp(::cv::Matx_MatMulOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_MatMulOp::Matx_MatMulOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_MatMulOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_MatMulOp::~Matx_MatMulOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_MatMulOp::!Matx_MatMulOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_MatMulOp::Matx_MatMulOp()
{
    NativePtr = new ::cv::Matx_MatMulOp();
}

bool OpenCV::Cv::Matx_MatMulOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_MatMulOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_MatMulOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_MatMulOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_MatMulOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_MatMulOp*)object.ToPointer();
}
OpenCV::Cv::Matx_TOp::Matx_TOp(::cv::Matx_TOp* native)
{
    NativePtr = native;
}

OpenCV::Cv::Matx_TOp::Matx_TOp(System::IntPtr native)
{
    auto __native = (::cv::Matx_TOp*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Matx_TOp::~Matx_TOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_TOp::!Matx_TOp()
{
    delete NativePtr;
}

OpenCV::Cv::Matx_TOp::Matx_TOp()
{
    NativePtr = new ::cv::Matx_TOp();
}

bool OpenCV::Cv::Matx_TOp::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Matx_TOp^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Matx_TOp::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Matx_TOp::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Matx_TOp::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Matx_TOp*)object.ToPointer();
}
OpenCV::Cv::RotatedRect::RotatedRect(::cv::RotatedRect* native)
{
    NativePtr = native;
}

OpenCV::Cv::RotatedRect::RotatedRect(System::IntPtr native)
{
    auto __native = (::cv::RotatedRect*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::RotatedRect::~RotatedRect()
{
    delete NativePtr;
}

OpenCV::Cv::RotatedRect::!RotatedRect()
{
    delete NativePtr;
}

OpenCV::Cv::RotatedRect::RotatedRect()
{
    NativePtr = new ::cv::RotatedRect();
}

bool OpenCV::Cv::RotatedRect::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<RotatedRect^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::RotatedRect::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::RotatedRect::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::RotatedRect::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::RotatedRect*)object.ToPointer();
}

float OpenCV::Cv::RotatedRect::Angle::get()
{
    return ((::cv::RotatedRect*)NativePtr)->angle;
}

void OpenCV::Cv::RotatedRect::Angle::set(float value)
{
    ((::cv::RotatedRect*)NativePtr)->angle = value;
}

OpenCV::Cv::Range::Range(::cv::Range* native)
{
    NativePtr = native;
}

OpenCV::Cv::Range::Range(System::IntPtr native)
{
    auto __native = (::cv::Range*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Range::~Range()
{
    delete NativePtr;
}

OpenCV::Cv::Range::!Range()
{
    delete NativePtr;
}

OpenCV::Cv::Range::Range()
{
    NativePtr = new ::cv::Range();
}

OpenCV::Cv::Range::Range(int _start, int _end)
{
    NativePtr = new ::cv::Range(_start, _end);
}

int OpenCV::Cv::Range::Size()
{
    auto __ret = ((::cv::Range*)NativePtr)->size();
    return __ret;
}

bool OpenCV::Cv::Range::Empty()
{
    auto __ret = ((::cv::Range*)NativePtr)->empty();
    return __ret;
}

OpenCV::Cv::Range^ OpenCV::Cv::Range::All()
{
    auto __ret = ::cv::Range::all();
    auto ____ret = new ::cv::Range(__ret);
    return gcnew OpenCV::Cv::Range((::cv::Range*)____ret);
}

bool OpenCV::Cv::Range::operator==(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2)
{
    auto &arg0 = *(::cv::Range*)r1->NativePtr;
    auto &arg1 = *(::cv::Range*)r2->NativePtr;
    auto __ret = arg0 == arg1;
    return __ret;
}

bool OpenCV::Cv::Range::operator!=(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2)
{
    auto &arg0 = *(::cv::Range*)r1->NativePtr;
    auto &arg1 = *(::cv::Range*)r2->NativePtr;
    auto __ret = arg0 != arg1;
    return __ret;
}

bool OpenCV::Cv::Range::operator!(OpenCV::Cv::Range^ r)
{
    auto &arg0 = *(::cv::Range*)r->NativePtr;
    auto __ret = ! arg0;
    return __ret;
}

OpenCV::Cv::Range^ OpenCV::Cv::Range::operator&(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2)
{
    auto &arg0 = *(::cv::Range*)r1->NativePtr;
    auto &arg1 = *(::cv::Range*)r2->NativePtr;
    auto __ret = arg0 & arg1;
    auto ____ret = new ::cv::Range(__ret);
    return gcnew OpenCV::Cv::Range((::cv::Range*)____ret);
}

OpenCV::Cv::Range^ OpenCV::Cv::Range::operator+(OpenCV::Cv::Range^ r1, int delta)
{
    auto &arg0 = *(::cv::Range*)r1->NativePtr;
    auto __ret = arg0 + delta;
    auto ____ret = new ::cv::Range(__ret);
    return gcnew OpenCV::Cv::Range((::cv::Range*)____ret);
}

OpenCV::Cv::Range^ OpenCV::Cv::Range::operator+(int delta, OpenCV::Cv::Range^ r1)
{
    auto &arg1 = *(::cv::Range*)r1->NativePtr;
    auto __ret = delta + arg1;
    auto ____ret = new ::cv::Range(__ret);
    return gcnew OpenCV::Cv::Range((::cv::Range*)____ret);
}

OpenCV::Cv::Range^ OpenCV::Cv::Range::operator-(OpenCV::Cv::Range^ r1, int delta)
{
    auto &arg0 = *(::cv::Range*)r1->NativePtr;
    auto __ret = arg0 - delta;
    auto ____ret = new ::cv::Range(__ret);
    return gcnew OpenCV::Cv::Range((::cv::Range*)____ret);
}

bool OpenCV::Cv::Range::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Range^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Range::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Range::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Range::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Range*)object.ToPointer();
}

int OpenCV::Cv::Range::Start::get()
{
    return ((::cv::Range*)NativePtr)->start;
}

void OpenCV::Cv::Range::Start::set(int value)
{
    ((::cv::Range*)NativePtr)->start = value;
}

int OpenCV::Cv::Range::End::get()
{
    return ((::cv::Range*)NativePtr)->end;
}

void OpenCV::Cv::Range::End::set(int value)
{
    ((::cv::Range*)NativePtr)->end = value;
}

OpenCV::Cv::_InputArray::_InputArray(::cv::_InputArray* native)
{
    NativePtr = native;
}

OpenCV::Cv::_InputArray::_InputArray(System::IntPtr native)
{
    auto __native = (::cv::_InputArray*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::_InputArray::~_InputArray()
{
    delete NativePtr;
}

OpenCV::Cv::_InputArray::!_InputArray()
{
    delete NativePtr;
}

OpenCV::Cv::_InputArray::_InputArray()
{
    NativePtr = new ::cv::_InputArray();
}

OpenCV::Cv::_InputArray::_InputArray(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    NativePtr = new ::cv::_InputArray(arg0);
}

OpenCV::Cv::_InputArray::_InputArray(OpenCV::Cv::MatExpr^ expr)
{
    auto &arg0 = *(::cv::MatExpr*)expr->NativePtr;
    NativePtr = new ::cv::_InputArray(arg0);
}

OpenCV::Cv::_InputArray::_InputArray(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ vec)
{
    auto _tmpvec = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in vec)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvec.push_back(_marshalElement);
    }
    auto arg0 = _tmpvec;
    NativePtr = new ::cv::_InputArray(arg0);
}

OpenCV::Cv::_InputArray::_InputArray(double* val)
{
    auto arg0 = (const double&)val;
    NativePtr = new ::cv::_InputArray(arg0);
}

OpenCV::Cv::Mat^ OpenCV::Cv::_InputArray::GetMat(int i)
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->getMat(i);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

void OpenCV::Cv::_InputArray::GetMatVector(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv)
{
    auto _tmpmv = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in mv)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpmv.push_back(_marshalElement);
    }
    auto arg0 = _tmpmv;
    ((::cv::_InputArray*)NativePtr)->getMatVector(arg0);
}

int OpenCV::Cv::_InputArray::Kind()
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->kind();
    return __ret;
}

unsigned int OpenCV::Cv::_InputArray::Total(int i)
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->total(i);
    return __ret;
}

int OpenCV::Cv::_InputArray::Type(int i)
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->type(i);
    return __ret;
}

int OpenCV::Cv::_InputArray::Depth(int i)
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->depth(i);
    return __ret;
}

int OpenCV::Cv::_InputArray::Channels(int i)
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->channels(i);
    return __ret;
}

bool OpenCV::Cv::_InputArray::Empty()
{
    auto __ret = ((::cv::_InputArray*)NativePtr)->empty();
    return __ret;
}

bool OpenCV::Cv::_InputArray::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<_InputArray^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::_InputArray::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::_InputArray::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::_InputArray::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::_InputArray*)object.ToPointer();
}

int OpenCV::Cv::_InputArray::Flags::get()
{
    return ((::cv::_InputArray*)NativePtr)->flags;
}

void OpenCV::Cv::_InputArray::Flags::set(int value)
{
    ((::cv::_InputArray*)NativePtr)->flags = value;
}

void* OpenCV::Cv::_InputArray::Obj::get()
{
    return ((::cv::_InputArray*)NativePtr)->obj;
}

void OpenCV::Cv::_InputArray::Obj::set(void* value)
{
    ((::cv::_InputArray*)NativePtr)->obj = (void*)value;
}

OpenCV::Cv::_OutputArray::_OutputArray(::cv::_OutputArray* native)
    : OpenCV::Cv::_InputArray((::cv::_InputArray*)native)
{
}

OpenCV::Cv::_OutputArray::_OutputArray(System::IntPtr native)
    : OpenCV::Cv::_InputArray(native)
{
    auto __native = (::cv::_OutputArray*)native.ToPointer();
}

OpenCV::Cv::_OutputArray::~_OutputArray()
{
}

OpenCV::Cv::_OutputArray::!_OutputArray()
{
}

OpenCV::Cv::_OutputArray::_OutputArray()
    : OpenCV::Cv::_InputArray((::cv::_InputArray*)nullptr)
{
    NativePtr = new ::cv::_OutputArray();
}

OpenCV::Cv::_OutputArray::_OutputArray(OpenCV::Cv::Mat^ m)
    : OpenCV::Cv::_InputArray((::cv::_InputArray*)nullptr)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    NativePtr = new ::cv::_OutputArray(arg0);
}

OpenCV::Cv::_OutputArray::_OutputArray(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ vec)
    : OpenCV::Cv::_InputArray((::cv::_InputArray*)nullptr)
{
    auto _tmpvec = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in vec)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvec.push_back(_marshalElement);
    }
    auto arg0 = _tmpvec;
    NativePtr = new ::cv::_OutputArray(arg0);
}

bool OpenCV::Cv::_OutputArray::FixedSize()
{
    auto __ret = ((::cv::_OutputArray*)NativePtr)->fixedSize();
    return __ret;
}

bool OpenCV::Cv::_OutputArray::FixedType()
{
    auto __ret = ((::cv::_OutputArray*)NativePtr)->fixedType();
    return __ret;
}

bool OpenCV::Cv::_OutputArray::Needed()
{
    auto __ret = ((::cv::_OutputArray*)NativePtr)->needed();
    return __ret;
}

OpenCV::Cv::Mat^ OpenCV::Cv::_OutputArray::GetMatRef(int i)
{
    auto &__ret = ((::cv::_OutputArray*)NativePtr)->getMatRef(i);
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&__ret);
}

void OpenCV::Cv::_OutputArray::Create(int rows, int cols, int type, int i, bool allowTransposed, int fixedDepthMask)
{
    ((::cv::_OutputArray*)NativePtr)->create(rows, cols, type, i, allowTransposed, fixedDepthMask);
}

void OpenCV::Cv::_OutputArray::Create(int dims, int* size, int type, int i, bool allowTransposed, int fixedDepthMask)
{
    auto arg1 = (const int*)size;
    ((::cv::_OutputArray*)NativePtr)->create(dims, arg1, type, i, allowTransposed, fixedDepthMask);
}

void OpenCV::Cv::_OutputArray::Release()
{
    ((::cv::_OutputArray*)NativePtr)->release();
}

void OpenCV::Cv::_OutputArray::Clear()
{
    ((::cv::_OutputArray*)NativePtr)->clear();
}

bool OpenCV::Cv::_OutputArray::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<_OutputArray^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::_OutputArray::GetHashCode()
{
    return (int)NativePtr;
}

OpenCV::Cv::MatAllocator::MatAllocator(::cv::MatAllocator* native)
{
    NativePtr = native;
}

OpenCV::Cv::MatAllocator::MatAllocator(System::IntPtr native)
{
    auto __native = (::cv::MatAllocator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::MatAllocator::~MatAllocator()
{
    delete NativePtr;
}

OpenCV::Cv::MatAllocator::!MatAllocator()
{
    delete NativePtr;
}

OpenCV::Cv::MatAllocator::MatAllocator()
{
}

bool OpenCV::Cv::MatAllocator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<MatAllocator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::MatAllocator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::MatAllocator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::MatAllocator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::MatAllocator*)object.ToPointer();
}
OpenCV::Cv::Mat::MSize::MSize(::cv::Mat::MSize* native)
{
    NativePtr = native;
}

OpenCV::Cv::Mat::MSize::MSize(System::IntPtr native)
{
    auto __native = (::cv::Mat::MSize*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Mat::MSize::~MSize()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::MSize::!MSize()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::MSize::MSize(int* _p)
{
    auto arg0 = (int*)_p;
    NativePtr = new ::cv::Mat::MSize(arg0);
}

OpenCV::Cv::Mat::MSize::operator int*(OpenCV::Cv::Mat::MSize^ __op)
{
    auto &arg0 = *(::cv::Mat::MSize*)__op->NativePtr;
    auto __ret = (const int*) arg0;
    return const_cast<int*>(__ret);
}

bool OpenCV::Cv::Mat::MSize::operator==(OpenCV::Cv::Mat::MSize^ __op, OpenCV::Cv::Mat::MSize^ sz)
{
    auto &arg0 = *(::cv::Mat::MSize*)__op->NativePtr;
    auto &arg1 = *(::cv::Mat::MSize*)sz->NativePtr;
    auto __ret = arg0 == arg1;
    return __ret;
}

bool OpenCV::Cv::Mat::MSize::operator!=(OpenCV::Cv::Mat::MSize^ __op, OpenCV::Cv::Mat::MSize^ sz)
{
    auto &arg0 = *(::cv::Mat::MSize*)__op->NativePtr;
    auto &arg1 = *(::cv::Mat::MSize*)sz->NativePtr;
    auto __ret = arg0 != arg1;
    return __ret;
}

System::IntPtr OpenCV::Cv::Mat::MSize::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Mat::MSize::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Mat::MSize*)object.ToPointer();
}

int OpenCV::Cv::Mat::MSize::default::get(int i)
{
    auto __ret = ((::cv::Mat::MSize*)NativePtr)->operator[](i);
    return __ret;
}

void OpenCV::Cv::Mat::MSize::default::set(int i, int value)
{
    ((::cv::Mat::MSize*)NativePtr)->operator[](i) = value;
}

int* OpenCV::Cv::Mat::MSize::P::get()
{
    return ((::cv::Mat::MSize*)NativePtr)->p;
}

void OpenCV::Cv::Mat::MSize::P::set(int* value)
{
    ((::cv::Mat::MSize*)NativePtr)->p = (int*)value;
}

OpenCV::Cv::Mat::MStep::MStep(::cv::Mat::MStep* native)
{
    NativePtr = native;
}

OpenCV::Cv::Mat::MStep::MStep(System::IntPtr native)
{
    auto __native = (::cv::Mat::MStep*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Mat::MStep::~MStep()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::MStep::!MStep()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::MStep::MStep()
{
    NativePtr = new ::cv::Mat::MStep();
}

OpenCV::Cv::Mat::MStep::MStep(unsigned int s)
{
    NativePtr = new ::cv::Mat::MStep(s);
}

OpenCV::Cv::Mat::MStep::operator unsigned int(OpenCV::Cv::Mat::MStep^ __op)
{
    auto &arg0 = *(::cv::Mat::MStep*)__op->NativePtr;
    auto __ret = (::size_t) arg0;
    return __ret;
}

System::IntPtr OpenCV::Cv::Mat::MStep::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Mat::MStep::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Mat::MStep*)object.ToPointer();
}

unsigned int OpenCV::Cv::Mat::MStep::default::get(int i)
{
    auto __ret = ((::cv::Mat::MStep*)NativePtr)->operator[](i);
    return __ret;
}

void OpenCV::Cv::Mat::MStep::default::set(int i, unsigned int value)
{
    ((::cv::Mat::MStep*)NativePtr)->operator[](i) = (::size_t)value;
}

unsigned int* OpenCV::Cv::Mat::MStep::P::get()
{
    return reinterpret_cast<unsigned int*>(((::cv::Mat::MStep*)NativePtr)->p);
}

void OpenCV::Cv::Mat::MStep::P::set(unsigned int* value)
{
    ((::cv::Mat::MStep*)NativePtr)->p = (::size_t*)value;
}

cli::array<unsigned int>^ OpenCV::Cv::Mat::MStep::Buf::get()
{
    return nullptr;
}

OpenCV::Cv::Mat::Mat(::cv::Mat* native)
{
    NativePtr = native;
}

OpenCV::Cv::Mat::Mat(System::IntPtr native)
{
    auto __native = (::cv::Mat*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Mat::~Mat()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::!Mat()
{
    delete NativePtr;
}

OpenCV::Cv::Mat::Mat()
{
    NativePtr = new ::cv::Mat();
}

OpenCV::Cv::Mat::Mat(int rows, int cols, int type)
{
    NativePtr = new ::cv::Mat(rows, cols, type);
}

OpenCV::Cv::Mat::Mat(int ndims, int* sizes, int type)
{
    auto arg1 = (const int*)sizes;
    NativePtr = new ::cv::Mat(ndims, arg1, type);
}

OpenCV::Cv::Mat::Mat(int rows, int cols, int type, void* data, unsigned int step)
{
    auto arg3 = (void*)data;
    NativePtr = new ::cv::Mat(rows, cols, type, arg3, step);
}

OpenCV::Cv::Mat::Mat(int ndims, int* sizes, int type, void* data, unsigned int* steps)
{
    auto arg1 = (const int*)sizes;
    auto arg3 = (void*)data;
    auto arg4 = (const ::size_t*)steps;
    NativePtr = new ::cv::Mat(ndims, arg1, type, arg3, arg4);
}

OpenCV::Cv::Mat::Mat(OpenCV::Cv::Mat^ m, OpenCV::Cv::Range^ rowRange, OpenCV::Cv::Range^ colRange)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto &arg1 = *(::cv::Range*)rowRange->NativePtr;
    auto &arg2 = *(::cv::Range*)colRange->NativePtr;
    NativePtr = new ::cv::Mat(arg0, arg1, arg2);
}

OpenCV::Cv::Mat::Mat(OpenCV::Cv::Mat^ m, OpenCV::Cv::Range^ ranges)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto arg1 = (::cv::Range*)ranges->NativePtr;
    NativePtr = new ::cv::Mat(arg0, arg1);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Row(int y)
{
    auto __ret = ((::cv::Mat*)NativePtr)->row(y);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Col(int x)
{
    auto __ret = ((::cv::Mat*)NativePtr)->col(x);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::RowRange(int startrow, int endrow)
{
    auto __ret = ((::cv::Mat*)NativePtr)->rowRange(startrow, endrow);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::RowRange(OpenCV::Cv::Range^ r)
{
    auto &arg0 = *(::cv::Range*)r->NativePtr;
    auto __ret = ((::cv::Mat*)NativePtr)->rowRange(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::ColRange(int startcol, int endcol)
{
    auto __ret = ((::cv::Mat*)NativePtr)->colRange(startcol, endcol);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::ColRange(OpenCV::Cv::Range^ r)
{
    auto &arg0 = *(::cv::Range*)r->NativePtr;
    auto __ret = ((::cv::Mat*)NativePtr)->colRange(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Diag(int d)
{
    auto __ret = ((::cv::Mat*)NativePtr)->diag(d);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Diag(OpenCV::Cv::Mat^ d)
{
    auto &arg0 = *(::cv::Mat*)d->NativePtr;
    auto __ret = ::cv::Mat::diag(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Clone()
{
    auto __ret = ((::cv::Mat*)NativePtr)->clone();
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

void OpenCV::Cv::Mat::CopyTo(OpenCV::Cv::_OutputArray^ m)
{
    auto arg0 = *(::cv::_OutputArray*)m->NativePtr;
    ((::cv::Mat*)NativePtr)->copyTo(arg0);
}

void OpenCV::Cv::Mat::CopyTo(OpenCV::Cv::_OutputArray^ m, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_OutputArray*)m->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mask->NativePtr;
    ((::cv::Mat*)NativePtr)->copyTo(arg0, arg1);
}

void OpenCV::Cv::Mat::ConvertTo(OpenCV::Cv::_OutputArray^ m, int rtype, double alpha, double beta)
{
    auto arg0 = *(::cv::_OutputArray*)m->NativePtr;
    ((::cv::Mat*)NativePtr)->convertTo(arg0, rtype, alpha, beta);
}

void OpenCV::Cv::Mat::AssignTo(OpenCV::Cv::Mat^ m, int type)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    ((::cv::Mat*)NativePtr)->assignTo(arg0, type);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::SetTo(OpenCV::Cv::_InputArray^ value, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)value->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mask->NativePtr;
    auto &__ret = ((::cv::Mat*)NativePtr)->setTo(arg0, arg1);
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&__ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Reshape(int cn, int rows)
{
    auto __ret = ((::cv::Mat*)NativePtr)->reshape(cn, rows);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Reshape(int cn, int newndims, int* newsz)
{
    auto arg2 = (const int*)newsz;
    auto __ret = ((::cv::Mat*)NativePtr)->reshape(cn, newndims, arg2);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::T()
{
    auto __ret = ((::cv::Mat*)NativePtr)->t();
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::Inv(int method)
{
    auto __ret = ((::cv::Mat*)NativePtr)->inv(method);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::Mul(OpenCV::Cv::_InputArray^ m, double scale)
{
    auto arg0 = *(::cv::_InputArray*)m->NativePtr;
    auto __ret = ((::cv::Mat*)NativePtr)->mul(arg0, scale);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::Cross(OpenCV::Cv::_InputArray^ m)
{
    auto arg0 = *(::cv::_InputArray*)m->NativePtr;
    auto __ret = ((::cv::Mat*)NativePtr)->cross(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

double OpenCV::Cv::Mat::Dot(OpenCV::Cv::_InputArray^ m)
{
    auto arg0 = *(::cv::_InputArray*)m->NativePtr;
    auto __ret = ((::cv::Mat*)NativePtr)->dot(arg0);
    return __ret;
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::Zeros(int rows, int cols, int type)
{
    auto __ret = ::cv::Mat::zeros(rows, cols, type);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::Ones(int rows, int cols, int type)
{
    auto __ret = ::cv::Mat::ones(rows, cols, type);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::Eye(int rows, int cols, int type)
{
    auto __ret = ::cv::Mat::eye(rows, cols, type);
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

void OpenCV::Cv::Mat::Create(int rows, int cols, int type)
{
    ((::cv::Mat*)NativePtr)->create(rows, cols, type);
}

void OpenCV::Cv::Mat::Create(int ndims, int* sizes, int type)
{
    auto arg1 = (const int*)sizes;
    ((::cv::Mat*)NativePtr)->create(ndims, arg1, type);
}

void OpenCV::Cv::Mat::Addref()
{
    ((::cv::Mat*)NativePtr)->addref();
}

void OpenCV::Cv::Mat::Release()
{
    ((::cv::Mat*)NativePtr)->release();
}

void OpenCV::Cv::Mat::Deallocate()
{
    ((::cv::Mat*)NativePtr)->deallocate();
}

void OpenCV::Cv::Mat::CopySize(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    ((::cv::Mat*)NativePtr)->copySize(arg0);
}

void OpenCV::Cv::Mat::Reserve(unsigned int sz)
{
    ((::cv::Mat*)NativePtr)->reserve(sz);
}

void OpenCV::Cv::Mat::Resize(unsigned int sz)
{
    ((::cv::Mat*)NativePtr)->resize(sz);
}

void OpenCV::Cv::Mat::Push_back_(void* elem)
{
    auto arg0 = (const void*)elem;
    ((::cv::Mat*)NativePtr)->push_back_(arg0);
}

void OpenCV::Cv::Mat::Push_back(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    ((::cv::Mat*)NativePtr)->push_back(arg0);
}

void OpenCV::Cv::Mat::Pop_back(unsigned int nelems)
{
    ((::cv::Mat*)NativePtr)->pop_back(nelems);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Mat::AdjustROI(int dtop, int dbottom, int dleft, int dright)
{
    auto &__ret = ((::cv::Mat*)NativePtr)->adjustROI(dtop, dbottom, dleft, dright);
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&__ret);
}

bool OpenCV::Cv::Mat::IsContinuous()
{
    auto __ret = ((::cv::Mat*)NativePtr)->isContinuous();
    return __ret;
}

bool OpenCV::Cv::Mat::IsSubmatrix()
{
    auto __ret = ((::cv::Mat*)NativePtr)->isSubmatrix();
    return __ret;
}

unsigned int OpenCV::Cv::Mat::ElemSize()
{
    auto __ret = ((::cv::Mat*)NativePtr)->elemSize();
    return __ret;
}

unsigned int OpenCV::Cv::Mat::ElemSize1()
{
    auto __ret = ((::cv::Mat*)NativePtr)->elemSize1();
    return __ret;
}

int OpenCV::Cv::Mat::Type()
{
    auto __ret = ((::cv::Mat*)NativePtr)->type();
    return __ret;
}

int OpenCV::Cv::Mat::Depth()
{
    auto __ret = ((::cv::Mat*)NativePtr)->depth();
    return __ret;
}

int OpenCV::Cv::Mat::Channels()
{
    auto __ret = ((::cv::Mat*)NativePtr)->channels();
    return __ret;
}

unsigned int OpenCV::Cv::Mat::Step1(int i)
{
    auto __ret = ((::cv::Mat*)NativePtr)->step1(i);
    return __ret;
}

bool OpenCV::Cv::Mat::Empty()
{
    auto __ret = ((::cv::Mat*)NativePtr)->empty();
    return __ret;
}

unsigned int OpenCV::Cv::Mat::Total()
{
    auto __ret = ((::cv::Mat*)NativePtr)->total();
    return __ret;
}

int OpenCV::Cv::Mat::CheckVector(int elemChannels, int depth, bool requireContinuous)
{
    auto __ret = ((::cv::Mat*)NativePtr)->checkVector(elemChannels, depth, requireContinuous);
    return __ret;
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator+(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 + arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator+(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 + arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator-(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 - arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator-(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 - arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator-(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = - arg0;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator*(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator*(OpenCV::Cv::Mat^ a, double s)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto __ret = arg0 * s;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator*(double s, OpenCV::Cv::Mat^ a)
{
    auto &arg1 = *(::cv::Mat*)a->NativePtr;
    auto __ret = s * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator*(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 * arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator/(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator/(OpenCV::Cv::Mat^ a, double s)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto __ret = arg0 / s;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator/(double s, OpenCV::Cv::Mat^ a)
{
    auto &arg1 = *(::cv::Mat*)a->NativePtr;
    auto __ret = s / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator/(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto &arg1 = *(::cv::MatExpr*)e->NativePtr;
    auto __ret = arg0 / arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator&(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 & arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator|(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 | arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator^(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    auto __ret = arg0 ^ arg1;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::MatExpr^ OpenCV::Cv::Mat::operator~(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto __ret = ~ arg0;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

OpenCV::Cv::Mat::operator OpenCV::Cv::SparseMat^(OpenCV::Cv::Mat^ __op)
{
    auto &arg0 = *(::cv::Mat*)__op->NativePtr;
    auto __ret = (::cv::SparseMat) arg0;
    auto ____ret = new ::cv::SparseMat(__ret);
    return gcnew OpenCV::Cv::SparseMat((::cv::SparseMat*)____ret);
}

OpenCV::Cv::Mat::operator OpenCV::Cv::_InputArray^(OpenCV::Cv::Mat^ __op)
{
    auto &arg0 = *(::cv::Mat*)__op->NativePtr;
    auto __ret = (::cv::_InputArray) arg0;
    auto ____ret = new ::cv::_InputArray(__ret);
    return gcnew OpenCV::Cv::_InputArray((::cv::_InputArray*)____ret);
}

OpenCV::Cv::Mat::operator OpenCV::Cv::_OutputArray^(OpenCV::Cv::Mat^ __op)
{
    auto &arg0 = *(::cv::Mat*)__op->NativePtr;
    auto __ret = (::cv::_OutputArray) arg0;
    auto ____ret = new ::cv::_OutputArray(__ret);
    return gcnew OpenCV::Cv::_OutputArray((::cv::_OutputArray*)____ret);
}

OpenCV::Cv::Mat::operator OpenCV::Cv::MatExpr^(OpenCV::Cv::Mat^ __op)
{
    auto &arg0 = *(::cv::Mat*)__op->NativePtr;
    auto __ret = (::cv::MatExpr) arg0;
    auto ____ret = new ::cv::MatExpr(__ret);
    return gcnew OpenCV::Cv::MatExpr((::cv::MatExpr*)____ret);
}

System::String^ OpenCV::Cv::Mat::ToString()
{
    std::ostringstream os;
    os << *NativePtr;
    return clix::marshalString<clix::E_UTF8>(os.str());
}

bool OpenCV::Cv::Mat::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Mat^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Mat::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Mat::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Mat::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Mat*)object.ToPointer();
}

int OpenCV::Cv::Mat::Flags::get()
{
    return ((::cv::Mat*)NativePtr)->flags;
}

void OpenCV::Cv::Mat::Flags::set(int value)
{
    ((::cv::Mat*)NativePtr)->flags = value;
}

int OpenCV::Cv::Mat::Dims::get()
{
    return ((::cv::Mat*)NativePtr)->dims;
}

void OpenCV::Cv::Mat::Dims::set(int value)
{
    ((::cv::Mat*)NativePtr)->dims = value;
}

int OpenCV::Cv::Mat::Rows::get()
{
    return ((::cv::Mat*)NativePtr)->rows;
}

void OpenCV::Cv::Mat::Rows::set(int value)
{
    ((::cv::Mat*)NativePtr)->rows = value;
}

int OpenCV::Cv::Mat::Cols::get()
{
    return ((::cv::Mat*)NativePtr)->cols;
}

void OpenCV::Cv::Mat::Cols::set(int value)
{
    ((::cv::Mat*)NativePtr)->cols = value;
}

int* OpenCV::Cv::Mat::Refcount::get()
{
    return ((::cv::Mat*)NativePtr)->refcount;
}

void OpenCV::Cv::Mat::Refcount::set(int* value)
{
    ((::cv::Mat*)NativePtr)->refcount = (int*)value;
}

OpenCV::Cv::MatAllocator^ OpenCV::Cv::Mat::Allocator::get()
{
    return (((::cv::Mat*)NativePtr)->allocator == nullptr) ? nullptr : gcnew OpenCV::Cv::MatAllocator((::cv::MatAllocator*)((::cv::Mat*)NativePtr)->allocator);
}

void OpenCV::Cv::Mat::Allocator::set(OpenCV::Cv::MatAllocator^ value)
{
    ((::cv::Mat*)NativePtr)->allocator = (::cv::MatAllocator*)value->NativePtr;
}

OpenCV::Cv::Mat::MSize^ OpenCV::Cv::Mat::Size::get()
{
    return (&((::cv::Mat*)NativePtr)->size == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat::MSize((::cv::Mat::MSize*)&((::cv::Mat*)NativePtr)->size);
}

void OpenCV::Cv::Mat::Size::set(OpenCV::Cv::Mat::MSize^ value)
{
    ((::cv::Mat*)NativePtr)->size = *(::cv::Mat::MSize*)value->NativePtr;
}

OpenCV::Cv::Mat::MStep^ OpenCV::Cv::Mat::Step::get()
{
    return (&((::cv::Mat*)NativePtr)->step == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat::MStep((::cv::Mat::MStep*)&((::cv::Mat*)NativePtr)->step);
}

generic<typename _Tp>
void OpenCV::Cv::Mat::Push_back(_Tp elem)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg0 = (const bool&)elem;
        ((::cv::Mat*)NativePtr)->push_back<bool>(arg0);
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg0 = (const unsigned char&)elem;
        ((::cv::Mat*)NativePtr)->push_back<unsigned char>(arg0);
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg0 = (const short&)elem;
        ((::cv::Mat*)NativePtr)->push_back<short>(arg0);
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg0 = (const unsigned short&)elem;
        ((::cv::Mat*)NativePtr)->push_back<unsigned short>(arg0);
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg0 = (const int&)elem;
        ((::cv::Mat*)NativePtr)->push_back<int>(arg0);
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg0 = (const unsigned int&)elem;
        ((::cv::Mat*)NativePtr)->push_back<unsigned int>(arg0);
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg0 = (const long long&)elem;
        ((::cv::Mat*)NativePtr)->push_back<long long>(arg0);
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg0 = (const unsigned long long&)elem;
        ((::cv::Mat*)NativePtr)->push_back<unsigned long long>(arg0);
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg0 = (const float&)elem;
        ((::cv::Mat*)NativePtr)->push_back<float>(arg0);
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg0 = (const double&)elem;
        ((::cv::Mat*)NativePtr)->push_back<double>(arg0);
    }
    auto arg0 = gcroot<System::Object^>(elem);
    ((::cv::Mat*)NativePtr)->push_back<gcroot<System::Object^>>(arg0);
}


generic<typename _Tp>
_Tp OpenCV::Cv::Mat::At(int i0)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<bool>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned char>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<short>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned short>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<int>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned int>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<long long>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned long long>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<float>(i0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<double>(i0);
        return (_Tp)__ret;
    }
    auto &__ret = ((::cv::Mat*)NativePtr)->at<gcroot<System::Object^>>(i0);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::Mat::At(int i0, int i1)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<bool>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned char>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<short>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned short>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<int>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned int>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<long long>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned long long>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<float>(i0, i1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<double>(i0, i1);
        return (_Tp)__ret;
    }
    auto &__ret = ((::cv::Mat*)NativePtr)->at<gcroot<System::Object^>>(i0, i1);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::Mat::At(int i0, int i1, int i2)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<bool>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned char>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<short>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned short>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<int>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned int>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<long long>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned long long>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<float>(i0, i1, i2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto &__ret = ((::cv::Mat*)NativePtr)->at<double>(i0, i1, i2);
        return (_Tp)__ret;
    }
    auto &__ret = ((::cv::Mat*)NativePtr)->at<gcroot<System::Object^>>(i0, i1, i2);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::Mat::At(int* idx)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<bool>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned char>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<short>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned short>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<int>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned int>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<long long>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<unsigned long long>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<float>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg0 = (const int*)idx;
        auto &__ret = ((::cv::Mat*)NativePtr)->at<double>(arg0);
        return (_Tp)__ret;
    }
    auto arg0 = (const int*)idx;
    auto &__ret = ((::cv::Mat*)NativePtr)->at<gcroot<System::Object^>>(arg0);
    return (_Tp)(System::Object^)__ret;
}

OpenCV::Cv::RNG::RNG(::cv::RNG* native)
{
    NativePtr = native;
}

OpenCV::Cv::RNG::RNG(System::IntPtr native)
{
    auto __native = (::cv::RNG*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::RNG::~RNG()
{
    delete NativePtr;
}

OpenCV::Cv::RNG::!RNG()
{
    delete NativePtr;
}

OpenCV::Cv::RNG::RNG()
{
    NativePtr = new ::cv::RNG();
}

unsigned int OpenCV::Cv::RNG::Next()
{
    auto __ret = ((::cv::RNG*)NativePtr)->next();
    return __ret;
}

OpenCV::Cv::RNG::operator short(OpenCV::Cv::RNG^ __op)
{
    auto &arg0 = *(::cv::RNG*)__op->NativePtr;
    auto __ret = (short) arg0;
    return __ret;
}

OpenCV::Cv::RNG::operator unsigned int(OpenCV::Cv::RNG^ __op)
{
    auto &arg0 = *(::cv::RNG*)__op->NativePtr;
    auto __ret = (unsigned int) arg0;
    return __ret;
}

OpenCV::Cv::RNG::operator int(OpenCV::Cv::RNG^ __op)
{
    auto &arg0 = *(::cv::RNG*)__op->NativePtr;
    auto __ret = (int) arg0;
    return __ret;
}

OpenCV::Cv::RNG::operator float(OpenCV::Cv::RNG^ __op)
{
    auto &arg0 = *(::cv::RNG*)__op->NativePtr;
    auto __ret = (float) arg0;
    return __ret;
}

OpenCV::Cv::RNG::operator double(OpenCV::Cv::RNG^ __op)
{
    auto &arg0 = *(::cv::RNG*)__op->NativePtr;
    auto __ret = (double) arg0;
    return __ret;
}

int OpenCV::Cv::RNG::Uniform(int a, int b)
{
    auto __ret = ((::cv::RNG*)NativePtr)->uniform(a, b);
    return __ret;
}

float OpenCV::Cv::RNG::Uniform(float a, float b)
{
    auto __ret = ((::cv::RNG*)NativePtr)->uniform(a, b);
    return __ret;
}

double OpenCV::Cv::RNG::Uniform(double a, double b)
{
    auto __ret = ((::cv::RNG*)NativePtr)->uniform(a, b);
    return __ret;
}

void OpenCV::Cv::RNG::Fill(OpenCV::Cv::_OutputArray^ mat, int distType, OpenCV::Cv::_InputArray^ a, OpenCV::Cv::_InputArray^ b, bool saturateRange)
{
    auto arg0 = *(::cv::_OutputArray*)mat->NativePtr;
    auto arg2 = *(::cv::_InputArray*)a->NativePtr;
    auto arg3 = *(::cv::_InputArray*)b->NativePtr;
    ((::cv::RNG*)NativePtr)->fill(arg0, distType, arg2, arg3, saturateRange);
}

double OpenCV::Cv::RNG::Gaussian(double sigma)
{
    auto __ret = ((::cv::RNG*)NativePtr)->gaussian(sigma);
    return __ret;
}

bool OpenCV::Cv::RNG::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<RNG^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::RNG::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::RNG::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::RNG::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::RNG*)object.ToPointer();
}
OpenCV::Cv::RNG_MT19937::RNG_MT19937(::cv::RNG_MT19937* native)
{
    NativePtr = native;
}

OpenCV::Cv::RNG_MT19937::RNG_MT19937(System::IntPtr native)
{
    auto __native = (::cv::RNG_MT19937*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::RNG_MT19937::~RNG_MT19937()
{
    delete NativePtr;
}

OpenCV::Cv::RNG_MT19937::!RNG_MT19937()
{
    delete NativePtr;
}

OpenCV::Cv::RNG_MT19937::RNG_MT19937()
{
    NativePtr = new ::cv::RNG_MT19937();
}

OpenCV::Cv::RNG_MT19937::RNG_MT19937(unsigned int s)
{
    NativePtr = new ::cv::RNG_MT19937(s);
}

void OpenCV::Cv::RNG_MT19937::Seed(unsigned int s)
{
    ((::cv::RNG_MT19937*)NativePtr)->seed(s);
}

unsigned int OpenCV::Cv::RNG_MT19937::Next()
{
    auto __ret = ((::cv::RNG_MT19937*)NativePtr)->next();
    return __ret;
}

OpenCV::Cv::RNG_MT19937::operator int(OpenCV::Cv::RNG_MT19937^ __op)
{
    auto &arg0 = *(::cv::RNG_MT19937*)__op->NativePtr;
    auto __ret = (int) arg0;
    return __ret;
}

OpenCV::Cv::RNG_MT19937::operator unsigned int(OpenCV::Cv::RNG_MT19937^ __op)
{
    auto &arg0 = *(::cv::RNG_MT19937*)__op->NativePtr;
    auto __ret = (unsigned int) arg0;
    return __ret;
}

OpenCV::Cv::RNG_MT19937::operator float(OpenCV::Cv::RNG_MT19937^ __op)
{
    auto &arg0 = *(::cv::RNG_MT19937*)__op->NativePtr;
    auto __ret = (float) arg0;
    return __ret;
}

OpenCV::Cv::RNG_MT19937::operator double(OpenCV::Cv::RNG_MT19937^ __op)
{
    auto &arg0 = *(::cv::RNG_MT19937*)__op->NativePtr;
    auto __ret = (double) arg0;
    return __ret;
}

int OpenCV::Cv::RNG_MT19937::Uniform(int a, int b)
{
    auto __ret = ((::cv::RNG_MT19937*)NativePtr)->uniform(a, b);
    return __ret;
}

float OpenCV::Cv::RNG_MT19937::Uniform(float a, float b)
{
    auto __ret = ((::cv::RNG_MT19937*)NativePtr)->uniform(a, b);
    return __ret;
}

double OpenCV::Cv::RNG_MT19937::Uniform(double a, double b)
{
    auto __ret = ((::cv::RNG_MT19937*)NativePtr)->uniform(a, b);
    return __ret;
}

bool OpenCV::Cv::RNG_MT19937::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<RNG_MT19937^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::RNG_MT19937::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::RNG_MT19937::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::RNG_MT19937::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::RNG_MT19937*)object.ToPointer();
}
OpenCV::Cv::TermCriteria::TermCriteria(::cv::TermCriteria* native)
{
    NativePtr = native;
}

OpenCV::Cv::TermCriteria::TermCriteria(System::IntPtr native)
{
    auto __native = (::cv::TermCriteria*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::TermCriteria::~TermCriteria()
{
    delete NativePtr;
}

OpenCV::Cv::TermCriteria::!TermCriteria()
{
    delete NativePtr;
}

OpenCV::Cv::TermCriteria::TermCriteria()
{
    NativePtr = new ::cv::TermCriteria();
}

OpenCV::Cv::TermCriteria::TermCriteria(int type, int maxCount, double epsilon)
{
    NativePtr = new ::cv::TermCriteria(type, maxCount, epsilon);
}

bool OpenCV::Cv::TermCriteria::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<TermCriteria^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::TermCriteria::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::TermCriteria::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::TermCriteria::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::TermCriteria*)object.ToPointer();
}

int OpenCV::Cv::TermCriteria::Type::get()
{
    return ((::cv::TermCriteria*)NativePtr)->type;
}

void OpenCV::Cv::TermCriteria::Type::set(int value)
{
    ((::cv::TermCriteria*)NativePtr)->type = value;
}

int OpenCV::Cv::TermCriteria::MaxCount::get()
{
    return ((::cv::TermCriteria*)NativePtr)->maxCount;
}

void OpenCV::Cv::TermCriteria::MaxCount::set(int value)
{
    ((::cv::TermCriteria*)NativePtr)->maxCount = value;
}

double OpenCV::Cv::TermCriteria::Epsilon::get()
{
    return ((::cv::TermCriteria*)NativePtr)->epsilon;
}

void OpenCV::Cv::TermCriteria::Epsilon::set(double value)
{
    ((::cv::TermCriteria*)NativePtr)->epsilon = value;
}

OpenCV::Cv::PCA::PCA(::cv::PCA* native)
{
    NativePtr = native;
}

OpenCV::Cv::PCA::PCA(System::IntPtr native)
{
    auto __native = (::cv::PCA*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::PCA::~PCA()
{
    delete NativePtr;
}

OpenCV::Cv::PCA::!PCA()
{
    delete NativePtr;
}

OpenCV::Cv::PCA::PCA()
{
    NativePtr = new ::cv::PCA();
}

OpenCV::Cv::PCA::PCA(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, int maxComponents)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    NativePtr = new ::cv::PCA(arg0, arg1, flags, maxComponents);
}

OpenCV::Cv::PCA::PCA(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, double retainedVariance)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    NativePtr = new ::cv::PCA(arg0, arg1, flags, retainedVariance);
}

OpenCV::Cv::PCA^ OpenCV::Cv::PCA::ComputeVar(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, double retainedVariance)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    auto &__ret = ((::cv::PCA*)NativePtr)->computeVar(arg0, arg1, flags, retainedVariance);
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::PCA((::cv::PCA*)&__ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::PCA::Project(OpenCV::Cv::_InputArray^ vec)
{
    auto arg0 = *(::cv::_InputArray*)vec->NativePtr;
    auto __ret = ((::cv::PCA*)NativePtr)->project(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

void OpenCV::Cv::PCA::Project(OpenCV::Cv::_InputArray^ vec, OpenCV::Cv::_OutputArray^ result)
{
    auto arg0 = *(::cv::_InputArray*)vec->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)result->NativePtr;
    ((::cv::PCA*)NativePtr)->project(arg0, arg1);
}

OpenCV::Cv::Mat^ OpenCV::Cv::PCA::BackProject(OpenCV::Cv::_InputArray^ vec)
{
    auto arg0 = *(::cv::_InputArray*)vec->NativePtr;
    auto __ret = ((::cv::PCA*)NativePtr)->backProject(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

void OpenCV::Cv::PCA::BackProject(OpenCV::Cv::_InputArray^ vec, OpenCV::Cv::_OutputArray^ result)
{
    auto arg0 = *(::cv::_InputArray*)vec->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)result->NativePtr;
    ((::cv::PCA*)NativePtr)->backProject(arg0, arg1);
}

bool OpenCV::Cv::PCA::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<PCA^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::PCA::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::PCA::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::PCA::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::PCA*)object.ToPointer();
}

OpenCV::Cv::Mat^ OpenCV::Cv::PCA::Eigenvectors::get()
{
    return (&((::cv::PCA*)NativePtr)->eigenvectors == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::PCA*)NativePtr)->eigenvectors);
}

void OpenCV::Cv::PCA::Eigenvectors::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::PCA*)NativePtr)->eigenvectors = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::PCA::Eigenvalues::get()
{
    return (&((::cv::PCA*)NativePtr)->eigenvalues == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::PCA*)NativePtr)->eigenvalues);
}

void OpenCV::Cv::PCA::Eigenvalues::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::PCA*)NativePtr)->eigenvalues = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::PCA::Mean::get()
{
    return (&((::cv::PCA*)NativePtr)->mean == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::PCA*)NativePtr)->mean);
}

void OpenCV::Cv::PCA::Mean::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::PCA*)NativePtr)->mean = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::SVD::SVD(::cv::SVD* native)
{
    NativePtr = native;
}

OpenCV::Cv::SVD::SVD(System::IntPtr native)
{
    auto __native = (::cv::SVD*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::SVD::~SVD()
{
    delete NativePtr;
}

OpenCV::Cv::SVD::!SVD()
{
    delete NativePtr;
}

OpenCV::Cv::SVD::SVD()
{
    NativePtr = new ::cv::SVD();
}

OpenCV::Cv::SVD::SVD(OpenCV::Cv::_InputArray^ src, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    NativePtr = new ::cv::SVD(arg0, flags);
}

void OpenCV::Cv::SVD::Compute(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, OpenCV::Cv::_OutputArray^ u, OpenCV::Cv::_OutputArray^ vt, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)w->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)u->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)vt->NativePtr;
    ::cv::SVD::compute(arg0, arg1, arg2, arg3, flags);
}

void OpenCV::Cv::SVD::Compute(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)w->NativePtr;
    ::cv::SVD::compute(arg0, arg1, flags);
}

void OpenCV::Cv::SVD::BackSubst(OpenCV::Cv::_InputArray^ w, OpenCV::Cv::_InputArray^ u, OpenCV::Cv::_InputArray^ vt, OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)w->NativePtr;
    auto arg1 = *(::cv::_InputArray*)u->NativePtr;
    auto arg2 = *(::cv::_InputArray*)vt->NativePtr;
    auto arg3 = *(::cv::_InputArray*)rhs->NativePtr;
    auto arg4 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::SVD::backSubst(arg0, arg1, arg2, arg3, arg4);
}

void OpenCV::Cv::SVD::SolveZ(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::SVD::solveZ(arg0, arg1);
}

void OpenCV::Cv::SVD::BackSubst(OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)rhs->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ((::cv::SVD*)NativePtr)->backSubst(arg0, arg1);
}

bool OpenCV::Cv::SVD::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<SVD^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::SVD::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::SVD::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::SVD::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::SVD*)object.ToPointer();
}

OpenCV::Cv::Mat^ OpenCV::Cv::SVD::U::get()
{
    return (&((::cv::SVD*)NativePtr)->u == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::SVD*)NativePtr)->u);
}

void OpenCV::Cv::SVD::U::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::SVD*)NativePtr)->u = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::SVD::W::get()
{
    return (&((::cv::SVD*)NativePtr)->w == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::SVD*)NativePtr)->w);
}

void OpenCV::Cv::SVD::W::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::SVD*)NativePtr)->w = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Mat^ OpenCV::Cv::SVD::Vt::get()
{
    return (&((::cv::SVD*)NativePtr)->vt == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::SVD*)NativePtr)->vt);
}

void OpenCV::Cv::SVD::Vt::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::SVD*)NativePtr)->vt = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::LineIterator::LineIterator(::cv::LineIterator* native)
{
    NativePtr = native;
}

OpenCV::Cv::LineIterator::LineIterator(System::IntPtr native)
{
    auto __native = (::cv::LineIterator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::LineIterator::~LineIterator()
{
    delete NativePtr;
}

OpenCV::Cv::LineIterator::!LineIterator()
{
    delete NativePtr;
}

OpenCV::Cv::LineIterator^ OpenCV::Cv::LineIterator::operator++(OpenCV::Cv::LineIterator^ __op)
{
    auto &arg0 = *(::cv::LineIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::LineIterator((::cv::LineIterator*)&__ret);
}

bool OpenCV::Cv::LineIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<LineIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::LineIterator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::LineIterator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::LineIterator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::LineIterator*)object.ToPointer();
}

int OpenCV::Cv::LineIterator::Step::get()
{
    return ((::cv::LineIterator*)NativePtr)->step;
}

void OpenCV::Cv::LineIterator::Step::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->step = value;
}

int OpenCV::Cv::LineIterator::ElemSize::get()
{
    return ((::cv::LineIterator*)NativePtr)->elemSize;
}

void OpenCV::Cv::LineIterator::ElemSize::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->elemSize = value;
}

int OpenCV::Cv::LineIterator::Err::get()
{
    return ((::cv::LineIterator*)NativePtr)->err;
}

void OpenCV::Cv::LineIterator::Err::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->err = value;
}

int OpenCV::Cv::LineIterator::Count::get()
{
    return ((::cv::LineIterator*)NativePtr)->count;
}

void OpenCV::Cv::LineIterator::Count::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->count = value;
}

int OpenCV::Cv::LineIterator::MinusDelta::get()
{
    return ((::cv::LineIterator*)NativePtr)->minusDelta;
}

void OpenCV::Cv::LineIterator::MinusDelta::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->minusDelta = value;
}

int OpenCV::Cv::LineIterator::PlusDelta::get()
{
    return ((::cv::LineIterator*)NativePtr)->plusDelta;
}

void OpenCV::Cv::LineIterator::PlusDelta::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->plusDelta = value;
}

int OpenCV::Cv::LineIterator::MinusStep::get()
{
    return ((::cv::LineIterator*)NativePtr)->minusStep;
}

void OpenCV::Cv::LineIterator::MinusStep::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->minusStep = value;
}

int OpenCV::Cv::LineIterator::PlusStep::get()
{
    return ((::cv::LineIterator*)NativePtr)->plusStep;
}

void OpenCV::Cv::LineIterator::PlusStep::set(int value)
{
    ((::cv::LineIterator*)NativePtr)->plusStep = value;
}

OpenCV::Cv::MatConstIterator::MatConstIterator(::cv::MatConstIterator* native)
{
    NativePtr = native;
}

OpenCV::Cv::MatConstIterator::MatConstIterator(System::IntPtr native)
{
    auto __native = (::cv::MatConstIterator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::MatConstIterator::~MatConstIterator()
{
    delete NativePtr;
}

OpenCV::Cv::MatConstIterator::!MatConstIterator()
{
    delete NativePtr;
}

OpenCV::Cv::MatConstIterator::MatConstIterator()
{
    NativePtr = new ::cv::MatConstIterator();
}

OpenCV::Cv::MatConstIterator::MatConstIterator(OpenCV::Cv::Mat^ _m)
{
    auto arg0 = (::cv::Mat*)_m->NativePtr;
    NativePtr = new ::cv::MatConstIterator(arg0);
}

OpenCV::Cv::MatConstIterator::MatConstIterator(OpenCV::Cv::Mat^ _m, int _row, int _col)
{
    auto arg0 = (::cv::Mat*)_m->NativePtr;
    NativePtr = new ::cv::MatConstIterator(arg0, _row, _col);
}

OpenCV::Cv::MatConstIterator^ OpenCV::Cv::MatConstIterator::operator--(OpenCV::Cv::MatConstIterator^ __op)
{
    auto &arg0 = *(::cv::MatConstIterator*)__op->NativePtr;
    auto &__ret = -- arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::MatConstIterator((::cv::MatConstIterator*)&__ret);
}

OpenCV::Cv::MatConstIterator^ OpenCV::Cv::MatConstIterator::operator++(OpenCV::Cv::MatConstIterator^ __op)
{
    auto &arg0 = *(::cv::MatConstIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::MatConstIterator((::cv::MatConstIterator*)&__ret);
}

void OpenCV::Cv::MatConstIterator::Pos(int* _idx)
{
    auto arg0 = (int*)_idx;
    ((::cv::MatConstIterator*)NativePtr)->pos(arg0);
}

int OpenCV::Cv::MatConstIterator::Lpos()
{
    auto __ret = ((::cv::MatConstIterator*)NativePtr)->lpos();
    return __ret;
}

void OpenCV::Cv::MatConstIterator::Seek(int ofs, bool relative)
{
    ((::cv::MatConstIterator*)NativePtr)->seek(ofs, relative);
}

void OpenCV::Cv::MatConstIterator::Seek(int* _idx, bool relative)
{
    auto arg0 = (const int*)_idx;
    ((::cv::MatConstIterator*)NativePtr)->seek(arg0, relative);
}

bool OpenCV::Cv::MatConstIterator::operator==(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)b->NativePtr;
    auto __ret = arg0 == arg1;
    return __ret;
}

bool OpenCV::Cv::MatConstIterator::operator<(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)b->NativePtr;
    auto __ret = arg0 < arg1;
    return __ret;
}

bool OpenCV::Cv::MatConstIterator::operator>(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)b->NativePtr;
    auto __ret = arg0 > arg1;
    return __ret;
}

bool OpenCV::Cv::MatConstIterator::operator<=(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)b->NativePtr;
    auto __ret = arg0 <= arg1;
    return __ret;
}

bool OpenCV::Cv::MatConstIterator::operator>=(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)b->NativePtr;
    auto __ret = arg0 >= arg1;
    return __ret;
}

int OpenCV::Cv::MatConstIterator::operator-(OpenCV::Cv::MatConstIterator^ b, OpenCV::Cv::MatConstIterator^ a)
{
    auto &arg0 = *(::cv::MatConstIterator*)b->NativePtr;
    auto &arg1 = *(::cv::MatConstIterator*)a->NativePtr;
    auto __ret = arg0 - arg1;
    return __ret;
}

OpenCV::Cv::MatConstIterator^ OpenCV::Cv::MatConstIterator::operator+(OpenCV::Cv::MatConstIterator^ a, int ofs)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto __ret = arg0 + ofs;
    auto ____ret = new ::cv::MatConstIterator(__ret);
    return gcnew OpenCV::Cv::MatConstIterator((::cv::MatConstIterator*)____ret);
}

OpenCV::Cv::MatConstIterator^ OpenCV::Cv::MatConstIterator::operator+(int ofs, OpenCV::Cv::MatConstIterator^ a)
{
    auto &arg1 = *(::cv::MatConstIterator*)a->NativePtr;
    auto __ret = ofs + arg1;
    auto ____ret = new ::cv::MatConstIterator(__ret);
    return gcnew OpenCV::Cv::MatConstIterator((::cv::MatConstIterator*)____ret);
}

OpenCV::Cv::MatConstIterator^ OpenCV::Cv::MatConstIterator::operator-(OpenCV::Cv::MatConstIterator^ a, int ofs)
{
    auto &arg0 = *(::cv::MatConstIterator*)a->NativePtr;
    auto __ret = arg0 - ofs;
    auto ____ret = new ::cv::MatConstIterator(__ret);
    return gcnew OpenCV::Cv::MatConstIterator((::cv::MatConstIterator*)____ret);
}

bool OpenCV::Cv::MatConstIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<MatConstIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::MatConstIterator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::MatConstIterator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::MatConstIterator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::MatConstIterator*)object.ToPointer();
}

OpenCV::Cv::Mat^ OpenCV::Cv::MatConstIterator::M::get()
{
    return (((::cv::MatConstIterator*)NativePtr)->m == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)((::cv::MatConstIterator*)NativePtr)->m);
}

void OpenCV::Cv::MatConstIterator::M::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::MatConstIterator*)NativePtr)->m = (::cv::Mat*)value->NativePtr;
}

unsigned int OpenCV::Cv::MatConstIterator::ElemSize::get()
{
    return ((::cv::MatConstIterator*)NativePtr)->elemSize;
}

void OpenCV::Cv::MatConstIterator::ElemSize::set(unsigned int value)
{
    ((::cv::MatConstIterator*)NativePtr)->elemSize = (::size_t)value;
}

OpenCV::Cv::NAryMatIterator::NAryMatIterator(::cv::NAryMatIterator* native)
{
    NativePtr = native;
}

OpenCV::Cv::NAryMatIterator::NAryMatIterator(System::IntPtr native)
{
    auto __native = (::cv::NAryMatIterator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::NAryMatIterator::~NAryMatIterator()
{
    delete NativePtr;
}

OpenCV::Cv::NAryMatIterator::!NAryMatIterator()
{
    delete NativePtr;
}

OpenCV::Cv::NAryMatIterator^ OpenCV::Cv::NAryMatIterator::operator++(OpenCV::Cv::NAryMatIterator^ __op)
{
    auto &arg0 = *(::cv::NAryMatIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::NAryMatIterator((::cv::NAryMatIterator*)&__ret);
}

bool OpenCV::Cv::NAryMatIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<NAryMatIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::NAryMatIterator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::NAryMatIterator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::NAryMatIterator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::NAryMatIterator*)object.ToPointer();
}

OpenCV::Cv::Mat^ OpenCV::Cv::NAryMatIterator::Arrays::get()
{
    return (((::cv::NAryMatIterator*)NativePtr)->arrays == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)((::cv::NAryMatIterator*)NativePtr)->arrays);
}

OpenCV::Cv::Mat^ OpenCV::Cv::NAryMatIterator::Planes::get()
{
    return (((::cv::NAryMatIterator*)NativePtr)->planes == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)((::cv::NAryMatIterator*)NativePtr)->planes);
}

void OpenCV::Cv::NAryMatIterator::Planes::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::NAryMatIterator*)NativePtr)->planes = (::cv::Mat*)value->NativePtr;
}

int OpenCV::Cv::NAryMatIterator::Narrays::get()
{
    return ((::cv::NAryMatIterator*)NativePtr)->narrays;
}

void OpenCV::Cv::NAryMatIterator::Narrays::set(int value)
{
    ((::cv::NAryMatIterator*)NativePtr)->narrays = value;
}

unsigned int OpenCV::Cv::NAryMatIterator::Nplanes::get()
{
    return ((::cv::NAryMatIterator*)NativePtr)->nplanes;
}

void OpenCV::Cv::NAryMatIterator::Nplanes::set(unsigned int value)
{
    ((::cv::NAryMatIterator*)NativePtr)->nplanes = (::size_t)value;
}

unsigned int OpenCV::Cv::NAryMatIterator::Size::get()
{
    return ((::cv::NAryMatIterator*)NativePtr)->size;
}

void OpenCV::Cv::NAryMatIterator::Size::set(unsigned int value)
{
    ((::cv::NAryMatIterator*)NativePtr)->size = (::size_t)value;
}

OpenCV::Cv::SparseMat::Node::Node(::cv::SparseMat::Node* native)
{
    NativePtr = native;
}

OpenCV::Cv::SparseMat::Node::Node(System::IntPtr native)
{
    auto __native = (::cv::SparseMat::Node*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::SparseMat::Node::~Node()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::Node::!Node()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::Node::Node()
{
    NativePtr = new ::cv::SparseMat::Node();
}

System::IntPtr OpenCV::Cv::SparseMat::Node::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::SparseMat::Node::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::SparseMat::Node*)object.ToPointer();
}

unsigned int OpenCV::Cv::SparseMat::Node::Hashval::get()
{
    return ((::cv::SparseMat::Node*)NativePtr)->hashval;
}

void OpenCV::Cv::SparseMat::Node::Hashval::set(unsigned int value)
{
    ((::cv::SparseMat::Node*)NativePtr)->hashval = (::size_t)value;
}

unsigned int OpenCV::Cv::SparseMat::Node::Next::get()
{
    return ((::cv::SparseMat::Node*)NativePtr)->next;
}

void OpenCV::Cv::SparseMat::Node::Next::set(unsigned int value)
{
    ((::cv::SparseMat::Node*)NativePtr)->next = (::size_t)value;
}

cli::array<int>^ OpenCV::Cv::SparseMat::Node::Idx::get()
{
    return nullptr;
}

OpenCV::Cv::SparseMat::Hdr::Hdr(::cv::SparseMat::Hdr* native)
{
    NativePtr = native;
}

OpenCV::Cv::SparseMat::Hdr::Hdr(System::IntPtr native)
{
    auto __native = (::cv::SparseMat::Hdr*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::SparseMat::Hdr::~Hdr()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::Hdr::!Hdr()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::Hdr::Hdr(int _dims, int* _sizes, int _type)
{
    auto arg1 = (const int*)_sizes;
    NativePtr = new ::cv::SparseMat::Hdr(_dims, arg1, _type);
}

void OpenCV::Cv::SparseMat::Hdr::Clear()
{
    ((::cv::SparseMat::Hdr*)NativePtr)->clear();
}

System::IntPtr OpenCV::Cv::SparseMat::Hdr::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::SparseMat::Hdr::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::SparseMat::Hdr*)object.ToPointer();
}

int OpenCV::Cv::SparseMat::Hdr::Refcount::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->refcount;
}

void OpenCV::Cv::SparseMat::Hdr::Refcount::set(int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->refcount = value;
}

int OpenCV::Cv::SparseMat::Hdr::Dims::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->dims;
}

void OpenCV::Cv::SparseMat::Hdr::Dims::set(int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->dims = value;
}

int OpenCV::Cv::SparseMat::Hdr::ValueOffset::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->valueOffset;
}

void OpenCV::Cv::SparseMat::Hdr::ValueOffset::set(int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->valueOffset = value;
}

unsigned int OpenCV::Cv::SparseMat::Hdr::NodeSize::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->nodeSize;
}

void OpenCV::Cv::SparseMat::Hdr::NodeSize::set(unsigned int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->nodeSize = (::size_t)value;
}

unsigned int OpenCV::Cv::SparseMat::Hdr::NodeCount::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->nodeCount;
}

void OpenCV::Cv::SparseMat::Hdr::NodeCount::set(unsigned int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->nodeCount = (::size_t)value;
}

unsigned int OpenCV::Cv::SparseMat::Hdr::FreeList::get()
{
    return ((::cv::SparseMat::Hdr*)NativePtr)->freeList;
}

void OpenCV::Cv::SparseMat::Hdr::FreeList::set(unsigned int value)
{
    ((::cv::SparseMat::Hdr*)NativePtr)->freeList = (::size_t)value;
}

System::Collections::Generic::List<unsigned int>^ OpenCV::Cv::SparseMat::Hdr::Hashtab::get()
{
    auto _tmp__Hashtab = gcnew System::Collections::Generic::List<unsigned int>();
    for(auto _element : ((::cv::SparseMat::Hdr*)NativePtr)->hashtab)
    {
        auto _marshalElement = _element;
        _tmp__Hashtab->Add(_marshalElement);
    }
    return _tmp__Hashtab;
}

void OpenCV::Cv::SparseMat::Hdr::Hashtab::set(System::Collections::Generic::List<unsigned int>^ value)
{
    auto _tmpvalue = std::vector<::size_t>();
    for each(unsigned int _element in value)
    {
        auto _marshalElement = (::size_t)_element;
        _tmpvalue.push_back(_marshalElement);
    }
    ((::cv::SparseMat::Hdr*)NativePtr)->hashtab = _tmpvalue;
}

cli::array<int>^ OpenCV::Cv::SparseMat::Hdr::Size::get()
{
    return nullptr;
}

OpenCV::Cv::SparseMat::SparseMat(::cv::SparseMat* native)
{
    NativePtr = native;
}

OpenCV::Cv::SparseMat::SparseMat(System::IntPtr native)
{
    auto __native = (::cv::SparseMat*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::SparseMat::~SparseMat()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::!SparseMat()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMat::SparseMat()
{
    NativePtr = new ::cv::SparseMat();
}

OpenCV::Cv::SparseMat::SparseMat(int dims, int* _sizes, int _type)
{
    auto arg1 = (const int*)_sizes;
    NativePtr = new ::cv::SparseMat(dims, arg1, _type);
}

OpenCV::Cv::SparseMat::SparseMat(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    NativePtr = new ::cv::SparseMat(arg0);
}

OpenCV::Cv::SparseMat^ OpenCV::Cv::SparseMat::Clone()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->clone();
    auto ____ret = new ::cv::SparseMat(__ret);
    return gcnew OpenCV::Cv::SparseMat((::cv::SparseMat*)____ret);
}

void OpenCV::Cv::SparseMat::CopyTo(OpenCV::Cv::SparseMat^ m)
{
    auto &arg0 = *(::cv::SparseMat*)m->NativePtr;
    ((::cv::SparseMat*)NativePtr)->copyTo(arg0);
}

void OpenCV::Cv::SparseMat::CopyTo(OpenCV::Cv::Mat^ m)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    ((::cv::SparseMat*)NativePtr)->copyTo(arg0);
}

void OpenCV::Cv::SparseMat::ConvertTo(OpenCV::Cv::SparseMat^ m, int rtype, double alpha)
{
    auto &arg0 = *(::cv::SparseMat*)m->NativePtr;
    ((::cv::SparseMat*)NativePtr)->convertTo(arg0, rtype, alpha);
}

void OpenCV::Cv::SparseMat::ConvertTo(OpenCV::Cv::Mat^ m, int rtype, double alpha, double beta)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    ((::cv::SparseMat*)NativePtr)->convertTo(arg0, rtype, alpha, beta);
}

void OpenCV::Cv::SparseMat::AssignTo(OpenCV::Cv::SparseMat^ m, int type)
{
    auto &arg0 = *(::cv::SparseMat*)m->NativePtr;
    ((::cv::SparseMat*)NativePtr)->assignTo(arg0, type);
}

void OpenCV::Cv::SparseMat::Create(int dims, int* _sizes, int _type)
{
    auto arg1 = (const int*)_sizes;
    ((::cv::SparseMat*)NativePtr)->create(dims, arg1, _type);
}

void OpenCV::Cv::SparseMat::Clear()
{
    ((::cv::SparseMat*)NativePtr)->clear();
}

void OpenCV::Cv::SparseMat::Addref()
{
    ((::cv::SparseMat*)NativePtr)->addref();
}

void OpenCV::Cv::SparseMat::Release()
{
    ((::cv::SparseMat*)NativePtr)->release();
}

unsigned int OpenCV::Cv::SparseMat::ElemSize()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->elemSize();
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::ElemSize1()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->elemSize1();
    return __ret;
}

int OpenCV::Cv::SparseMat::Type()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->type();
    return __ret;
}

int OpenCV::Cv::SparseMat::Depth()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->depth();
    return __ret;
}

int OpenCV::Cv::SparseMat::Channels()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->channels();
    return __ret;
}

int* OpenCV::Cv::SparseMat::Size()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->size();
    return const_cast<int*>(__ret);
}

int OpenCV::Cv::SparseMat::Size(int i)
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->size(i);
    return __ret;
}

int OpenCV::Cv::SparseMat::Dims()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->dims();
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::Nzcount()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->nzcount();
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::Hash(int i0)
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->hash(i0);
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::Hash(int i0, int i1)
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->hash(i0, i1);
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::Hash(int i0, int i1, int i2)
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->hash(i0, i1, i2);
    return __ret;
}

unsigned int OpenCV::Cv::SparseMat::Hash(int* idx)
{
    auto arg0 = (const int*)idx;
    auto __ret = ((::cv::SparseMat*)NativePtr)->hash(arg0);
    return __ret;
}

void OpenCV::Cv::SparseMat::Erase(int i0, int i1, unsigned int* hashval)
{
    auto arg2 = (::size_t*)hashval;
    ((::cv::SparseMat*)NativePtr)->erase(i0, i1, arg2);
}

void OpenCV::Cv::SparseMat::Erase(int i0, int i1, int i2, unsigned int* hashval)
{
    auto arg3 = (::size_t*)hashval;
    ((::cv::SparseMat*)NativePtr)->erase(i0, i1, i2, arg3);
}

void OpenCV::Cv::SparseMat::Erase(int* idx, unsigned int* hashval)
{
    auto arg0 = (const int*)idx;
    auto arg1 = (::size_t*)hashval;
    ((::cv::SparseMat*)NativePtr)->erase(arg0, arg1);
}

OpenCV::Cv::SparseMatIterator^ OpenCV::Cv::SparseMat::Begin()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->begin();
    auto ____ret = new ::cv::SparseMatIterator(__ret);
    return gcnew OpenCV::Cv::SparseMatIterator((::cv::SparseMatIterator*)____ret);
}

OpenCV::Cv::SparseMatIterator^ OpenCV::Cv::SparseMat::End()
{
    auto __ret = ((::cv::SparseMat*)NativePtr)->end();
    auto ____ret = new ::cv::SparseMatIterator(__ret);
    return gcnew OpenCV::Cv::SparseMatIterator((::cv::SparseMatIterator*)____ret);
}

void OpenCV::Cv::SparseMat::RemoveNode(unsigned int hidx, unsigned int nidx, unsigned int previdx)
{
    ((::cv::SparseMat*)NativePtr)->removeNode(hidx, nidx, previdx);
}

void OpenCV::Cv::SparseMat::ResizeHashTab(unsigned int newsize)
{
    ((::cv::SparseMat*)NativePtr)->resizeHashTab(newsize);
}

bool OpenCV::Cv::SparseMat::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<SparseMat^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::SparseMat::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::SparseMat::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::SparseMat::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::SparseMat*)object.ToPointer();
}

int OpenCV::Cv::SparseMat::Flags::get()
{
    return ((::cv::SparseMat*)NativePtr)->flags;
}

void OpenCV::Cv::SparseMat::Flags::set(int value)
{
    ((::cv::SparseMat*)NativePtr)->flags = value;
}

OpenCV::Cv::SparseMat::Hdr^ OpenCV::Cv::SparseMat::hdr::get()
{
    return (((::cv::SparseMat*)NativePtr)->hdr == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMat::Hdr((::cv::SparseMat::Hdr*)((::cv::SparseMat*)NativePtr)->hdr);
}

void OpenCV::Cv::SparseMat::hdr::set(OpenCV::Cv::SparseMat::Hdr^ value)
{
    ((::cv::SparseMat*)NativePtr)->hdr = (::cv::SparseMat::Hdr*)value->NativePtr;
}

generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Ref(int i0, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<bool>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned char>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<short>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned short>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<int>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned int>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<long long>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned long long>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<float>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<double>(i0, arg1);
        return (_Tp)__ret;
    }
    auto arg1 = (::size_t*)hashval;
    auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<gcroot<System::Object^>>(i0, arg1);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Ref(int i0, int i1, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<bool>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned char>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<short>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned short>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<int>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned int>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<long long>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned long long>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<float>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<double>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    auto arg2 = (::size_t*)hashval;
    auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<gcroot<System::Object^>>(i0, i1, arg2);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Ref(int i0, int i1, int i2, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<bool>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned char>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<short>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned short>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<int>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned int>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<long long>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned long long>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<float>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<double>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    auto arg3 = (::size_t*)hashval;
    auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<gcroot<System::Object^>>(i0, i1, i2, arg3);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Ref(int* idx, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<bool>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned char>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<short>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned short>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<int>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned int>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<long long>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<unsigned long long>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<float>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<double>(arg0, arg1);
        return (_Tp)__ret;
    }
    auto arg0 = (const int*)idx;
    auto arg1 = (::size_t*)hashval;
    auto &__ret = ((::cv::SparseMat*)NativePtr)->ref<gcroot<System::Object^>>(arg0, arg1);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Value(int i0, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<bool>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned char>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<short>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned short>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<int>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned int>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<long long>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned long long>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<float>(i0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<double>(i0, arg1);
        return (_Tp)__ret;
    }
    auto arg1 = (::size_t*)hashval;
    auto __ret = ((::cv::SparseMat*)NativePtr)->value<gcroot<System::Object^>>(i0, arg1);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Value(int i0, int i1, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<bool>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned char>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<short>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned short>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<int>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned int>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<long long>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned long long>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<float>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg2 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<double>(i0, i1, arg2);
        return (_Tp)__ret;
    }
    auto arg2 = (::size_t*)hashval;
    auto __ret = ((::cv::SparseMat*)NativePtr)->value<gcroot<System::Object^>>(i0, i1, arg2);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Value(int i0, int i1, int i2, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<bool>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned char>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<short>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned short>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<int>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned int>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<long long>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned long long>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<float>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg3 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<double>(i0, i1, i2, arg3);
        return (_Tp)__ret;
    }
    auto arg3 = (::size_t*)hashval;
    auto __ret = ((::cv::SparseMat*)NativePtr)->value<gcroot<System::Object^>>(i0, i1, i2, arg3);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Value(int* idx, unsigned int* hashval)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<bool>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned char>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<short>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned short>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<int>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned int>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<long long>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<unsigned long long>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<float>(arg0, arg1);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg0 = (const int*)idx;
        auto arg1 = (::size_t*)hashval;
        auto __ret = ((::cv::SparseMat*)NativePtr)->value<double>(arg0, arg1);
        return (_Tp)__ret;
    }
    auto arg0 = (const int*)idx;
    auto arg1 = (::size_t*)hashval;
    auto __ret = ((::cv::SparseMat*)NativePtr)->value<gcroot<System::Object^>>(arg0, arg1);
    return (_Tp)(System::Object^)__ret;
}


generic<typename _Tp>
_Tp OpenCV::Cv::SparseMat::Value(OpenCV::Cv::SparseMat::Node^ n)
{
    if (_Tp::typeid == bool::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<bool>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<unsigned char>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<short>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<unsigned short>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<int>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<unsigned int>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<long long>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<unsigned long long>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<float>(arg0);
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
        auto &__ret = ((::cv::SparseMat*)NativePtr)->value<double>(arg0);
        return (_Tp)__ret;
    }
    auto arg0 = (::cv::SparseMat::Node*)n->NativePtr;
    auto &__ret = ((::cv::SparseMat*)NativePtr)->value<gcroot<System::Object^>>(arg0);
    return (_Tp)(System::Object^)__ret;
}

OpenCV::Cv::SparseMatConstIterator::SparseMatConstIterator(::cv::SparseMatConstIterator* native)
{
    NativePtr = native;
}

OpenCV::Cv::SparseMatConstIterator::SparseMatConstIterator(System::IntPtr native)
{
    auto __native = (::cv::SparseMatConstIterator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::SparseMatConstIterator::~SparseMatConstIterator()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMatConstIterator::!SparseMatConstIterator()
{
    delete NativePtr;
}

OpenCV::Cv::SparseMatConstIterator::SparseMatConstIterator()
{
    NativePtr = new ::cv::SparseMatConstIterator();
}

OpenCV::Cv::SparseMatConstIterator::SparseMatConstIterator(OpenCV::Cv::SparseMat^ _m)
{
    auto arg0 = (::cv::SparseMat*)_m->NativePtr;
    NativePtr = new ::cv::SparseMatConstIterator(arg0);
}

OpenCV::Cv::SparseMat::Node^ OpenCV::Cv::SparseMatConstIterator::Node()
{
    auto __ret = ((::cv::SparseMatConstIterator*)NativePtr)->node();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMat::Node((::cv::SparseMat::Node*)__ret);
}

OpenCV::Cv::SparseMatConstIterator^ OpenCV::Cv::SparseMatConstIterator::operator++(OpenCV::Cv::SparseMatConstIterator^ __op)
{
    auto &arg0 = *(::cv::SparseMatConstIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMatConstIterator((::cv::SparseMatConstIterator*)&__ret);
}

void OpenCV::Cv::SparseMatConstIterator::SeekEnd()
{
    ((::cv::SparseMatConstIterator*)NativePtr)->seekEnd();
}

bool OpenCV::Cv::SparseMatConstIterator::operator==(OpenCV::Cv::SparseMatConstIterator^ it1, OpenCV::Cv::SparseMatConstIterator^ it2)
{
    auto &arg0 = *(::cv::SparseMatConstIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::SparseMatConstIterator*)it2->NativePtr;
    auto __ret = arg0 == arg1;
    return __ret;
}

bool OpenCV::Cv::SparseMatConstIterator::operator!=(OpenCV::Cv::SparseMatConstIterator^ it1, OpenCV::Cv::SparseMatConstIterator^ it2)
{
    auto &arg0 = *(::cv::SparseMatConstIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::SparseMatConstIterator*)it2->NativePtr;
    auto __ret = arg0 != arg1;
    return __ret;
}

bool OpenCV::Cv::SparseMatConstIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<SparseMatConstIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::SparseMatConstIterator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::SparseMatConstIterator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::SparseMatConstIterator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::SparseMatConstIterator*)object.ToPointer();
}

OpenCV::Cv::SparseMat^ OpenCV::Cv::SparseMatConstIterator::M::get()
{
    return (((::cv::SparseMatConstIterator*)NativePtr)->m == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMat((::cv::SparseMat*)((::cv::SparseMatConstIterator*)NativePtr)->m);
}

void OpenCV::Cv::SparseMatConstIterator::M::set(OpenCV::Cv::SparseMat^ value)
{
    ((::cv::SparseMatConstIterator*)NativePtr)->m = (::cv::SparseMat*)value->NativePtr;
}

unsigned int OpenCV::Cv::SparseMatConstIterator::Hashidx::get()
{
    return ((::cv::SparseMatConstIterator*)NativePtr)->hashidx;
}

void OpenCV::Cv::SparseMatConstIterator::Hashidx::set(unsigned int value)
{
    ((::cv::SparseMatConstIterator*)NativePtr)->hashidx = (::size_t)value;
}

generic<typename _Tp>
_Tp OpenCV::Cv::SparseMatConstIterator::Value()
{
    if (_Tp::typeid == bool::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<bool>();
        return (_Tp)const_cast<bool&>(__ret);
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<unsigned char>();
        return (_Tp)const_cast<unsigned char&>(__ret);
    }
    if (_Tp::typeid == short::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<short>();
        return (_Tp)const_cast<short&>(__ret);
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<unsigned short>();
        return (_Tp)const_cast<unsigned short&>(__ret);
    }
    if (_Tp::typeid == int::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<int>();
        return (_Tp)const_cast<int&>(__ret);
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<unsigned int>();
        return (_Tp)const_cast<unsigned int&>(__ret);
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<long long>();
        return (_Tp)const_cast<long long&>(__ret);
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<unsigned long long>();
        return (_Tp)const_cast<unsigned long long&>(__ret);
    }
    if (_Tp::typeid == float::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<float>();
        return (_Tp)const_cast<float&>(__ret);
    }
    if (_Tp::typeid == double::typeid)
    {
        auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<double>();
        return (_Tp)const_cast<double&>(__ret);
    }
    auto &__ret = ((::cv::SparseMatConstIterator*)NativePtr)->value<gcroot<System::Object^>>();
    return (_Tp)(System::Object^)__ret;
}

OpenCV::Cv::SparseMatIterator::SparseMatIterator(::cv::SparseMatIterator* native)
    : OpenCV::Cv::SparseMatConstIterator((::cv::SparseMatConstIterator*)native)
{
}

OpenCV::Cv::SparseMatIterator::SparseMatIterator(System::IntPtr native)
    : OpenCV::Cv::SparseMatConstIterator(native)
{
    auto __native = (::cv::SparseMatIterator*)native.ToPointer();
}

OpenCV::Cv::SparseMatIterator::~SparseMatIterator()
{
}

OpenCV::Cv::SparseMatIterator::!SparseMatIterator()
{
}

OpenCV::Cv::SparseMatIterator::SparseMatIterator()
    : OpenCV::Cv::SparseMatConstIterator((::cv::SparseMatConstIterator*)nullptr)
{
    NativePtr = new ::cv::SparseMatIterator();
}

OpenCV::Cv::SparseMatIterator::SparseMatIterator(OpenCV::Cv::SparseMat^ _m)
    : OpenCV::Cv::SparseMatConstIterator((::cv::SparseMatConstIterator*)nullptr)
{
    auto arg0 = (::cv::SparseMat*)_m->NativePtr;
    NativePtr = new ::cv::SparseMatIterator(arg0);
}

OpenCV::Cv::SparseMat::Node^ OpenCV::Cv::SparseMatIterator::Node()
{
    auto __ret = ((::cv::SparseMatIterator*)NativePtr)->node();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMat::Node((::cv::SparseMat::Node*)__ret);
}

OpenCV::Cv::SparseMatIterator^ OpenCV::Cv::SparseMatIterator::operator++(OpenCV::Cv::SparseMatIterator^ __op)
{
    auto &arg0 = *(::cv::SparseMatIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::SparseMatIterator((::cv::SparseMatIterator*)&__ret);
}

bool OpenCV::Cv::SparseMatIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<SparseMatIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::SparseMatIterator::GetHashCode()
{
    return (int)NativePtr;
}

generic<typename _Tp>
_Tp OpenCV::Cv::SparseMatIterator::Value()
{
    if (_Tp::typeid == bool::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<bool>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned char::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<unsigned char>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == short::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<short>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned short::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<unsigned short>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == int::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<int>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned int::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<unsigned int>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == long long::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<long long>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == unsigned long long::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<unsigned long long>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == float::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<float>();
        return (_Tp)__ret;
    }
    if (_Tp::typeid == double::typeid)
    {
        auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<double>();
        return (_Tp)__ret;
    }
    auto &__ret = ((::cv::SparseMatIterator*)NativePtr)->value<gcroot<System::Object^>>();
    return (_Tp)(System::Object^)__ret;
}

OpenCV::Cv::KDTree::Node::Node(::cv::KDTree::Node* native)
{
    NativePtr = native;
}

OpenCV::Cv::KDTree::Node::Node(System::IntPtr native)
{
    auto __native = (::cv::KDTree::Node*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::KDTree::Node::~Node()
{
    delete NativePtr;
}

OpenCV::Cv::KDTree::Node::!Node()
{
    delete NativePtr;
}

OpenCV::Cv::KDTree::Node::Node()
{
    NativePtr = new ::cv::KDTree::Node();
}

OpenCV::Cv::KDTree::Node::Node(int _idx, int _left, int _right, float _boundary)
{
    NativePtr = new ::cv::KDTree::Node(_idx, _left, _right, _boundary);
}

System::IntPtr OpenCV::Cv::KDTree::Node::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::KDTree::Node::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::KDTree::Node*)object.ToPointer();
}

int OpenCV::Cv::KDTree::Node::Idx::get()
{
    return ((::cv::KDTree::Node*)NativePtr)->idx;
}

void OpenCV::Cv::KDTree::Node::Idx::set(int value)
{
    ((::cv::KDTree::Node*)NativePtr)->idx = value;
}

int OpenCV::Cv::KDTree::Node::Left::get()
{
    return ((::cv::KDTree::Node*)NativePtr)->left;
}

void OpenCV::Cv::KDTree::Node::Left::set(int value)
{
    ((::cv::KDTree::Node*)NativePtr)->left = value;
}

int OpenCV::Cv::KDTree::Node::Right::get()
{
    return ((::cv::KDTree::Node*)NativePtr)->right;
}

void OpenCV::Cv::KDTree::Node::Right::set(int value)
{
    ((::cv::KDTree::Node*)NativePtr)->right = value;
}

float OpenCV::Cv::KDTree::Node::Boundary::get()
{
    return ((::cv::KDTree::Node*)NativePtr)->boundary;
}

void OpenCV::Cv::KDTree::Node::Boundary::set(float value)
{
    ((::cv::KDTree::Node*)NativePtr)->boundary = value;
}

OpenCV::Cv::KDTree::KDTree(::cv::KDTree* native)
{
    NativePtr = native;
}

OpenCV::Cv::KDTree::KDTree(System::IntPtr native)
{
    auto __native = (::cv::KDTree*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::KDTree::~KDTree()
{
    delete NativePtr;
}

OpenCV::Cv::KDTree::!KDTree()
{
    delete NativePtr;
}

OpenCV::Cv::KDTree::KDTree()
{
    NativePtr = new ::cv::KDTree();
}

OpenCV::Cv::KDTree::KDTree(OpenCV::Cv::_InputArray^ points, bool copyAndReorderPoints)
{
    auto arg0 = *(::cv::_InputArray*)points->NativePtr;
    NativePtr = new ::cv::KDTree(arg0, copyAndReorderPoints);
}

OpenCV::Cv::KDTree::KDTree(OpenCV::Cv::_InputArray^ points, OpenCV::Cv::_InputArray^ _labels, bool copyAndReorderPoints)
{
    auto arg0 = *(::cv::_InputArray*)points->NativePtr;
    auto arg1 = *(::cv::_InputArray*)_labels->NativePtr;
    NativePtr = new ::cv::KDTree(arg0, arg1, copyAndReorderPoints);
}

void OpenCV::Cv::KDTree::Build(OpenCV::Cv::_InputArray^ points, bool copyAndReorderPoints)
{
    auto arg0 = *(::cv::_InputArray*)points->NativePtr;
    ((::cv::KDTree*)NativePtr)->build(arg0, copyAndReorderPoints);
}

void OpenCV::Cv::KDTree::Build(OpenCV::Cv::_InputArray^ points, OpenCV::Cv::_InputArray^ labels, bool copyAndReorderPoints)
{
    auto arg0 = *(::cv::_InputArray*)points->NativePtr;
    auto arg1 = *(::cv::_InputArray*)labels->NativePtr;
    ((::cv::KDTree*)NativePtr)->build(arg0, arg1, copyAndReorderPoints);
}

int OpenCV::Cv::KDTree::FindNearest(OpenCV::Cv::_InputArray^ vec, int K, int Emax, OpenCV::Cv::_OutputArray^ neighborsIdx, OpenCV::Cv::_OutputArray^ neighbors, OpenCV::Cv::_OutputArray^ dist, OpenCV::Cv::_OutputArray^ labels)
{
    auto arg0 = *(::cv::_InputArray*)vec->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)neighborsIdx->NativePtr;
    auto arg4 = *(::cv::_OutputArray*)neighbors->NativePtr;
    auto arg5 = *(::cv::_OutputArray*)dist->NativePtr;
    auto arg6 = *(::cv::_OutputArray*)labels->NativePtr;
    auto __ret = ((::cv::KDTree*)NativePtr)->findNearest(arg0, K, Emax, arg3, arg4, arg5, arg6);
    return __ret;
}

void OpenCV::Cv::KDTree::FindOrthoRange(OpenCV::Cv::_InputArray^ minBounds, OpenCV::Cv::_InputArray^ maxBounds, OpenCV::Cv::_OutputArray^ neighborsIdx, OpenCV::Cv::_OutputArray^ neighbors, OpenCV::Cv::_OutputArray^ labels)
{
    auto arg0 = *(::cv::_InputArray*)minBounds->NativePtr;
    auto arg1 = *(::cv::_InputArray*)maxBounds->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)neighborsIdx->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)neighbors->NativePtr;
    auto arg4 = *(::cv::_OutputArray*)labels->NativePtr;
    ((::cv::KDTree*)NativePtr)->findOrthoRange(arg0, arg1, arg2, arg3, arg4);
}

void OpenCV::Cv::KDTree::GetPoints(OpenCV::Cv::_InputArray^ idx, OpenCV::Cv::_OutputArray^ pts, OpenCV::Cv::_OutputArray^ labels)
{
    auto arg0 = *(::cv::_InputArray*)idx->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)pts->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)labels->NativePtr;
    ((::cv::KDTree*)NativePtr)->getPoints(arg0, arg1, arg2);
}

float* OpenCV::Cv::KDTree::GetPoint(int ptidx, int* label)
{
    auto arg1 = (int*)label;
    auto __ret = ((::cv::KDTree*)NativePtr)->getPoint(ptidx, arg1);
    return const_cast<float*>(__ret);
}

int OpenCV::Cv::KDTree::Dims()
{
    auto __ret = ((::cv::KDTree*)NativePtr)->dims();
    return __ret;
}

bool OpenCV::Cv::KDTree::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<KDTree^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::KDTree::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::KDTree::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::KDTree::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::KDTree*)object.ToPointer();
}

System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>^ OpenCV::Cv::KDTree::Nodes::get()
{
    auto _tmp__Nodes = gcnew System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>();
    for(auto _element : ((::cv::KDTree*)NativePtr)->nodes)
    {
        auto ___element = new ::cv::KDTree::Node(_element);
        auto _marshalElement = gcnew OpenCV::Cv::KDTree::Node((::cv::KDTree::Node*)___element);
        _tmp__Nodes->Add(_marshalElement);
    }
    return _tmp__Nodes;
}

void OpenCV::Cv::KDTree::Nodes::set(System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>^ value)
{
    auto _tmpvalue = std::vector<::cv::KDTree::Node>();
    for each(OpenCV::Cv::KDTree::Node^ _element in value)
    {
        auto _marshalElement = *(::cv::KDTree::Node*)_element->NativePtr;
        _tmpvalue.push_back(_marshalElement);
    }
    ((::cv::KDTree*)NativePtr)->nodes = _tmpvalue;
}

OpenCV::Cv::Mat^ OpenCV::Cv::KDTree::Points::get()
{
    return (&((::cv::KDTree*)NativePtr)->points == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::KDTree*)NativePtr)->points);
}

void OpenCV::Cv::KDTree::Points::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::KDTree*)NativePtr)->points = *(::cv::Mat*)value->NativePtr;
}

System::Collections::Generic::List<int>^ OpenCV::Cv::KDTree::Labels::get()
{
    auto _tmp__Labels = gcnew System::Collections::Generic::List<int>();
    for(auto _element : ((::cv::KDTree*)NativePtr)->labels)
    {
        auto _marshalElement = _element;
        _tmp__Labels->Add(_marshalElement);
    }
    return _tmp__Labels;
}

void OpenCV::Cv::KDTree::Labels::set(System::Collections::Generic::List<int>^ value)
{
    auto _tmpvalue = std::vector<int>();
    for each(int _element in value)
    {
        auto _marshalElement = _element;
        _tmpvalue.push_back(_marshalElement);
    }
    ((::cv::KDTree*)NativePtr)->labels = _tmpvalue;
}

int OpenCV::Cv::KDTree::MaxDepth::get()
{
    return ((::cv::KDTree*)NativePtr)->maxDepth;
}

void OpenCV::Cv::KDTree::MaxDepth::set(int value)
{
    ((::cv::KDTree*)NativePtr)->maxDepth = value;
}

int OpenCV::Cv::KDTree::NormType::get()
{
    return ((::cv::KDTree*)NativePtr)->normType;
}

void OpenCV::Cv::KDTree::NormType::set(int value)
{
    ((::cv::KDTree*)NativePtr)->normType = value;
}

OpenCV::Cv::FileStorage::FileStorage(::cv::FileStorage* native)
{
    NativePtr = native;
}

OpenCV::Cv::FileStorage::FileStorage(System::IntPtr native)
{
    auto __native = (::cv::FileStorage*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::FileStorage::~FileStorage()
{
    delete NativePtr;
}

OpenCV::Cv::FileStorage::!FileStorage()
{
    delete NativePtr;
}

OpenCV::Cv::FileStorage::FileStorage()
{
    NativePtr = new ::cv::FileStorage();
}

OpenCV::Cv::FileStorage::FileStorage(System::String^ source, int flags, System::String^ encoding)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(source);
    auto arg2 = clix::marshalString<clix::E_UTF8>(encoding);
    NativePtr = new ::cv::FileStorage(arg0, flags, arg2);
}

bool OpenCV::Cv::FileStorage::Open(System::String^ filename, int flags, System::String^ encoding)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(filename);
    auto arg2 = clix::marshalString<clix::E_UTF8>(encoding);
    auto __ret = ((::cv::FileStorage*)NativePtr)->open(arg0, flags, arg2);
    return __ret;
}

bool OpenCV::Cv::FileStorage::IsOpened()
{
    auto __ret = ((::cv::FileStorage*)NativePtr)->isOpened();
    return __ret;
}

void OpenCV::Cv::FileStorage::Release()
{
    ((::cv::FileStorage*)NativePtr)->release();
}

System::String^ OpenCV::Cv::FileStorage::ReleaseAndGetString()
{
    auto __ret = ((::cv::FileStorage*)NativePtr)->releaseAndGetString();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

OpenCV::Cv::FileNode^ OpenCV::Cv::FileStorage::GetFirstTopLevelNode()
{
    auto __ret = ((::cv::FileStorage*)NativePtr)->getFirstTopLevelNode();
    auto ____ret = new ::cv::FileNode(__ret);
    return gcnew OpenCV::Cv::FileNode((::cv::FileNode*)____ret);
}

OpenCV::Cv::FileNode^ OpenCV::Cv::FileStorage::Root(int streamidx)
{
    auto __ret = ((::cv::FileStorage*)NativePtr)->root(streamidx);
    auto ____ret = new ::cv::FileNode(__ret);
    return gcnew OpenCV::Cv::FileNode((::cv::FileNode*)____ret);
}

void OpenCV::Cv::FileStorage::WriteObj(System::String^ name, void* obj)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg1 = (const void*)obj;
    ((::cv::FileStorage*)NativePtr)->writeObj(arg0, arg1);
}

System::String^ OpenCV::Cv::FileStorage::GetDefaultObjectName(System::String^ filename)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(filename);
    auto __ret = ::cv::FileStorage::getDefaultObjectName(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

bool OpenCV::Cv::FileStorage::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<FileStorage^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::FileStorage::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::FileStorage::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::FileStorage::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::FileStorage*)object.ToPointer();
}

OpenCV::Cv::FileNode^ OpenCV::Cv::FileStorage::default::get(System::String^ nodename)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(nodename);
    auto __ret = ((::cv::FileStorage*)NativePtr)->operator[](arg0);
    auto ____ret = new ::cv::FileNode(__ret);
    return gcnew OpenCV::Cv::FileNode((::cv::FileNode*)____ret);
}

System::String^ OpenCV::Cv::FileStorage::Elname::get()
{
    return clix::marshalString<clix::E_UTF8>(((::cv::FileStorage*)NativePtr)->elname);
}

void OpenCV::Cv::FileStorage::Elname::set(System::String^ value)
{
    ((::cv::FileStorage*)NativePtr)->elname = clix::marshalString<clix::E_UTF8>(value);
}

System::Collections::Generic::List<char>^ OpenCV::Cv::FileStorage::Structs::get()
{
    auto _tmp__Structs = gcnew System::Collections::Generic::List<char>();
    for(auto _element : ((::cv::FileStorage*)NativePtr)->structs)
    {
        auto _marshalElement = _element;
        _tmp__Structs->Add(_marshalElement);
    }
    return _tmp__Structs;
}

void OpenCV::Cv::FileStorage::Structs::set(System::Collections::Generic::List<char>^ value)
{
    auto _tmpvalue = std::vector<char>();
    for each(char _element in value)
    {
        auto _marshalElement = _element;
        _tmpvalue.push_back(_marshalElement);
    }
    ((::cv::FileStorage*)NativePtr)->structs = _tmpvalue;
}

int OpenCV::Cv::FileStorage::State::get()
{
    return ((::cv::FileStorage*)NativePtr)->state;
}

void OpenCV::Cv::FileStorage::State::set(int value)
{
    ((::cv::FileStorage*)NativePtr)->state = value;
}

OpenCV::Cv::FileNode::FileNode(::cv::FileNode* native)
{
    NativePtr = native;
}

OpenCV::Cv::FileNode::FileNode(System::IntPtr native)
{
    auto __native = (::cv::FileNode*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::FileNode::~FileNode()
{
    delete NativePtr;
}

OpenCV::Cv::FileNode::!FileNode()
{
    delete NativePtr;
}

OpenCV::Cv::FileNode::FileNode()
{
    NativePtr = new ::cv::FileNode();
}

int OpenCV::Cv::FileNode::Type()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->type();
    return __ret;
}

bool OpenCV::Cv::FileNode::Empty()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->empty();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsNone()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isNone();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsSeq()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isSeq();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsMap()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isMap();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsInt()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isInt();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsReal()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isReal();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsString()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isString();
    return __ret;
}

bool OpenCV::Cv::FileNode::IsNamed()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->isNamed();
    return __ret;
}

System::String^ OpenCV::Cv::FileNode::Name()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->name();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

unsigned int OpenCV::Cv::FileNode::Size()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->size();
    return __ret;
}

OpenCV::Cv::FileNode::operator int(OpenCV::Cv::FileNode^ __op)
{
    auto &arg0 = *(::cv::FileNode*)__op->NativePtr;
    auto __ret = (int) arg0;
    return __ret;
}

OpenCV::Cv::FileNode::operator float(OpenCV::Cv::FileNode^ __op)
{
    auto &arg0 = *(::cv::FileNode*)__op->NativePtr;
    auto __ret = (float) arg0;
    return __ret;
}

OpenCV::Cv::FileNode::operator double(OpenCV::Cv::FileNode^ __op)
{
    auto &arg0 = *(::cv::FileNode*)__op->NativePtr;
    auto __ret = (double) arg0;
    return __ret;
}

OpenCV::Cv::FileNode::operator System::String^(OpenCV::Cv::FileNode^ __op)
{
    auto &arg0 = *(::cv::FileNode*)__op->NativePtr;
    auto __ret = (::std::string) arg0;
    return clix::marshalString<clix::E_UTF8>(__ret);
}

OpenCV::Cv::FileNodeIterator^ OpenCV::Cv::FileNode::Begin()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->begin();
    auto ____ret = new ::cv::FileNodeIterator(__ret);
    return gcnew OpenCV::Cv::FileNodeIterator((::cv::FileNodeIterator*)____ret);
}

OpenCV::Cv::FileNodeIterator^ OpenCV::Cv::FileNode::End()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->end();
    auto ____ret = new ::cv::FileNodeIterator(__ret);
    return gcnew OpenCV::Cv::FileNodeIterator((::cv::FileNodeIterator*)____ret);
}

void* OpenCV::Cv::FileNode::ReadObj()
{
    auto __ret = ((::cv::FileNode*)NativePtr)->readObj();
    return __ret;
}

bool OpenCV::Cv::FileNode::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<FileNode^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::FileNode::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::FileNode::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::FileNode::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::FileNode*)object.ToPointer();
}

OpenCV::Cv::FileNode^ OpenCV::Cv::FileNode::default::get(System::String^ nodename)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(nodename);
    auto __ret = ((::cv::FileNode*)NativePtr)->operator[](arg0);
    auto ____ret = new ::cv::FileNode(__ret);
    return gcnew OpenCV::Cv::FileNode((::cv::FileNode*)____ret);
}

OpenCV::Cv::FileNode^ OpenCV::Cv::FileNode::default::get(int i)
{
    auto __ret = ((::cv::FileNode*)NativePtr)->operator[](i);
    auto ____ret = new ::cv::FileNode(__ret);
    return gcnew OpenCV::Cv::FileNode((::cv::FileNode*)____ret);
}

OpenCV::Cv::FileNodeIterator::FileNodeIterator(::cv::FileNodeIterator* native)
{
    NativePtr = native;
}

OpenCV::Cv::FileNodeIterator::FileNodeIterator(System::IntPtr native)
{
    auto __native = (::cv::FileNodeIterator*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::FileNodeIterator::~FileNodeIterator()
{
    delete NativePtr;
}

OpenCV::Cv::FileNodeIterator::!FileNodeIterator()
{
    delete NativePtr;
}

OpenCV::Cv::FileNodeIterator::FileNodeIterator()
{
    NativePtr = new ::cv::FileNodeIterator();
}

OpenCV::Cv::FileNodeIterator^ OpenCV::Cv::FileNodeIterator::operator++(OpenCV::Cv::FileNodeIterator^ __op)
{
    auto &arg0 = *(::cv::FileNodeIterator*)__op->NativePtr;
    auto &__ret = ++ arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::FileNodeIterator((::cv::FileNodeIterator*)&__ret);
}

OpenCV::Cv::FileNodeIterator^ OpenCV::Cv::FileNodeIterator::operator--(OpenCV::Cv::FileNodeIterator^ __op)
{
    auto &arg0 = *(::cv::FileNodeIterator*)__op->NativePtr;
    auto &__ret = -- arg0;
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::FileNodeIterator((::cv::FileNodeIterator*)&__ret);
}

bool OpenCV::Cv::FileNodeIterator::operator==(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2)
{
    auto &arg0 = *(::cv::FileNodeIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::FileNodeIterator*)it2->NativePtr;
    auto __ret = arg0 == arg1;
    return __ret;
}

bool OpenCV::Cv::FileNodeIterator::operator!=(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2)
{
    auto &arg0 = *(::cv::FileNodeIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::FileNodeIterator*)it2->NativePtr;
    auto __ret = arg0 != arg1;
    return __ret;
}

int OpenCV::Cv::FileNodeIterator::operator-(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2)
{
    auto &arg0 = *(::cv::FileNodeIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::FileNodeIterator*)it2->NativePtr;
    auto __ret = arg0 - arg1;
    return __ret;
}

bool OpenCV::Cv::FileNodeIterator::operator<(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2)
{
    auto &arg0 = *(::cv::FileNodeIterator*)it1->NativePtr;
    auto &arg1 = *(::cv::FileNodeIterator*)it2->NativePtr;
    auto __ret = arg0 < arg1;
    return __ret;
}

bool OpenCV::Cv::FileNodeIterator::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<FileNodeIterator^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::FileNodeIterator::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::FileNodeIterator::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::FileNodeIterator::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::FileNodeIterator*)object.ToPointer();
}

unsigned int OpenCV::Cv::FileNodeIterator::Remaining::get()
{
    return ((::cv::FileNodeIterator*)NativePtr)->remaining;
}

void OpenCV::Cv::FileNodeIterator::Remaining::set(unsigned int value)
{
    ((::cv::FileNodeIterator*)NativePtr)->remaining = (::size_t)value;
}

OpenCV::Cv::Algorithm::Algorithm(::cv::Algorithm* native)
{
    NativePtr = native;
}

OpenCV::Cv::Algorithm::Algorithm(System::IntPtr native)
{
    auto __native = (::cv::Algorithm*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Algorithm::~Algorithm()
{
    delete NativePtr;
}

OpenCV::Cv::Algorithm::!Algorithm()
{
    delete NativePtr;
}

OpenCV::Cv::Algorithm::Algorithm()
{
    NativePtr = new ::cv::Algorithm();
}

System::String^ OpenCV::Cv::Algorithm::Name()
{
    auto __ret = ((::cv::Algorithm*)NativePtr)->name();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int OpenCV::Cv::Algorithm::GetInt(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getInt(arg0);
    return __ret;
}

double OpenCV::Cv::Algorithm::GetDouble(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getDouble(arg0);
    return __ret;
}

bool OpenCV::Cv::Algorithm::GetBool(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getBool(arg0);
    return __ret;
}

System::String^ OpenCV::Cv::Algorithm::GetString(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getString(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

OpenCV::Cv::Mat^ OpenCV::Cv::Algorithm::GetMat(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getMat(arg0);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

System::Collections::Generic::List<OpenCV::Cv::Mat^>^ OpenCV::Cv::Algorithm::GetMatVector(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->getMatVector(arg0);
    auto _tmp__ret = gcnew System::Collections::Generic::List<OpenCV::Cv::Mat^>();
    for(auto _element : __ret)
    {
        auto ___element = new ::cv::Mat(_element);
        auto _marshalElement = gcnew OpenCV::Cv::Mat((::cv::Mat*)___element);
        _tmp__ret->Add(_marshalElement);
    }
    return _tmp__ret;
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, int value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, double value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, bool value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, System::String^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, OpenCV::Cv::Mat^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto &arg1 = *(::cv::Mat*)value->NativePtr;
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::Set(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto _tmpvalue = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in value)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvalue.push_back(_marshalElement);
    }
    auto arg1 = _tmpvalue;
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetInt(System::String^ name, int value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->setInt(arg0, value);
}

void OpenCV::Cv::Algorithm::SetDouble(System::String^ name, double value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->setDouble(arg0, value);
}

void OpenCV::Cv::Algorithm::SetBool(System::String^ name, bool value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    ((::cv::Algorithm*)NativePtr)->setBool(arg0, value);
}

void OpenCV::Cv::Algorithm::SetString(System::String^ name, System::String^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    ((::cv::Algorithm*)NativePtr)->setString(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetMat(System::String^ name, OpenCV::Cv::Mat^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto &arg1 = *(::cv::Mat*)value->NativePtr;
    ((::cv::Algorithm*)NativePtr)->setMat(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetMatVector(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto _tmpvalue = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in value)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvalue.push_back(_marshalElement);
    }
    auto arg1 = _tmpvalue;
    ((::cv::Algorithm*)NativePtr)->setMatVector(arg0, arg1);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, int value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, double value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, bool value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->set(arg0, value);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, System::String^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, OpenCV::Cv::Mat^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto &arg1 = *(::cv::Mat*)value->NativePtr;
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::Set1(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto _tmpvalue = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in value)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvalue.push_back(_marshalElement);
    }
    auto arg1 = _tmpvalue;
    ((::cv::Algorithm*)NativePtr)->set(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetInt1(System::String^ name, int value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->setInt(arg0, value);
}

void OpenCV::Cv::Algorithm::SetDouble1(System::String^ name, double value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->setDouble(arg0, value);
}

void OpenCV::Cv::Algorithm::SetBool1(System::String^ name, bool value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    ((::cv::Algorithm*)NativePtr)->setBool(arg0, value);
}

void OpenCV::Cv::Algorithm::SetString1(System::String^ name, System::String^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    ((::cv::Algorithm*)NativePtr)->setString(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetMat1(System::String^ name, OpenCV::Cv::Mat^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto &arg1 = *(::cv::Mat*)value->NativePtr;
    ((::cv::Algorithm*)NativePtr)->setMat(arg0, arg1);
}

void OpenCV::Cv::Algorithm::SetMatVector1(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto _tmpvalue = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in value)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpvalue.push_back(_marshalElement);
    }
    auto arg1 = _tmpvalue;
    ((::cv::Algorithm*)NativePtr)->setMatVector(arg0, arg1);
}

System::String^ OpenCV::Cv::Algorithm::ParamHelp(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->paramHelp(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int OpenCV::Cv::Algorithm::ParamType(System::String^ name)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto __ret = ((::cv::Algorithm*)NativePtr)->paramType(arg0);
    return __ret;
}

void OpenCV::Cv::Algorithm::GetParams(System::Collections::Generic::List<System::String^>^ names)
{
    auto _tmpnames = std::vector<::std::string>();
    for each(System::String^ _element in names)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmpnames.push_back(_marshalElement);
    }
    auto arg0 = _tmpnames;
    ((::cv::Algorithm*)NativePtr)->getParams(arg0);
}

void OpenCV::Cv::Algorithm::Write(OpenCV::Cv::FileStorage^ fs)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    ((::cv::Algorithm*)NativePtr)->write(arg0);
}

void OpenCV::Cv::Algorithm::Read(OpenCV::Cv::FileNode^ fn)
{
    auto &arg0 = *(::cv::FileNode*)fn->NativePtr;
    ((::cv::Algorithm*)NativePtr)->read(arg0);
}

void OpenCV::Cv::Algorithm::GetList(System::Collections::Generic::List<System::String^>^ algorithms)
{
    auto _tmpalgorithms = std::vector<::std::string>();
    for each(System::String^ _element in algorithms)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmpalgorithms.push_back(_marshalElement);
    }
    auto arg0 = _tmpalgorithms;
    ::cv::Algorithm::getList(arg0);
}

OpenCV::Cv::AlgorithmInfo^ OpenCV::Cv::Algorithm::Info()
{
    auto __ret = ((::cv::Algorithm*)NativePtr)->info();
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::AlgorithmInfo((::cv::AlgorithmInfo*)__ret);
}

bool OpenCV::Cv::Algorithm::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Algorithm^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Algorithm::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Algorithm::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Algorithm::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Algorithm*)object.ToPointer();
}
OpenCV::Cv::AlgorithmInfo::AlgorithmInfo(::cv::AlgorithmInfo* native)
{
    NativePtr = native;
}

OpenCV::Cv::AlgorithmInfo::AlgorithmInfo(System::IntPtr native)
{
    auto __native = (::cv::AlgorithmInfo*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::AlgorithmInfo::~AlgorithmInfo()
{
    delete NativePtr;
}

OpenCV::Cv::AlgorithmInfo::!AlgorithmInfo()
{
    delete NativePtr;
}

OpenCV::Cv::AlgorithmInfo::AlgorithmInfo(System::String^ name, OpenCV::Cv::Algorithm::Constructor^ create)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg1 = static_cast<::cv::Algorithm::Constructor>(System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate(create).ToPointer());
    NativePtr = new ::cv::AlgorithmInfo(arg0, arg1);
}

void OpenCV::Cv::AlgorithmInfo::Get(OpenCV::Cv::Algorithm^ algo, System::String^ name, int argType, void* value)
{
    auto arg0 = (::cv::Algorithm*)algo->NativePtr;
    auto _arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto arg1 = _arg1.c_str();
    auto arg3 = (void*)value;
    ((::cv::AlgorithmInfo*)NativePtr)->get(arg0, arg1, argType, arg3);
}

System::String^ OpenCV::Cv::AlgorithmInfo::ParamHelp(System::String^ name)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto __ret = ((::cv::AlgorithmInfo*)NativePtr)->paramHelp(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int OpenCV::Cv::AlgorithmInfo::ParamType(System::String^ name)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(name);
    auto arg0 = _arg0.c_str();
    auto __ret = ((::cv::AlgorithmInfo*)NativePtr)->paramType(arg0);
    return __ret;
}

void OpenCV::Cv::AlgorithmInfo::GetParams(System::Collections::Generic::List<System::String^>^ names)
{
    auto _tmpnames = std::vector<::std::string>();
    for each(System::String^ _element in names)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmpnames.push_back(_marshalElement);
    }
    auto arg0 = _tmpnames;
    ((::cv::AlgorithmInfo*)NativePtr)->getParams(arg0);
}

void OpenCV::Cv::AlgorithmInfo::Write(OpenCV::Cv::Algorithm^ algo, OpenCV::Cv::FileStorage^ fs)
{
    auto arg0 = (::cv::Algorithm*)algo->NativePtr;
    auto &arg1 = *(::cv::FileStorage*)fs->NativePtr;
    ((::cv::AlgorithmInfo*)NativePtr)->write(arg0, arg1);
}

void OpenCV::Cv::AlgorithmInfo::Read(OpenCV::Cv::Algorithm^ algo, OpenCV::Cv::FileNode^ fn)
{
    auto arg0 = (::cv::Algorithm*)algo->NativePtr;
    auto &arg1 = *(::cv::FileNode*)fn->NativePtr;
    ((::cv::AlgorithmInfo*)NativePtr)->read(arg0, arg1);
}

System::String^ OpenCV::Cv::AlgorithmInfo::Name()
{
    auto __ret = ((::cv::AlgorithmInfo*)NativePtr)->name();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

bool OpenCV::Cv::AlgorithmInfo::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<AlgorithmInfo^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::AlgorithmInfo::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::AlgorithmInfo::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::AlgorithmInfo::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::AlgorithmInfo*)object.ToPointer();
}
OpenCV::Cv::Param::Param(::cv::Param* native)
{
    NativePtr = native;
}

OpenCV::Cv::Param::Param(System::IntPtr native)
{
    auto __native = (::cv::Param*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Param::~Param()
{
    delete NativePtr;
}

OpenCV::Cv::Param::!Param()
{
    delete NativePtr;
}

OpenCV::Cv::Param::Param()
{
    NativePtr = new ::cv::Param();
}

bool OpenCV::Cv::Param::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Param^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Param::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Param::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Param::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Param*)object.ToPointer();
}

int OpenCV::Cv::Param::Type::get()
{
    return ((::cv::Param*)NativePtr)->type;
}

void OpenCV::Cv::Param::Type::set(int value)
{
    ((::cv::Param*)NativePtr)->type = value;
}

int OpenCV::Cv::Param::Offset::get()
{
    return ((::cv::Param*)NativePtr)->offset;
}

void OpenCV::Cv::Param::Offset::set(int value)
{
    ((::cv::Param*)NativePtr)->offset = value;
}

bool OpenCV::Cv::Param::Readonly::get()
{
    return ((::cv::Param*)NativePtr)->readonly;
}

void OpenCV::Cv::Param::Readonly::set(bool value)
{
    ((::cv::Param*)NativePtr)->readonly = value;
}

System::String^ OpenCV::Cv::Param::Help::get()
{
    return clix::marshalString<clix::E_UTF8>(((::cv::Param*)NativePtr)->help);
}

void OpenCV::Cv::Param::Help::set(System::String^ value)
{
    ((::cv::Param*)NativePtr)->help = clix::marshalString<clix::E_UTF8>(value);
}

OpenCV::Cv::ParallelLoopBody::ParallelLoopBody(::cv::ParallelLoopBody* native)
{
    NativePtr = native;
}

OpenCV::Cv::ParallelLoopBody::ParallelLoopBody(System::IntPtr native)
{
    auto __native = (::cv::ParallelLoopBody*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::ParallelLoopBody::~ParallelLoopBody()
{
    delete NativePtr;
}

OpenCV::Cv::ParallelLoopBody::!ParallelLoopBody()
{
    delete NativePtr;
}

OpenCV::Cv::ParallelLoopBody::ParallelLoopBody()
{
}

bool OpenCV::Cv::ParallelLoopBody::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<ParallelLoopBody^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::ParallelLoopBody::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::ParallelLoopBody::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::ParallelLoopBody::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::ParallelLoopBody*)object.ToPointer();
}
OpenCV::Cv::Mutex::Mutex(::cv::Mutex* native)
{
    NativePtr = native;
}

OpenCV::Cv::Mutex::Mutex(System::IntPtr native)
{
    auto __native = (::cv::Mutex*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Mutex::~Mutex()
{
    delete NativePtr;
}

OpenCV::Cv::Mutex::!Mutex()
{
    delete NativePtr;
}

OpenCV::Cv::Mutex::Mutex()
{
    NativePtr = new ::cv::Mutex();
}

void OpenCV::Cv::Mutex::Lock()
{
    ((::cv::Mutex*)NativePtr)->lock();
}

bool OpenCV::Cv::Mutex::Trylock()
{
    auto __ret = ((::cv::Mutex*)NativePtr)->trylock();
    return __ret;
}

void OpenCV::Cv::Mutex::Unlock()
{
    ((::cv::Mutex*)NativePtr)->unlock();
}

bool OpenCV::Cv::Mutex::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Mutex^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Mutex::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Mutex::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Mutex::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Mutex*)object.ToPointer();
}
OpenCV::Cv::TLSDataContainer::TLSDataContainer(::cv::TLSDataContainer* native)
{
    NativePtr = native;
}

OpenCV::Cv::TLSDataContainer::TLSDataContainer(System::IntPtr native)
{
    auto __native = (::cv::TLSDataContainer*)native.ToPointer();
    NativePtr = __native;
}

void* OpenCV::Cv::TLSDataContainer::CreateDataInstance()
{
    auto __ret = ((::cv::TLSDataContainer*)NativePtr)->createDataInstance();
    return __ret;
}

void OpenCV::Cv::TLSDataContainer::DeleteDataInstance(void* data)
{
    auto arg0 = (void*)data;
    ((::cv::TLSDataContainer*)NativePtr)->deleteDataInstance(arg0);
}

void* OpenCV::Cv::TLSDataContainer::GetData()
{
    auto __ret = ((::cv::TLSDataContainer*)NativePtr)->getData();
    return __ret;
}

bool OpenCV::Cv::TLSDataContainer::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<TLSDataContainer^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::TLSDataContainer::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::TLSDataContainer::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::TLSDataContainer::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::TLSDataContainer*)object.ToPointer();
}
System::String^ OpenCV::Cv::core::Format(System::String^ fmt)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(fmt);
    auto arg0 = _arg0.c_str();
    auto __ret = ::cv::format(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

System::String^ OpenCV::Cv::core::Tempfile(System::String^ suffix)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(suffix);
    auto arg0 = _arg0.c_str();
    auto __ret = ::cv::tempfile(arg0);
    return clix::marshalString<clix::E_UTF8>(__ret);
}

/// <summary>
/// When the break-on-error mode is set, the default error handler issues a
/// hardware exception, which can make debugging more convenient.
/// </summary>
bool OpenCV::Cv::core::SetBreakOnError(bool flag)
{
    auto __ret = ::cv::setBreakOnError(flag);
    return __ret;
}

/// <summary>
/// The function sets the new error handler, called from cv::error().
/// </summary>
OpenCV::Cv::ErrorCallback^ OpenCV::Cv::core::RedirectError(OpenCV::Cv::ErrorCallback^ errCallback, void* userdata, void** prevUserdata)
{
    auto arg0 = static_cast<::cv::ErrorCallback>(System::Runtime::InteropServices::Marshal::GetFunctionPointerForDelegate(errCallback).ToPointer());
    auto arg1 = (void*)userdata;
    auto arg2 = (void**)prevUserdata;
    auto __ret = ::cv::redirectError(arg0, arg1, arg2);
    return safe_cast<OpenCV::Cv::ErrorCallback^>(System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer(IntPtr(__ret), OpenCV::Cv::ErrorCallback::typeid));
}

void OpenCV::Cv::core::Glob(System::String^ pattern, System::Collections::Generic::List<System::String^>^ result, bool recursive)
{
    auto arg0 = clix::marshalString<clix::E_UTF8>(pattern);
    auto _tmpresult = std::vector<::cv::String>();
    for each(System::String^ _element in result)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmpresult.push_back(_marshalElement);
    }
    auto arg1 = _tmpresult;
    ::cv::glob(arg0, arg1, recursive);
}

void OpenCV::Cv::core::SetNumThreads(int nthreads)
{
    ::cv::setNumThreads(nthreads);
}

int OpenCV::Cv::core::GetNumThreads()
{
    auto __ret = ::cv::getNumThreads();
    return __ret;
}

int OpenCV::Cv::core::GetThreadNum()
{
    auto __ret = ::cv::getThreadNum();
    return __ret;
}

System::String^ OpenCV::Cv::core::GetBuildInformation()
{
    auto &__ret = ::cv::getBuildInformation();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

/// <summary>
/// Returns the number of ticks per seconds.
/// </summary>
double OpenCV::Cv::core::GetTickFrequency()
{
    auto __ret = ::cv::getTickFrequency();
    return __ret;
}

/// <summary>
/// Returns SSE etc. support status
/// </summary>
bool OpenCV::Cv::core::CheckHardwareSupport(int feature)
{
    auto __ret = ::cv::checkHardwareSupport(feature);
    return __ret;
}

/// <summary>
/// returns the number of CPUs (including hyper-threading)
/// </summary>
int OpenCV::Cv::core::GetNumberOfCPUs()
{
    auto __ret = ::cv::getNumberOfCPUs();
    return __ret;
}

/// <summary>
/// Allocates memory buffer
/// </summary>
void* OpenCV::Cv::core::FastMalloc(unsigned int bufSize)
{
    auto __ret = ::cv::fastMalloc(bufSize);
    return __ret;
}

/// <summary>
/// Frees the memory allocated with cv::fastMalloc
/// </summary>
void OpenCV::Cv::core::FastFree(void* ptr)
{
    auto arg0 = (void*)ptr;
    ::cv::fastFree(arg0);
}

/// <summary>
/// Aligns buffer size by the certain number of bytes
/// </summary>
unsigned int OpenCV::Cv::core::AlignSize(unsigned int sz, int n)
{
    auto __ret = ::cv::alignSize(sz, n);
    return __ret;
}

/// <summary>
/// Turns on/off available optimization
/// </summary>
void OpenCV::Cv::core::SetUseOptimized(bool onoff)
{
    ::cv::setUseOptimized(onoff);
}

/// <summary>
/// Returns the current optimization status
/// </summary>
bool OpenCV::Cv::core::UseOptimized()
{
    auto __ret = ::cv::useOptimized();
    return __ret;
}

OpenCV::Cv::_OutputArray^ OpenCV::Cv::core::NoArray()
{
    auto __ret = ::cv::noArray();
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::_OutputArray((::cv::_OutputArray*)&__ret);
}

unsigned int OpenCV::Cv::core::GetElemSize(int type)
{
    auto __ret = ::cv::getElemSize(type);
    return __ret;
}

/// <summary>
/// swaps two matrices
/// </summary>
void OpenCV::Cv::core::Swap(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b)
{
    auto &arg0 = *(::cv::Mat*)a->NativePtr;
    auto &arg1 = *(::cv::Mat*)b->NativePtr;
    ::cv::swap(arg0, arg1);
}

/// <summary>
/// adds one matrix to another (dst = src1 + src2)
/// </summary>
void OpenCV::Cv::core::Add(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::add(arg0, arg1, arg2, arg3, dtype);
}

/// <summary>
/// subtracts one matrix from another (dst = src1 - src2)
/// </summary>
void OpenCV::Cv::core::Subtract(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::subtract(arg0, arg1, arg2, arg3, dtype);
}

/// <summary>
/// computes element-wise weighted product of the two arrays (dst =
/// scale*src1*src2)
/// </summary>
void OpenCV::Cv::core::Multiply(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, double scale, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::multiply(arg0, arg1, arg2, scale, dtype);
}

/// <summary>
/// computes element-wise weighted quotient of the two arrays (dst =
/// scale*src1/src2)
/// </summary>
void OpenCV::Cv::core::Divide(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, double scale, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::divide(arg0, arg1, arg2, scale, dtype);
}

/// <summary>
/// computes element-wise weighted reciprocal of an array (dst = scale/src2)
/// </summary>
void OpenCV::Cv::core::divide(double scale, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int dtype)
{
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::divide(scale, arg1, arg2, dtype);
}

/// <summary>
/// adds scaled array to another one (dst = alpha*src1 + src2)
/// </summary>
void OpenCV::Cv::core::ScaleAdd(OpenCV::Cv::_InputArray^ src1, double alpha, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg2 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::scaleAdd(arg0, alpha, arg2, arg3);
}

/// <summary>
/// computes weighted sum of two arrays (dst = alpha*src1 + beta*src2 + gamma)
/// </summary>
void OpenCV::Cv::core::AddWeighted(OpenCV::Cv::_InputArray^ src1, double alpha, OpenCV::Cv::_InputArray^ src2, double beta, double gamma, OpenCV::Cv::_OutputArray^ dst, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg2 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg5 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::addWeighted(arg0, alpha, arg2, beta, gamma, arg5, dtype);
}

/// <summary>
/// scales array elements, computes absolute values and converts the results to
/// 8-bit unsigned integers: dst(i)=saturate_cast<uchar>abs(src(i)*alpha+beta)
/// </summary>
void OpenCV::Cv::core::ConvertScaleAbs(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, double alpha, double beta)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::convertScaleAbs(arg0, arg1, alpha, beta);
}

/// <summary>
/// transforms array of numbers using a lookup table: dst(i)=lut(src(i))
/// </summary>
void OpenCV::Cv::core::LUT(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ lut, OpenCV::Cv::_OutputArray^ dst, int interpolation)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_InputArray*)lut->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::LUT(arg0, arg1, arg2, interpolation);
}

/// <summary>
/// computes the number of nonzero array elements
/// </summary>
int OpenCV::Cv::core::CountNonZero(OpenCV::Cv::_InputArray^ src)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto __ret = ::cv::countNonZero(arg0);
    return __ret;
}

/// <summary>
/// returns the list of locations of non-zero pixels
/// </summary>
void OpenCV::Cv::core::FindNonZero(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ idx)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)idx->NativePtr;
    ::cv::findNonZero(arg0, arg1);
}

/// <summary>
/// computes mean value and standard deviation of all or selected array
/// elements
/// </summary>
void OpenCV::Cv::core::MeanStdDev(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ stddev, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)stddev->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::meanStdDev(arg0, arg1, arg2, arg3);
}

/// <summary>
/// computes norm of the selected array part
/// </summary>
double OpenCV::Cv::core::Norm(OpenCV::Cv::_InputArray^ src1, int normType, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg2 = *(::cv::_InputArray*)mask->NativePtr;
    auto __ret = ::cv::norm(arg0, normType, arg2);
    return __ret;
}

/// <summary>
/// computes norm of selected part of the difference between two arrays
/// </summary>
double OpenCV::Cv::core::norm(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, int normType, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    auto __ret = ::cv::norm(arg0, arg1, normType, arg3);
    return __ret;
}

/// <summary>
/// naive nearest neighbor finder
/// </summary>
void OpenCV::Cv::core::BatchDistance(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dist, int dtype, OpenCV::Cv::_OutputArray^ nidx, int normType, int K, OpenCV::Cv::_InputArray^ mask, int update, bool crosscheck)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dist->NativePtr;
    auto arg4 = *(::cv::_OutputArray*)nidx->NativePtr;
    auto arg7 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::batchDistance(arg0, arg1, arg2, dtype, arg4, normType, K, arg7, update, crosscheck);
}

/// <summary>
/// scales and shifts array elements so that either the specified norm (alpha)
/// or the minimum (alpha) and maximum (beta) array values get the specified
/// values
/// </summary>
void OpenCV::Cv::core::Normalize(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, double alpha, double beta, int norm_type, int dtype, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg6 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::normalize(arg0, arg1, alpha, beta, norm_type, dtype, arg6);
}

void OpenCV::Cv::core::MinMaxIdx(OpenCV::Cv::_InputArray^ src, double* minVal, double* maxVal, int* minIdx, int* maxIdx, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = (double*)minVal;
    auto arg2 = (double*)maxVal;
    auto arg3 = (int*)minIdx;
    auto arg4 = (int*)maxIdx;
    auto arg5 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::minMaxIdx(arg0, arg1, arg2, arg3, arg4, arg5);
}

/// <summary>
/// transforms 2D matrix to 1D row or column vector by taking sum, minimum,
/// maximum or mean value over all the rows
/// </summary>
void OpenCV::Cv::core::Reduce(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int dim, int rtype, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::reduce(arg0, arg1, dim, rtype, dtype);
}

/// <summary>
/// makes multi-channel array out of several single-channel arrays
/// </summary>
void OpenCV::Cv::core::Merge(OpenCV::Cv::Mat^ mv, unsigned int count, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = (::cv::Mat*)mv->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::merge(arg0, count, arg2);
}

void OpenCV::Cv::core::merge(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv, OpenCV::Cv::_OutputArray^ dst)
{
    auto _tmpmv = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in mv)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpmv.push_back(_marshalElement);
    }
    auto arg0 = _tmpmv;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::merge(arg0, arg1);
}

/// <summary>
/// makes multi-channel array out of several single-channel arrays
/// </summary>
void OpenCV::Cv::core::merge(OpenCV::Cv::_InputArray^ mv, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)mv->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::merge(arg0, arg1);
}

/// <summary>
/// copies each plane of a multi-channel array to a dedicated array
/// </summary>
void OpenCV::Cv::core::Split(OpenCV::Cv::Mat^ src, OpenCV::Cv::Mat^ mvbegin)
{
    auto &arg0 = *(::cv::Mat*)src->NativePtr;
    auto arg1 = (::cv::Mat*)mvbegin->NativePtr;
    ::cv::split(arg0, arg1);
}

void OpenCV::Cv::core::split(OpenCV::Cv::Mat^ m, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto _tmpmv = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in mv)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpmv.push_back(_marshalElement);
    }
    auto arg1 = _tmpmv;
    ::cv::split(arg0, arg1);
}

/// <summary>
/// copies each plane of a multi-channel array to a dedicated array
/// </summary>
void OpenCV::Cv::core::split(OpenCV::Cv::_InputArray^ m, OpenCV::Cv::_OutputArray^ mv)
{
    auto arg0 = *(::cv::_InputArray*)m->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)mv->NativePtr;
    ::cv::split(arg0, arg1);
}

/// <summary>
/// copies selected channels from the input arrays to the selected channels of
/// the output arrays
/// </summary>
void OpenCV::Cv::core::MixChannels(OpenCV::Cv::Mat^ src, unsigned int nsrcs, OpenCV::Cv::Mat^ dst, unsigned int ndsts, int* fromTo, unsigned int npairs)
{
    auto arg0 = (::cv::Mat*)src->NativePtr;
    auto arg2 = (::cv::Mat*)dst->NativePtr;
    auto arg4 = (const int*)fromTo;
    ::cv::mixChannels(arg0, nsrcs, arg2, ndsts, arg4, npairs);
}

void OpenCV::Cv::core::mixChannels(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ src, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ dst, int* fromTo, unsigned int npairs)
{
    auto _tmpsrc = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in src)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpsrc.push_back(_marshalElement);
    }
    auto arg0 = _tmpsrc;
    auto _tmpdst = std::vector<::cv::Mat>();
    for each(OpenCV::Cv::Mat^ _element in dst)
    {
        auto _marshalElement = *(::cv::Mat*)_element->NativePtr;
        _tmpdst.push_back(_marshalElement);
    }
    auto arg1 = _tmpdst;
    auto arg2 = (const int*)fromTo;
    ::cv::mixChannels(arg0, arg1, arg2, npairs);
}

void OpenCV::Cv::core::mixChannels(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ dst, System::Collections::Generic::List<int>^ fromTo)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_InputArray*)dst->NativePtr;
    auto _tmpfromTo = std::vector<int>();
    for each(int _element in fromTo)
    {
        auto _marshalElement = _element;
        _tmpfromTo.push_back(_marshalElement);
    }
    auto arg2 = _tmpfromTo;
    ::cv::mixChannels(arg0, arg1, arg2);
}

/// <summary>
/// extracts a single channel from src (coi is 0-based index)
/// </summary>
void OpenCV::Cv::core::ExtractChannel(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int coi)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::extractChannel(arg0, arg1, coi);
}

/// <summary>
/// inserts a single channel to dst (coi is 0-based index)
/// </summary>
void OpenCV::Cv::core::InsertChannel(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int coi)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::insertChannel(arg0, arg1, coi);
}

/// <summary>
/// reverses the order of the rows, columns or both in a matrix
/// </summary>
void OpenCV::Cv::core::Flip(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flipCode)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::flip(arg0, arg1, flipCode);
}

/// <summary>
/// replicates the input matrix the specified number of times in the horizontal
/// and/or vertical direction
/// </summary>
void OpenCV::Cv::core::Repeat(OpenCV::Cv::_InputArray^ src, int ny, int nx, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::repeat(arg0, ny, nx, arg3);
}

OpenCV::Cv::Mat^ OpenCV::Cv::core::repeat(OpenCV::Cv::Mat^ src, int ny, int nx)
{
    auto &arg0 = *(::cv::Mat*)src->NativePtr;
    auto __ret = ::cv::repeat(arg0, ny, nx);
    auto ____ret = new ::cv::Mat(__ret);
    return gcnew OpenCV::Cv::Mat((::cv::Mat*)____ret);
}

void OpenCV::Cv::core::Hconcat(OpenCV::Cv::Mat^ src, unsigned int nsrc, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = (::cv::Mat*)src->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::hconcat(arg0, nsrc, arg2);
}

void OpenCV::Cv::core::hconcat(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::hconcat(arg0, arg1, arg2);
}

void OpenCV::Cv::core::hconcat(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::hconcat(arg0, arg1);
}

void OpenCV::Cv::core::Vconcat(OpenCV::Cv::Mat^ src, unsigned int nsrc, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = (::cv::Mat*)src->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::vconcat(arg0, nsrc, arg2);
}

void OpenCV::Cv::core::vconcat(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::vconcat(arg0, arg1, arg2);
}

void OpenCV::Cv::core::vconcat(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::vconcat(arg0, arg1);
}

/// <summary>
/// computes bitwise conjunction of the two arrays (dst = src1 & src2)
/// </summary>
void OpenCV::Cv::core::Bitwise_and(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::bitwise_and(arg0, arg1, arg2, arg3);
}

/// <summary>
/// computes bitwise disjunction of the two arrays (dst = src1 | src2)
/// </summary>
void OpenCV::Cv::core::Bitwise_or(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::bitwise_or(arg0, arg1, arg2, arg3);
}

/// <summary>
/// computes bitwise exclusive-or of the two arrays (dst = src1 ^ src2)
/// </summary>
void OpenCV::Cv::core::Bitwise_xor(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::bitwise_xor(arg0, arg1, arg2, arg3);
}

/// <summary>
/// inverts each bit of array (dst = ~src)
/// </summary>
void OpenCV::Cv::core::Bitwise_not(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg2 = *(::cv::_InputArray*)mask->NativePtr;
    ::cv::bitwise_not(arg0, arg1, arg2);
}

/// <summary>
/// computes element-wise absolute difference of two arrays (dst = abs(src1 -
/// src2))
/// </summary>
void OpenCV::Cv::core::Absdiff(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::absdiff(arg0, arg1, arg2);
}

/// <summary>
/// set mask elements for those array elements which are within the
/// element-specific bounding box (dst = lowerb <= src && src < upperb)
/// </summary>
void OpenCV::Cv::core::InRange(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ lowerb, OpenCV::Cv::_InputArray^ upperb, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_InputArray*)lowerb->NativePtr;
    auto arg2 = *(::cv::_InputArray*)upperb->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::inRange(arg0, arg1, arg2, arg3);
}

/// <summary>
/// compares elements of two arrays (dst = src1 <cmpop> src2)
/// </summary>
void OpenCV::Cv::core::Compare(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int cmpop)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::compare(arg0, arg1, arg2, cmpop);
}

/// <summary>
/// computes per-element minimum of two arrays (dst = min(src1, src2))
/// </summary>
void OpenCV::Cv::core::Min(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::min(arg0, arg1, arg2);
}

/// <summary>
/// computes per-element maximum of two arrays (dst = max(src1, src2))
/// </summary>
void OpenCV::Cv::core::Max(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::max(arg0, arg1, arg2);
}

/// <summary>
/// computes per-element minimum of two arrays (dst = min(src1, src2))
/// </summary>
void OpenCV::Cv::core::min(OpenCV::Cv::Mat^ src1, OpenCV::Cv::Mat^ src2, OpenCV::Cv::Mat^ dst)
{
    auto &arg0 = *(::cv::Mat*)src1->NativePtr;
    auto &arg1 = *(::cv::Mat*)src2->NativePtr;
    auto &arg2 = *(::cv::Mat*)dst->NativePtr;
    ::cv::min(arg0, arg1, arg2);
}

/// <summary>
/// computes per-element minimum of array and scalar (dst = min(src1, src2))
/// </summary>
void OpenCV::Cv::core::min(OpenCV::Cv::Mat^ src1, double src2, OpenCV::Cv::Mat^ dst)
{
    auto &arg0 = *(::cv::Mat*)src1->NativePtr;
    auto &arg2 = *(::cv::Mat*)dst->NativePtr;
    ::cv::min(arg0, src2, arg2);
}

/// <summary>
/// computes per-element maximum of two arrays (dst = max(src1, src2))
/// </summary>
void OpenCV::Cv::core::max(OpenCV::Cv::Mat^ src1, OpenCV::Cv::Mat^ src2, OpenCV::Cv::Mat^ dst)
{
    auto &arg0 = *(::cv::Mat*)src1->NativePtr;
    auto &arg1 = *(::cv::Mat*)src2->NativePtr;
    auto &arg2 = *(::cv::Mat*)dst->NativePtr;
    ::cv::max(arg0, arg1, arg2);
}

/// <summary>
/// computes per-element maximum of array and scalar (dst = max(src1, src2))
/// </summary>
void OpenCV::Cv::core::max(OpenCV::Cv::Mat^ src1, double src2, OpenCV::Cv::Mat^ dst)
{
    auto &arg0 = *(::cv::Mat*)src1->NativePtr;
    auto &arg2 = *(::cv::Mat*)dst->NativePtr;
    ::cv::max(arg0, src2, arg2);
}

/// <summary>
/// computes square root of each matrix element (dst = src**0.5)
/// </summary>
void OpenCV::Cv::core::Sqrt(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::sqrt(arg0, arg1);
}

/// <summary>
/// raises the input matrix elements to the specified power (b = a**power)
/// </summary>
void OpenCV::Cv::core::Pow(OpenCV::Cv::_InputArray^ src, double power, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::pow(arg0, power, arg2);
}

/// <summary>
/// computes exponent of each matrix element (dst = e**src)
/// </summary>
void OpenCV::Cv::core::Exp(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::exp(arg0, arg1);
}

/// <summary>
/// computes natural logarithm of absolute value of each matrix element: dst =
/// log(abs(src))
/// </summary>
void OpenCV::Cv::core::Log(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::log(arg0, arg1);
}

/// <summary>
/// computes cube root of the argument
/// </summary>
float OpenCV::Cv::core::CubeRoot(float val)
{
    auto __ret = ::cv::cubeRoot(val);
    return __ret;
}

/// <summary>
/// computes the angle in degrees (0..360) of the vector (x,y)
/// </summary>
float OpenCV::Cv::core::FastAtan2(float y, float x)
{
    auto __ret = ::cv::fastAtan2(y, x);
    return __ret;
}

void OpenCV::Cv::core::exp(float* src, float* dst, int n)
{
    auto arg0 = (const float*)src;
    auto arg1 = (float*)dst;
    ::cv::exp(arg0, arg1, n);
}

void OpenCV::Cv::core::log(float* src, float* dst, int n)
{
    auto arg0 = (const float*)src;
    auto arg1 = (float*)dst;
    ::cv::log(arg0, arg1, n);
}

void OpenCV::Cv::core::fastAtan2(float* y, float* x, float* dst, int n, bool angleInDegrees)
{
    auto arg0 = (const float*)y;
    auto arg1 = (const float*)x;
    auto arg2 = (float*)dst;
    ::cv::fastAtan2(arg0, arg1, arg2, n, angleInDegrees);
}

void OpenCV::Cv::core::Magnitude(float* x, float* y, float* dst, int n)
{
    auto arg0 = (const float*)x;
    auto arg1 = (const float*)y;
    auto arg2 = (float*)dst;
    ::cv::magnitude(arg0, arg1, arg2, n);
}

/// <summary>
/// converts polar coordinates to Cartesian
/// </summary>
void OpenCV::Cv::core::PolarToCart(OpenCV::Cv::_InputArray^ magnitude, OpenCV::Cv::_InputArray^ angle, OpenCV::Cv::_OutputArray^ x, OpenCV::Cv::_OutputArray^ y, bool angleInDegrees)
{
    auto arg0 = *(::cv::_InputArray*)magnitude->NativePtr;
    auto arg1 = *(::cv::_InputArray*)angle->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)x->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)y->NativePtr;
    ::cv::polarToCart(arg0, arg1, arg2, arg3, angleInDegrees);
}

/// <summary>
/// converts Cartesian coordinates to polar
/// </summary>
void OpenCV::Cv::core::CartToPolar(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ magnitude, OpenCV::Cv::_OutputArray^ angle, bool angleInDegrees)
{
    auto arg0 = *(::cv::_InputArray*)x->NativePtr;
    auto arg1 = *(::cv::_InputArray*)y->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)magnitude->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)angle->NativePtr;
    ::cv::cartToPolar(arg0, arg1, arg2, arg3, angleInDegrees);
}

/// <summary>
/// computes angle (angle(i)) of each (x(i), y(i)) vector
/// </summary>
void OpenCV::Cv::core::Phase(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ angle, bool angleInDegrees)
{
    auto arg0 = *(::cv::_InputArray*)x->NativePtr;
    auto arg1 = *(::cv::_InputArray*)y->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)angle->NativePtr;
    ::cv::phase(arg0, arg1, arg2, angleInDegrees);
}

/// <summary>
/// computes magnitude (magnitude(i)) of each (x(i), y(i)) vector
/// </summary>
void OpenCV::Cv::core::magnitude(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ magnitude)
{
    auto arg0 = *(::cv::_InputArray*)x->NativePtr;
    auto arg1 = *(::cv::_InputArray*)y->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)magnitude->NativePtr;
    ::cv::magnitude(arg0, arg1, arg2);
}

/// <summary>
/// converts NaN's to the given number
/// </summary>
void OpenCV::Cv::core::PatchNaNs(OpenCV::Cv::_OutputArray^ a, double val)
{
    auto arg0 = *(::cv::_OutputArray*)a->NativePtr;
    ::cv::patchNaNs(arg0, val);
}

/// <summary>
/// implements generalized matrix product algorithm GEMM from BLAS
/// </summary>
void OpenCV::Cv::core::Gemm(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, double alpha, OpenCV::Cv::_InputArray^ src3, double gamma, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg3 = *(::cv::_InputArray*)src3->NativePtr;
    auto arg5 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::gemm(arg0, arg1, alpha, arg3, gamma, arg5, flags);
}

/// <summary>
/// multiplies matrix by its transposition from the left or from the right
/// </summary>
void OpenCV::Cv::core::MulTransposed(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, bool aTa, OpenCV::Cv::_InputArray^ delta, double scale, int dtype)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg3 = *(::cv::_InputArray*)delta->NativePtr;
    ::cv::mulTransposed(arg0, arg1, aTa, arg3, scale, dtype);
}

/// <summary>
/// transposes the matrix
/// </summary>
void OpenCV::Cv::core::Transpose(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::transpose(arg0, arg1);
}

/// <summary>
/// performs affine transformation of each element of multi-channel input
/// matrix
/// </summary>
void OpenCV::Cv::core::Transform(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ m)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg2 = *(::cv::_InputArray*)m->NativePtr;
    ::cv::transform(arg0, arg1, arg2);
}

/// <summary>
/// performs perspective transformation of each element of multi-channel input
/// matrix
/// </summary>
void OpenCV::Cv::core::PerspectiveTransform(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ m)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg2 = *(::cv::_InputArray*)m->NativePtr;
    ::cv::perspectiveTransform(arg0, arg1, arg2);
}

/// <summary>
/// extends the symmetrical matrix from the lower half or from the upper half
/// </summary>
void OpenCV::Cv::core::CompleteSymm(OpenCV::Cv::_OutputArray^ mtx, bool lowerToUpper)
{
    auto arg0 = *(::cv::_OutputArray*)mtx->NativePtr;
    ::cv::completeSymm(arg0, lowerToUpper);
}

/// <summary>
/// computes determinant of a square matrix
/// </summary>
double OpenCV::Cv::core::Determinant(OpenCV::Cv::_InputArray^ mtx)
{
    auto arg0 = *(::cv::_InputArray*)mtx->NativePtr;
    auto __ret = ::cv::determinant(arg0);
    return __ret;
}

/// <summary>
/// computes inverse or pseudo-inverse matrix
/// </summary>
double OpenCV::Cv::core::Invert(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    auto __ret = ::cv::invert(arg0, arg1, flags);
    return __ret;
}

/// <summary>
/// solves linear system or a least-square problem
/// </summary>
bool OpenCV::Cv::core::Solve(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)src2->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)dst->NativePtr;
    auto __ret = ::cv::solve(arg0, arg1, arg2, flags);
    return __ret;
}

/// <summary>
/// sorts independently each matrix row or each matrix column
/// </summary>
void OpenCV::Cv::core::Sort(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::sort(arg0, arg1, flags);
}

/// <summary>
/// sorts independently each matrix row or each matrix column
/// </summary>
void OpenCV::Cv::core::SortIdx(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::sortIdx(arg0, arg1, flags);
}

/// <summary>
/// finds real roots of a cubic polynomial
/// </summary>
int OpenCV::Cv::core::SolveCubic(OpenCV::Cv::_InputArray^ coeffs, OpenCV::Cv::_OutputArray^ roots)
{
    auto arg0 = *(::cv::_InputArray*)coeffs->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)roots->NativePtr;
    auto __ret = ::cv::solveCubic(arg0, arg1);
    return __ret;
}

/// <summary>
/// finds real and complex roots of a polynomial
/// </summary>
double OpenCV::Cv::core::SolvePoly(OpenCV::Cv::_InputArray^ coeffs, OpenCV::Cv::_OutputArray^ roots, int maxIters)
{
    auto arg0 = *(::cv::_InputArray*)coeffs->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)roots->NativePtr;
    auto __ret = ::cv::solvePoly(arg0, arg1, maxIters);
    return __ret;
}

/// <summary>
/// finds eigenvalues of a symmetric matrix
/// </summary>
bool OpenCV::Cv::core::Eigen(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ eigenvalues, int lowindex, int highindex)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)eigenvalues->NativePtr;
    auto __ret = ::cv::eigen(arg0, arg1, lowindex, highindex);
    return __ret;
}

/// <summary>
/// finds eigenvalues and eigenvectors of a symmetric matrix
/// </summary>
bool OpenCV::Cv::core::eigen(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ eigenvalues, OpenCV::Cv::_OutputArray^ eigenvectors, int lowindex, int highindex)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)eigenvalues->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)eigenvectors->NativePtr;
    auto __ret = ::cv::eigen(arg0, arg1, arg2, lowindex, highindex);
    return __ret;
}

bool OpenCV::Cv::core::eigen(OpenCV::Cv::_InputArray^ src, bool computeEigenvectors, OpenCV::Cv::_OutputArray^ eigenvalues, OpenCV::Cv::_OutputArray^ eigenvectors)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)eigenvalues->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)eigenvectors->NativePtr;
    auto __ret = ::cv::eigen(arg0, computeEigenvectors, arg2, arg3);
    return __ret;
}

/// <summary>
/// computes covariation matrix of a set of samples
/// </summary>
void OpenCV::Cv::core::CalcCovarMatrix(OpenCV::Cv::Mat^ samples, int nsamples, OpenCV::Cv::Mat^ covar, OpenCV::Cv::Mat^ mean, int flags, int ctype)
{
    auto arg0 = (::cv::Mat*)samples->NativePtr;
    auto &arg2 = *(::cv::Mat*)covar->NativePtr;
    auto &arg3 = *(::cv::Mat*)mean->NativePtr;
    ::cv::calcCovarMatrix(arg0, nsamples, arg2, arg3, flags, ctype);
}

/// <summary>
/// computes covariation matrix of a set of samples
/// </summary>
void OpenCV::Cv::core::calcCovarMatrix(OpenCV::Cv::_InputArray^ samples, OpenCV::Cv::_OutputArray^ covar, OpenCV::Cv::_OutputArray^ mean, int flags, int ctype)
{
    auto arg0 = *(::cv::_InputArray*)samples->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)covar->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)mean->NativePtr;
    ::cv::calcCovarMatrix(arg0, arg1, arg2, flags, ctype);
}

void OpenCV::Cv::core::PCACompute(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ eigenvectors, int maxComponents)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)eigenvectors->NativePtr;
    ::cv::PCACompute(arg0, arg1, arg2, maxComponents);
}

void OpenCV::Cv::core::PCAComputeVar(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ eigenvectors, double retainedVariance)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)eigenvectors->NativePtr;
    ::cv::PCAComputeVar(arg0, arg1, arg2, retainedVariance);
}

void OpenCV::Cv::core::PCAProject(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ eigenvectors, OpenCV::Cv::_OutputArray^ result)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_InputArray*)eigenvectors->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)result->NativePtr;
    ::cv::PCAProject(arg0, arg1, arg2, arg3);
}

void OpenCV::Cv::core::PCABackProject(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ eigenvectors, OpenCV::Cv::_OutputArray^ result)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_InputArray*)eigenvectors->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)result->NativePtr;
    ::cv::PCABackProject(arg0, arg1, arg2, arg3);
}

/// <summary>
/// computes SVD of src
/// </summary>
void OpenCV::Cv::core::SVDecomp(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, OpenCV::Cv::_OutputArray^ u, OpenCV::Cv::_OutputArray^ vt, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)w->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)u->NativePtr;
    auto arg3 = *(::cv::_OutputArray*)vt->NativePtr;
    ::cv::SVDecomp(arg0, arg1, arg2, arg3, flags);
}

/// <summary>
/// performs back substitution for the previously computed SVD
/// </summary>
void OpenCV::Cv::core::SVBackSubst(OpenCV::Cv::_InputArray^ w, OpenCV::Cv::_InputArray^ u, OpenCV::Cv::_InputArray^ vt, OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst)
{
    auto arg0 = *(::cv::_InputArray*)w->NativePtr;
    auto arg1 = *(::cv::_InputArray*)u->NativePtr;
    auto arg2 = *(::cv::_InputArray*)vt->NativePtr;
    auto arg3 = *(::cv::_InputArray*)rhs->NativePtr;
    auto arg4 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::SVBackSubst(arg0, arg1, arg2, arg3, arg4);
}

/// <summary>
/// computes Mahalanobis distance between two vectors:
/// sqrt((v1-v2)'*icovar*(v1-v2)), where icovar is the inverse covariation
/// matrix
/// </summary>
double OpenCV::Cv::core::Mahalanobis(OpenCV::Cv::_InputArray^ v1, OpenCV::Cv::_InputArray^ v2, OpenCV::Cv::_InputArray^ icovar)
{
    auto arg0 = *(::cv::_InputArray*)v1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)v2->NativePtr;
    auto arg2 = *(::cv::_InputArray*)icovar->NativePtr;
    auto __ret = ::cv::Mahalanobis(arg0, arg1, arg2);
    return __ret;
}

/// <summary>
/// a synonym for Mahalanobis
/// </summary>
double OpenCV::Cv::core::Mahalonobis(OpenCV::Cv::_InputArray^ v1, OpenCV::Cv::_InputArray^ v2, OpenCV::Cv::_InputArray^ icovar)
{
    auto arg0 = *(::cv::_InputArray*)v1->NativePtr;
    auto arg1 = *(::cv::_InputArray*)v2->NativePtr;
    auto arg2 = *(::cv::_InputArray*)icovar->NativePtr;
    auto __ret = ::cv::Mahalonobis(arg0, arg1, arg2);
    return __ret;
}

/// <summary>
/// performs forward or inverse 1D or 2D Discrete Fourier Transformation
/// </summary>
void OpenCV::Cv::core::Dft(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags, int nonzeroRows)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::dft(arg0, arg1, flags, nonzeroRows);
}

/// <summary>
/// performs inverse 1D or 2D Discrete Fourier Transformation
/// </summary>
void OpenCV::Cv::core::Idft(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags, int nonzeroRows)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::idft(arg0, arg1, flags, nonzeroRows);
}

/// <summary>
/// performs forward or inverse 1D or 2D Discrete Cosine Transformation
/// </summary>
void OpenCV::Cv::core::Dct(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::dct(arg0, arg1, flags);
}

/// <summary>
/// performs inverse 1D or 2D Discrete Cosine Transformation
/// </summary>
void OpenCV::Cv::core::Idct(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags)
{
    auto arg0 = *(::cv::_InputArray*)src->NativePtr;
    auto arg1 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::idct(arg0, arg1, flags);
}

/// <summary>
/// computes element-wise product of the two Fourier spectrums. The second
/// spectrum can optionally be conjugated before the multiplication
/// </summary>
void OpenCV::Cv::core::MulSpectrums(OpenCV::Cv::_InputArray^ a, OpenCV::Cv::_InputArray^ b, OpenCV::Cv::_OutputArray^ c, int flags, bool conjB)
{
    auto arg0 = *(::cv::_InputArray*)a->NativePtr;
    auto arg1 = *(::cv::_InputArray*)b->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)c->NativePtr;
    ::cv::mulSpectrums(arg0, arg1, arg2, flags, conjB);
}

/// <summary>
/// computes the minimal vector size vecsize1 >= vecsize so that the dft() of
/// the vector of length vecsize1 can be computed efficiently
/// </summary>
int OpenCV::Cv::core::GetOptimalDFTSize(int vecsize)
{
    auto __ret = ::cv::getOptimalDFTSize(vecsize);
    return __ret;
}

/// <summary>
/// clusters the input data using k-Means algorithm
/// </summary>
double OpenCV::Cv::core::Kmeans(OpenCV::Cv::_InputArray^ data, int K, OpenCV::Cv::_OutputArray^ bestLabels, OpenCV::Cv::TermCriteria^ criteria, int attempts, int flags, OpenCV::Cv::_OutputArray^ centers)
{
    auto arg0 = *(::cv::_InputArray*)data->NativePtr;
    auto arg2 = *(::cv::_OutputArray*)bestLabels->NativePtr;
    auto arg3 = *(::cv::TermCriteria*)criteria->NativePtr;
    auto arg6 = *(::cv::_OutputArray*)centers->NativePtr;
    auto __ret = ::cv::kmeans(arg0, K, arg2, arg3, attempts, flags, arg6);
    return __ret;
}

/// <summary>
/// returns the thread-local Random number generator
/// </summary>
OpenCV::Cv::RNG^ OpenCV::Cv::core::TheRNG()
{
    auto &__ret = ::cv::theRNG();
    return (&__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::RNG((::cv::RNG*)&__ret);
}

/// <summary>
/// fills array with uniformly-distributed random numbers from the range [low,
/// high)
/// </summary>
void OpenCV::Cv::core::Randu(OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ low, OpenCV::Cv::_InputArray^ high)
{
    auto arg0 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg1 = *(::cv::_InputArray*)low->NativePtr;
    auto arg2 = *(::cv::_InputArray*)high->NativePtr;
    ::cv::randu(arg0, arg1, arg2);
}

/// <summary>
/// fills array with normally-distributed random numbers with the specified
/// mean and the standard deviation
/// </summary>
void OpenCV::Cv::core::Randn(OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ stddev)
{
    auto arg0 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg1 = *(::cv::_InputArray*)mean->NativePtr;
    auto arg2 = *(::cv::_InputArray*)stddev->NativePtr;
    ::cv::randn(arg0, arg1, arg2);
}

/// <summary>
/// shuffles the input array elements
/// </summary>
void OpenCV::Cv::core::RandShuffle(OpenCV::Cv::_OutputArray^ dst, double iterFactor, OpenCV::Cv::RNG^ rng)
{
    auto arg0 = *(::cv::_OutputArray*)dst->NativePtr;
    auto arg2 = (::cv::RNG*)rng->NativePtr;
    ::cv::randShuffle(arg0, iterFactor, arg2);
}

void OpenCV::Cv::core::RandShuffle_(OpenCV::Cv::_OutputArray^ dst, double iterFactor)
{
    auto arg0 = *(::cv::_OutputArray*)dst->NativePtr;
    ::cv::randShuffle_(arg0, iterFactor);
}

/// <summary>
/// returns the function for converting pixels from one data type to another
/// </summary>
OpenCV::Cv::ConvertData^ OpenCV::Cv::core::GetConvertElem(int fromType, int toType)
{
    auto __ret = ::cv::getConvertElem(fromType, toType);
    return safe_cast<OpenCV::Cv::ConvertData^>(System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer(IntPtr(__ret), OpenCV::Cv::ConvertData::typeid));
}

/// <summary>
/// returns the function for converting pixels from one data type to another
/// with the optional scaling
/// </summary>
OpenCV::Cv::ConvertScaleData^ OpenCV::Cv::core::GetConvertScaleElem(int fromType, int toType)
{
    auto __ret = ::cv::getConvertScaleElem(fromType, toType);
    return safe_cast<OpenCV::Cv::ConvertScaleData^>(System::Runtime::InteropServices::Marshal::GetDelegateForFunctionPointer(IntPtr(__ret), OpenCV::Cv::ConvertScaleData::typeid));
}

/// <summary>
/// finds global minimum and maximum sparse array elements and returns their
/// values and their locations
/// </summary>
void OpenCV::Cv::core::minMaxLoc(OpenCV::Cv::SparseMat^ a, double* minVal, double* maxVal, int* minIdx, int* maxIdx)
{
    auto &arg0 = *(::cv::SparseMat*)a->NativePtr;
    auto arg1 = (double*)minVal;
    auto arg2 = (double*)maxVal;
    auto arg3 = (int*)minIdx;
    auto arg4 = (int*)maxIdx;
    ::cv::minMaxLoc(arg0, arg1, arg2, arg3, arg4);
}

/// <summary>
/// computes norm of a sparse matrix
/// </summary>
double OpenCV::Cv::core::norm(OpenCV::Cv::SparseMat^ src, int normType)
{
    auto &arg0 = *(::cv::SparseMat*)src->NativePtr;
    auto __ret = ::cv::norm(arg0, normType);
    return __ret;
}

/// <summary>
/// scales and shifts array elements so that either the specified norm (alpha)
/// or the minimum (alpha) and maximum (beta) array values get the specified
/// values
/// </summary>
void OpenCV::Cv::core::normalize(OpenCV::Cv::SparseMat^ src, OpenCV::Cv::SparseMat^ dst, double alpha, int normType)
{
    auto &arg0 = *(::cv::SparseMat*)src->NativePtr;
    auto &arg1 = *(::cv::SparseMat*)dst->NativePtr;
    ::cv::normalize(arg0, arg1, alpha, normType);
}

void OpenCV::Cv::core::Parallel_for_(OpenCV::Cv::Range^ range, OpenCV::Cv::ParallelLoopBody^ body, double nstripes)
{
    auto &arg0 = *(::cv::Range*)range->NativePtr;
    auto &arg1 = *(::cv::ParallelLoopBody*)body->NativePtr;
    ::cv::parallel_for_(arg0, arg1, nstripes);
}

