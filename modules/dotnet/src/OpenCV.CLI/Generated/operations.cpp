#include "operations.h"
#include "core.h"
#include "operations.h"

#include <sstream>

using namespace System;
using namespace System::Runtime::InteropServices;

OpenCV::Cv::WriteStructContext::WriteStructContext(::cv::WriteStructContext* native)
{
    NativePtr = native;
}

OpenCV::Cv::WriteStructContext::WriteStructContext(System::IntPtr native)
{
    auto __native = (::cv::WriteStructContext*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::WriteStructContext::~WriteStructContext()
{
    delete NativePtr;
}

OpenCV::Cv::WriteStructContext::!WriteStructContext()
{
    delete NativePtr;
}

OpenCV::Cv::WriteStructContext::WriteStructContext(OpenCV::Cv::FileStorage^ _fs, System::String^ name, int flags, System::String^ typeName)
{
    auto &arg0 = *(::cv::FileStorage*)_fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto arg3 = clix::marshalString<clix::E_UTF8>(typeName);
    NativePtr = new ::cv::WriteStructContext(arg0, arg1, flags, arg3);
}

bool OpenCV::Cv::WriteStructContext::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<WriteStructContext^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::WriteStructContext::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::WriteStructContext::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::WriteStructContext::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::WriteStructContext*)object.ToPointer();
}

OpenCV::Cv::FileStorage^ OpenCV::Cv::WriteStructContext::Fs::get()
{
    return (((::cv::WriteStructContext*)NativePtr)->fs == nullptr) ? nullptr : gcnew OpenCV::Cv::FileStorage((::cv::FileStorage*)((::cv::WriteStructContext*)NativePtr)->fs);
}

void OpenCV::Cv::WriteStructContext::Fs::set(OpenCV::Cv::FileStorage^ value)
{
    ((::cv::WriteStructContext*)NativePtr)->fs = (::cv::FileStorage*)value->NativePtr;
}

OpenCV::Cv::Formatter::Formatter(::cv::Formatter* native)
{
    NativePtr = native;
}

OpenCV::Cv::Formatter::Formatter(System::IntPtr native)
{
    auto __native = (::cv::Formatter*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Formatter::~Formatter()
{
    delete NativePtr;
}

OpenCV::Cv::Formatter::!Formatter()
{
    delete NativePtr;
}

void OpenCV::Cv::Formatter::Write(System::IO::TextWriter^ out, OpenCV::Cv::Mat^ m, int* params, int nparams)
{
    msclr::interop::marshal_context ctx_out;
    auto arg0 = ctx_out.marshal_as<std::ostream*>(out);
    auto &arg1 = *(::cv::Mat*)m->NativePtr;
    auto arg2 = (const int*)params;
    ((::cv::Formatter*)NativePtr)->write(*arg0, arg1, arg2, nparams);
}

void OpenCV::Cv::Formatter::Write(System::IO::TextWriter^ out, void* data, int nelems, int type, int* params, int nparams)
{
    msclr::interop::marshal_context ctx_out;
    auto arg0 = ctx_out.marshal_as<std::ostream*>(out);
    auto arg1 = (const void*)data;
    auto arg4 = (const int*)params;
    ((::cv::Formatter*)NativePtr)->write(*arg0, arg1, nelems, type, arg4, nparams);
}

OpenCV::Cv::Formatter^ OpenCV::Cv::Formatter::Get(System::String^ fmt)
{
    auto _arg0 = clix::marshalString<clix::E_UTF8>(fmt);
    auto arg0 = _arg0.c_str();
    auto __ret = ::cv::Formatter::get(arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::Formatter((::cv::Formatter*)__ret);
}

OpenCV::Cv::Formatter^ OpenCV::Cv::Formatter::SetDefault(OpenCV::Cv::Formatter^ fmt)
{
    auto arg0 = (::cv::Formatter*)fmt->NativePtr;
    auto __ret = ::cv::Formatter::setDefault(arg0);
    if (__ret == nullptr) return nullptr;
    return (__ret == nullptr) ? nullptr : gcnew OpenCV::Cv::Formatter((::cv::Formatter*)__ret);
}

OpenCV::Cv::Formatter::Formatter()
{
}

bool OpenCV::Cv::Formatter::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Formatter^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Formatter::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Formatter::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Formatter::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Formatter*)object.ToPointer();
}
OpenCV::Cv::Formatted::Formatted(::cv::Formatted* native)
{
    NativePtr = native;
}

OpenCV::Cv::Formatted::Formatted(System::IntPtr native)
{
    auto __native = (::cv::Formatted*)native.ToPointer();
    NativePtr = __native;
}

OpenCV::Cv::Formatted::~Formatted()
{
    delete NativePtr;
}

OpenCV::Cv::Formatted::!Formatted()
{
    delete NativePtr;
}

OpenCV::Cv::Formatted::Formatted(OpenCV::Cv::Mat^ m, OpenCV::Cv::Formatter^ fmt, System::Collections::Generic::List<int>^ params)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto arg1 = (::cv::Formatter*)fmt->NativePtr;
    auto _tmpparams = std::vector<int>();
    for each(int _element in params)
    {
        auto _marshalElement = _element;
        _tmpparams.push_back(_marshalElement);
    }
    auto arg2 = _tmpparams;
    NativePtr = new ::cv::Formatted(arg0, arg1, arg2);
}

