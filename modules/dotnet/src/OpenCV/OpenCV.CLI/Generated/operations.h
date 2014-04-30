#pragma once

#include "CppSharp.h"
#include "core.h"
#include <opencv2/core/operations.hpp>

namespace OpenCV
{
    namespace Cv
    {
        ref class FileNode;
        ref class FileNodeIterator;
        ref class FileStorage;
        ref class Formatted;
        ref class Formatter;
        ref class Mat;
        ref class Range;
        ref class SparseMat;
        ref class WriteStructContext;
    }
}

namespace OpenCV
{
    public ref class operations
    {
    public:
    };

    namespace Cv
    {
        public ref class WriteStructContext : ICppInstance
        {
        public:

            property ::cv::WriteStructContext* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            WriteStructContext(::cv::WriteStructContext* native);
            WriteStructContext(System::IntPtr native);
            WriteStructContext(OpenCV::Cv::FileStorage^ _fs, System::String^ name, int flags, System::String^ typeName);

            ~WriteStructContext();

            !WriteStructContext();

            property OpenCV::Cv::FileStorage^ Fs
            {
                OpenCV::Cv::FileStorage^ get();
                void set(OpenCV::Cv::FileStorage^);
            }

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Formatter : ICppInstance
        {
        public:

            property ::cv::Formatter* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Formatter(::cv::Formatter* native);
            Formatter(System::IntPtr native);
            Formatter();

            ~Formatter();

            !Formatter();

            virtual void Write(System::IO::TextWriter^ out, OpenCV::Cv::Mat^ m, int* params, int nparams);

            virtual void Write(System::IO::TextWriter^ out, void* data, int nelems, int type, int* params, int nparams);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static OpenCV::Cv::Formatter^ Get(System::String^ fmt);

            static OpenCV::Cv::Formatter^ SetDefault(OpenCV::Cv::Formatter^ fmt);
        };

        public ref class Formatted : ICppInstance
        {
        public:

            property ::cv::Formatted* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Formatted(::cv::Formatted* native);
            Formatted(System::IntPtr native);
            Formatted(OpenCV::Cv::Mat^ m, OpenCV::Cv::Formatter^ fmt, System::Collections::Generic::List<int>^ params);

            Formatted(OpenCV::Cv::Mat^ m, OpenCV::Cv::Formatter^ fmt, int* params);

            ~Formatted();

            !Formatted();

            property OpenCV::Cv::Mat^ Mtx
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Formatter^ Fmt
            {
                OpenCV::Cv::Formatter^ get();
                void set(OpenCV::Cv::Formatter^);
            }

            property System::Collections::Generic::List<int>^ Params
            {
                System::Collections::Generic::List<int>^ get();
                void set(System::Collections::Generic::List<int>^);
            }

            virtual System::String^ ToString() override;

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class operations
        {
        public:
            static int _interlockedExchangeAdd(int* addr, int delta);
            static int fast_abs(short v);
            static int fast_abs(int v);
            static float fast_abs(float v);
            static double fast_abs(double v);
            static int LU(float* A, unsigned int astep, int m, float* b, unsigned int bstep, int n);
            static int LU(double* A, unsigned int astep, int m, double* b, unsigned int bstep, int n);
            static bool Cholesky(float* A, unsigned int astep, int m, float* b, unsigned int bstep, int n);
            static bool Cholesky(double* A, unsigned int astep, int m, double* b, unsigned int bstep, int n);
            static float NormL2Sqr_(float* a, float* b, int n);
            static float NormL1_(float* a, float* b, int n);
            /// <summary>
            ///////////////////////////////////// XML & YAML I/O
            ////////////////////////////////////
            /// </summary>
            static void Write(OpenCV::Cv::FileStorage^ fs, System::String^ name, int value);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, float value);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, double value);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, System::String^ value);
            static void WriteScalar(OpenCV::Cv::FileStorage^ fs, int value);
            static void writeScalar(OpenCV::Cv::FileStorage^ fs, float value);
            static void writeScalar(OpenCV::Cv::FileStorage^ fs, double value);
            static void writeScalar(OpenCV::Cv::FileStorage^ fs, System::String^ value);
            static void write(OpenCV::Cv::FileStorage^ fs, OpenCV::Cv::Range^ r);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::Range^ r);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::Mat^ value);
            static void write(OpenCV::Cv::FileStorage^ fs, System::String^ name, OpenCV::Cv::SparseMat^ value);
            static void Read(OpenCV::Cv::FileNode^ node, int* value, int default_value);
            static void read(OpenCV::Cv::FileNode^ node, bool* value, bool default_value);
            static void read(OpenCV::Cv::FileNode^ node, short* value, short default_value);
            static void read(OpenCV::Cv::FileNode^ node, float* value, float default_value);
            static void read(OpenCV::Cv::FileNode^ node, double* value, double default_value);
            static void read(OpenCV::Cv::FileNode^ node, System::String^ value, System::String^ default_value);
            static void read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::Range^ value, OpenCV::Cv::Range^ default_value);
            static void read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::Mat^ mat, OpenCV::Cv::Mat^ default_mat);
            static void read(OpenCV::Cv::FileNode^ node, OpenCV::Cv::SparseMat^ mat, OpenCV::Cv::SparseMat^ default_mat);
            static OpenCV::Cv::Formatted^ Format(OpenCV::Cv::Mat^ mtx, System::String^ fmt, System::Collections::Generic::List<int>^ params);
        };
    }
}
