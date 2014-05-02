#pragma once

#include "CppSharp.h"
#include "core.h"
#include <opencv2/core/mat.hpp>

namespace OpenCV
{
    namespace Cv
    {
        ref class Mat;
        ref class MatConstIterator;
        ref class MatExpr;
        ref class MatOp;
        ref class Range;
        ref class SparseMatConstIterator;
        ref class _InputArray;
    }
}

namespace OpenCV
{
    public ref class mat
    {
    public:
    };

    namespace Cv
    {
        /// <summary>
        ///////////////////////////////// Matrix Expressions
        /////////////////////////////////////////
        /// </summary>
        public ref class MatOp : ICppInstance
        {
        public:

            property ::cv::MatOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            MatOp(::cv::MatOp* native);
            MatOp(System::IntPtr native);
            MatOp();

            ~MatOp();

            !MatOp();

            virtual bool ElementWise(OpenCV::Cv::MatExpr^ expr);

            virtual void Assign(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m, int type);

            virtual void Roi(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Range^ rowRange, OpenCV::Cv::Range^ colRange, OpenCV::Cv::MatExpr^ res);

            virtual void Diag(OpenCV::Cv::MatExpr^ expr, int d, OpenCV::Cv::MatExpr^ res);

            virtual void AugAssignAdd(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignSubtract(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignMultiply(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignDivide(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignAnd(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignOr(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void AugAssignXor(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::Mat^ m);

            virtual void Add(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res);

            virtual void Subtract(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res);

            virtual void Multiply(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res, double scale);

            virtual void Multiply(OpenCV::Cv::MatExpr^ expr1, double s, OpenCV::Cv::MatExpr^ res);

            virtual void Divide(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res, double scale);

            virtual void Divide(double s, OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res);

            virtual void Abs(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res);

            virtual void Transpose(OpenCV::Cv::MatExpr^ expr, OpenCV::Cv::MatExpr^ res);

            virtual void Matmul(OpenCV::Cv::MatExpr^ expr1, OpenCV::Cv::MatExpr^ expr2, OpenCV::Cv::MatExpr^ res);

            virtual void Invert(OpenCV::Cv::MatExpr^ expr, int method, OpenCV::Cv::MatExpr^ res);

            virtual int Type(OpenCV::Cv::MatExpr^ expr);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class MatExpr : ICppInstance
        {
        public:

            property ::cv::MatExpr* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            MatExpr(::cv::MatExpr* native);
            MatExpr(System::IntPtr native);
            MatExpr();

            MatExpr(OpenCV::Cv::Mat^ m);

            ~MatExpr();

            !MatExpr();

            property OpenCV::Cv::MatOp^ Op
            {
                OpenCV::Cv::MatOp^ get();
                void set(OpenCV::Cv::MatOp^);
            }

            property int Flags
            {
                int get();
                void set(int);
            }

            property OpenCV::Cv::Mat^ A
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ B
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ C
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property double Alpha
            {
                double get();
                void set(double);
            }

            property double Beta
            {
                double get();
                void set(double);
            }

            static operator OpenCV::Cv::Mat^(OpenCV::Cv::MatExpr^ __op);

            OpenCV::Cv::MatExpr^ Row(int y);

            OpenCV::Cv::MatExpr^ Col(int x);

            OpenCV::Cv::MatExpr^ Diag(int d);

            OpenCV::Cv::Mat^ Cross(OpenCV::Cv::Mat^ m);

            double Dot(OpenCV::Cv::Mat^ m);

            OpenCV::Cv::MatExpr^ T();

            OpenCV::Cv::MatExpr^ Inv(int method);

            OpenCV::Cv::MatExpr^ Mul(OpenCV::Cv::MatExpr^ e, double scale);

            OpenCV::Cv::MatExpr^ Mul(OpenCV::Cv::Mat^ m, double scale);

            int Type();

            static operator OpenCV::Cv::_InputArray^(OpenCV::Cv::MatExpr^ __op);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static OpenCV::Cv::MatExpr^ operator+(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m);

            static OpenCV::Cv::MatExpr^ operator+(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::MatExpr^ e, double s);

            static OpenCV::Cv::MatExpr^ operator*(double s, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::MatExpr^ e, OpenCV::Cv::Mat^ m);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::MatExpr^ e, double s);

            static OpenCV::Cv::MatExpr^ operator/(double s, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::MatExpr^ e1, OpenCV::Cv::MatExpr^ e2);
        };

        public ref class mat
        {
        public:
            static OpenCV::Cv::MatExpr^ Min(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);
            static OpenCV::Cv::MatExpr^ min(OpenCV::Cv::Mat^ a, double s);
            static OpenCV::Cv::MatExpr^ min(double s, OpenCV::Cv::Mat^ a);
            static OpenCV::Cv::MatExpr^ Max(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);
            static OpenCV::Cv::MatExpr^ max(OpenCV::Cv::Mat^ a, double s);
            static OpenCV::Cv::MatExpr^ max(double s, OpenCV::Cv::Mat^ a);
            static OpenCV::Cv::MatExpr^ Abs(OpenCV::Cv::Mat^ m);
            static OpenCV::Cv::MatExpr^ abs(OpenCV::Cv::MatExpr^ e);
        };
    }
}