OpenCV::Cv::Formatted::Formatted(OpenCV::Cv::Mat^ m, OpenCV::Cv::Formatter^ fmt, int* params)
{
    auto &arg0 = *(::cv::Mat*)m->NativePtr;
    auto arg1 = (::cv::Formatter*)fmt->NativePtr;
    auto arg2 = (const int*)params;
    NativePtr = new ::cv::Formatted(arg0, arg1, arg2);
}

System::String^ OpenCV::Cv::Formatted::ToString()
{
    std::ostringstream os;
    os << *NativePtr;
    return clix::marshalString<clix::E_UTF8>(os.str());
}

bool OpenCV::Cv::Formatted::Equals(System::Object^ object)
{
    if (!object) return false;
    auto obj = dynamic_cast<Formatted^>(object);

    if (!obj) return false;
    return __Instance == obj->__Instance;
}

int OpenCV::Cv::Formatted::GetHashCode()
{
    return (int)NativePtr;
}

System::IntPtr OpenCV::Cv::Formatted::__Instance::get()
{
    return System::IntPtr(NativePtr);
}

void OpenCV::Cv::Formatted::__Instance::set(System::IntPtr object)
{
    NativePtr = (::cv::Formatted*)object.ToPointer();
}

OpenCV::Cv::Mat^ OpenCV::Cv::Formatted::Mtx::get()
{
    return (&((::cv::Formatted*)NativePtr)->mtx == nullptr) ? nullptr : gcnew OpenCV::Cv::Mat((::cv::Mat*)&((::cv::Formatted*)NativePtr)->mtx);
}

void OpenCV::Cv::Formatted::Mtx::set(OpenCV::Cv::Mat^ value)
{
    ((::cv::Formatted*)NativePtr)->mtx = *(::cv::Mat*)value->NativePtr;
}

OpenCV::Cv::Formatter^ OpenCV::Cv::Formatted::Fmt::get()
{
    return (((::cv::Formatted*)NativePtr)->fmt == nullptr) ? nullptr : gcnew OpenCV::Cv::Formatter((::cv::Formatter*)((::cv::Formatted*)NativePtr)->fmt);
}

void OpenCV::Cv::Formatted::Fmt::set(OpenCV::Cv::Formatter^ value)
{
    ((::cv::Formatted*)NativePtr)->fmt = (::cv::Formatter*)value->NativePtr;
}

System::Collections::Generic::List<int>^ OpenCV::Cv::Formatted::Params::get()
{
    auto _tmp__Params = gcnew System::Collections::Generic::List<int>();
    for(auto _element : ((::cv::Formatted*)NativePtr)->params)
    {
        auto _marshalElement = _element;
        _tmp__Params->Add(_marshalElement);
    }
    return _tmp__Params;
}

void OpenCV::Cv::Formatted::Params::set(System::Collections::Generic::List<int>^ value)
{
    auto _tmpvalue = std::vector<int>();
    for each(int _element in value)
    {
        auto _marshalElement = _element;
        _tmpvalue.push_back(_marshalElement);
    }
    ((::cv::Formatted*)NativePtr)->params = _tmpvalue;
}

int OpenCV::Cv::operations::_interlockedExchangeAdd(int* addr, int delta)
{
    auto arg0 = (int*)addr;
    auto __ret = ::cv::_interlockedExchangeAdd(arg0, delta);
    return __ret;
}

int OpenCV::Cv::operations::fast_abs(short v)
{
    auto __ret = ::cv::fast_abs(v);
    return __ret;
}

int OpenCV::Cv::operations::fast_abs(int v)
{
    auto __ret = ::cv::fast_abs(v);
    return __ret;
}

float OpenCV::Cv::operations::fast_abs(float v)
{
    auto __ret = ::cv::fast_abs(v);
    return __ret;
}

double OpenCV::Cv::operations::fast_abs(double v)
{
    auto __ret = ::cv::fast_abs(v);
    return __ret;
}

int OpenCV::Cv::operations::LU(float* A, unsigned int astep, int m, float* b, unsigned int bstep, int n)
{
    auto arg0 = (float*)A;
    auto arg3 = (float*)b;
    auto __ret = ::cv::LU(arg0, astep, m, arg3, bstep, n);
    return __ret;
}

int OpenCV::Cv::operations::LU(double* A, unsigned int astep, int m, double* b, unsigned int bstep, int n)
{
    auto arg0 = (double*)A;
    auto arg3 = (double*)b;
    auto __ret = ::cv::LU(arg0, astep, m, arg3, bstep, n);
    return __ret;
}

bool OpenCV::Cv::operations::Cholesky(float* A, unsigned int astep, int m, float* b, unsigned int bstep, int n)
{
    auto arg0 = (float*)A;
    auto arg3 = (float*)b;
    auto __ret = ::cv::Cholesky(arg0, astep, m, arg3, bstep, n);
    return __ret;
}

bool OpenCV::Cv::operations::Cholesky(double* A, unsigned int astep, int m, double* b, unsigned int bstep, int n)
{
    auto arg0 = (double*)A;
    auto arg3 = (double*)b;
    auto __ret = ::cv::Cholesky(arg0, astep, m, arg3, bstep, n);
    return __ret;
}

float OpenCV::Cv::operations::NormL2Sqr_(float* a, float* b, int n)
{
    auto arg0 = (const float*)a;
    auto arg1 = (const float*)b;
    auto __ret = ::cv::normL2Sqr_(arg0, arg1, n);
    return __ret;
}

float OpenCV::Cv::operations::NormL1_(float* a, float* b, int n)
{
    auto arg0 = (const float*)a;
    auto arg1 = (const float*)b;
    auto __ret = ::cv::normL1_(arg0, arg1, n);
    return __ret;
}

/// <summary>
///////////////////////////////////// XML & YAML I/O
////////////////////////////////////
/// </summary>
void OpenCV::Cv::operations::Write(OpenCV::Cv::FileStorage^ fs, System::String^ name, int value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    ::cv::write(arg0, arg1, value);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, float value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    ::cv::write(arg0, arg1, value);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, double value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    ::cv::write(arg0, arg1, value);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, System::String^ value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto arg2 = clix::marshalString<clix::E_UTF8>(value);
    ::cv::write(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::WriteScalar(OpenCV::Cv::FileStorage^ fs, int value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    ::cv::writeScalar(arg0, value);
}

void OpenCV::Cv::operations::writeScalar(OpenCV::Cv::FileStorage^ fs, float value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    ::cv::writeScalar(arg0, value);
}

void OpenCV::Cv::operations::writeScalar(OpenCV::Cv::FileStorage^ fs, double value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    ::cv::writeScalar(arg0, value);
}

void OpenCV::Cv::operations::writeScalar(OpenCV::Cv::FileStorage^ fs, System::String^ value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    ::cv::writeScalar(arg0, arg1);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, OpenCV::Cv::Range^ r)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto &arg1 = *(::cv::Range*)r->NativePtr;
    ::cv::write(arg0, arg1);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::Range^ r)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto &arg2 = *(::cv::Range*)r->NativePtr;
    ::cv::write(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::Mat^ value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto &arg2 = *(::cv::Mat*)value->NativePtr;
    ::cv::write(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::SparseMat^ value)
{
    auto &arg0 = *(::cv::FileStorage*)fs->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(name);
    auto &arg2 = *(::cv::SparseMat*)value->NativePtr;
    ::cv::write(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::Read(OpenCV::Cv::FileNode^ node, int* value, int default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = (int&)value;
    ::cv::read(arg0, arg1, default_value);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, bool* value, bool default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = (bool&)value;
    ::cv::read(arg0, arg1, default_value);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, short* value, short default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = (short&)value;
    ::cv::read(arg0, arg1, default_value);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, float* value, float default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = (float&)value;
    ::cv::read(arg0, arg1, default_value);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, double* value, double default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = (double&)value;
    ::cv::read(arg0, arg1, default_value);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, System::String^ value, System::String^ default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto arg1 = clix::marshalString<clix::E_UTF8>(value);
    auto arg2 = clix::marshalString<clix::E_UTF8>(default_value);
    ::cv::read(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::Range^ value, OpenCV::Cv::Range^ default_value)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto &arg1 = *(::cv::Range*)value->NativePtr;
    auto &arg2 = *(::cv::Range*)default_value->NativePtr;
    ::cv::read(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::Mat^ mat, OpenCV::Cv::Mat^ default_mat)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto &arg1 = *(::cv::Mat*)mat->NativePtr;
    auto &arg2 = *(::cv::Mat*)default_mat->NativePtr;
    ::cv::read(arg0, arg1, arg2);
}

void OpenCV::Cv::operations::read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::SparseMat^ mat, OpenCV::Cv::SparseMat^ default_mat)
{
    auto &arg0 = *(::cv::FileNode*)node->NativePtr;
    auto &arg1 = *(::cv::SparseMat*)mat->NativePtr;
    auto &arg2 = *(::cv::SparseMat*)default_mat->NativePtr;
    ::cv::read(arg0, arg1, arg2);
}

OpenCV::Cv::Formatted^ OpenCV::Cv::operations::Format(OpenCV::Cv::Mat^ mtx, System::String^ fmt, System::Collections::Generic::List<int>^ params)
{
    auto &arg0 = *(::cv::Mat*)mtx->NativePtr;
    auto _arg1 = clix::marshalString<clix::E_UTF8>(fmt);
    auto arg1 = _arg1.c_str();
    auto _tmpparams = std::vector<int>();
    for each(int _element in params)
    {
        auto _marshalElement = _element;
        _tmpparams.push_back(_marshalElement);
    }
    auto arg2 = _tmpparams;
    auto __ret = ::cv::format(arg0, arg1, arg2);
    auto ____ret = new ::cv::Formatted(__ret);
    return gcnew OpenCV::Cv::Formatted((::cv::Formatted*)____ret);
}

