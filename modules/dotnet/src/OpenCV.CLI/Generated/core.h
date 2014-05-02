#pragma once

#include "CppSharp.h"
#include <opencv2/core/core.hpp>

namespace OpenCV
{
    namespace Cv
    {
        enum struct CMP;
        enum struct COVAR;
        enum struct DECOMP;
        enum struct DEPTH_MASK;
        enum struct FONT;
        enum struct GEMM;
        enum struct KMEANS;
        enum struct NORM;
        enum struct SORT;
        enum struct _0;
        enum struct _1;
        ref class Algorithm;
        ref class AlgorithmInfo;
        ref class AlgorithmInfoData;
        ref class FileNode;
        ref class FileNodeIterator;
        ref class FileStorage;
        ref class GlArrays;
        ref class GlBuffer;
        ref class GlCamera;
        ref class GlTexture;
        ref class KDTree;
        ref class LineIterator;
        ref class Mat;
        ref class MatAllocator;
        ref class MatArg;
        ref class MatConstIterator;
        ref class MatExpr;
        ref class MatOp_Base;
        ref class Matx_AddOp;
        ref class Matx_MatMulOp;
        ref class Matx_MulOp;
        ref class Matx_ScaleOp;
        ref class Matx_SubOp;
        ref class Matx_TOp;
        ref class Mutex;
        ref class NAryMatIterator;
        ref class PCA;
        ref class ParallelLoopBody;
        ref class Param;
        ref class RNG;
        ref class RNG_MT19937;
        ref class Range;
        ref class RotatedRect;
        ref class SVD;
        ref class SparseMat;
        ref class SparseMatConstIterator;
        ref class SparseMatIterator;
        ref class TLSDataContainer;
        ref class TermCriteria;
        ref class _InputArray;
        ref class _OutputArray;
        namespace Ogl
        {
            ref class Arrays;
            ref class Buffer;
            ref class Texture2D;
        }

        namespace Gpu
        {
            ref class GpuMat;
        }
    }
}

namespace OpenCV
{
    public ref class core
    {
    public:
    };

    namespace Cv
    {
        public enum struct DECOMP
        {
            DECOMP_LU = 0,
            DECOMP_SVD = 1,
            DECOMP_EIG = 2,
            DECOMP_CHOLESKY = 3,
            DECOMP_QR = 4,
            DECOMP_NORMAL = 16
        };

        public enum struct NORM
        {
            NORM_INF = 1,
            NORM_L1 = 2,
            NORM_L2 = 4,
            NORM_L2SQR = 5,
            NORM_HAMMING = 6,
            NORM_HAMMING2 = 7,
            NORM_TYPE_MASK = 7,
            NORM_RELATIVE = 8,
            NORM_MINMAX = 32
        };

        public enum struct CMP
        {
            CMP_EQ = 0,
            CMP_GT = 1,
            CMP_GE = 2,
            CMP_LT = 3,
            CMP_LE = 4,
            CMP_NE = 5
        };

        [System::Flags]
        public enum struct GEMM
        {
            GEMM_1_T = 1,
            GEMM_2_T = 2,
            GEMM_3_T = 4
        };

        [System::Flags]
        public enum struct _0
        {
            DFT_INVERSE = 1,
            DFT_SCALE = 2,
            DFT_ROWS = 4,
            DFT_COMPLEX_OUTPUT = 16,
            DFT_REAL_OUTPUT = 32,
            DCT_INVERSE = 1,
            DCT_ROWS = 4
        };

        public enum struct DEPTH_MASK
        {
            DEPTH_MASK_8U = 1,
            DEPTH_MASK_8S = 2,
            DEPTH_MASK_16U = 4,
            DEPTH_MASK_16S = 8,
            DEPTH_MASK_32S = 16,
            DEPTH_MASK_32F = 32,
            DEPTH_MASK_64F = 64,
            DEPTH_MASK_ALL = 127,
            DEPTH_MASK_ALL_BUT_8S = 125,
            DEPTH_MASK_FLT = 96
        };

        /// <summary>
        //////////////////////////////////// Mat
        ///////////////////////////////////////////
        /// </summary>
        public enum struct _1
        {
            MAGIC_MASK = -65536,
            TYPE_MASK = 4095,
            DEPTH_MASK = 7
        };

        [System::Flags]
        public enum struct SORT
        {
            SORT_EVERY_ROW = 0,
            SORT_EVERY_COLUMN = 1,
            SORT_ASCENDING = 0,
            SORT_DESCENDING = 16
        };

        [System::Flags]
        public enum struct COVAR
        {
            COVAR_SCRAMBLED = 0,
            COVAR_NORMAL = 1,
            COVAR_USE_AVG = 2,
            COVAR_SCALE = 4,
            COVAR_ROWS = 8,
            COVAR_COLS = 16
        };

        /// <summary>
        /// Various k-Means flags
        /// </summary>
        public enum struct KMEANS
        {
            KMEANS_RANDOM_CENTERS = 0,
            KMEANS_PP_CENTERS = 2,
            KMEANS_USE_INITIAL_LABELS = 1
        };

        public enum struct FONT
        {
            FONT_HERSHEY_SIMPLEX = 0,
            FONT_HERSHEY_PLAIN = 1,
            FONT_HERSHEY_DUPLEX = 2,
            FONT_HERSHEY_COMPLEX = 3,
            FONT_HERSHEY_TRIPLEX = 4,
            FONT_HERSHEY_COMPLEX_SMALL = 5,
            FONT_HERSHEY_SCRIPT_SIMPLEX = 6,
            FONT_HERSHEY_SCRIPT_COMPLEX = 7,
            FONT_ITALIC = 16
        };

        [System::Runtime::InteropServices::UnmanagedFunctionPointer(System::Runtime::InteropServices::CallingConvention::Cdecl)] 
        public delegate int ErrorCallback(int status, System::String^ func_name, System::String^ err_msg, System::String^ file_name, int line, void* userdata);

        [System::Runtime::InteropServices::UnmanagedFunctionPointer(System::Runtime::InteropServices::CallingConvention::Cdecl)] 
        public delegate void ConvertData(void* from, void* to, int cn);

        [System::Runtime::InteropServices::UnmanagedFunctionPointer(System::Runtime::InteropServices::CallingConvention::Cdecl)] 
        public delegate void ConvertScaleData(void* from, void* to, int cn, double alpha, double beta);

        /// <summary>
        /// A short numerical vector.
        /// </summary>
        public ref class Matx_AddOp : ICppInstance
        {
        public:

            property ::cv::Matx_AddOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_AddOp(::cv::Matx_AddOp* native);
            Matx_AddOp(System::IntPtr native);
            Matx_AddOp();

            ~Matx_AddOp();

            !Matx_AddOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Matx_SubOp : ICppInstance
        {
        public:

            property ::cv::Matx_SubOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_SubOp(::cv::Matx_SubOp* native);
            Matx_SubOp(System::IntPtr native);
            Matx_SubOp();

            ~Matx_SubOp();

            !Matx_SubOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Matx_ScaleOp : ICppInstance
        {
        public:

            property ::cv::Matx_ScaleOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_ScaleOp(::cv::Matx_ScaleOp* native);
            Matx_ScaleOp(System::IntPtr native);
            Matx_ScaleOp();

            ~Matx_ScaleOp();

            !Matx_ScaleOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Matx_MulOp : ICppInstance
        {
        public:

            property ::cv::Matx_MulOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_MulOp(::cv::Matx_MulOp* native);
            Matx_MulOp(System::IntPtr native);
            Matx_MulOp();

            ~Matx_MulOp();

            !Matx_MulOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Matx_MatMulOp : ICppInstance
        {
        public:

            property ::cv::Matx_MatMulOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_MatMulOp(::cv::Matx_MatMulOp* native);
            Matx_MatMulOp(System::IntPtr native);
            Matx_MatMulOp();

            ~Matx_MatMulOp();

            !Matx_MatMulOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Matx_TOp : ICppInstance
        {
        public:

            property ::cv::Matx_TOp* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Matx_TOp(::cv::Matx_TOp* native);
            Matx_TOp(System::IntPtr native);
            Matx_TOp();

            ~Matx_TOp();

            !Matx_TOp();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// The rotated 2D rectangle.
        /// </summary>
        public ref class RotatedRect : ICppInstance
        {
        public:

            property ::cv::RotatedRect* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            RotatedRect(::cv::RotatedRect* native);
            RotatedRect(System::IntPtr native);
            /// <summary>
            /// various constructors
            /// </summary>
            RotatedRect();

            ~RotatedRect();

            !RotatedRect();

            property float Angle
            {
                float get();
                void set(float);
            }

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// The 2D range class
        /// </summary>
        public ref class Range : ICppInstance
        {
        public:

            property ::cv::Range* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Range(::cv::Range* native);
            Range(System::IntPtr native);
            /// <summary>
            ///////////////////////////// Range /////////////////////////////////
            /// </summary>
            Range();

            Range(int _start, int _end);

            ~Range();

            !Range();

            property int Start
            {
                int get();
                void set(int);
            }

            property int End
            {
                int get();
                void set(int);
            }

            int Size();

            bool Empty();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static OpenCV::Cv::Range^ All();

            static bool operator==(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2);

            static bool operator!=(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2);

            static bool operator!(OpenCV::Cv::Range^ r);

            static OpenCV::Cv::Range^ operator&(OpenCV::Cv::Range^ r1, OpenCV::Cv::Range^ r2);

            static OpenCV::Cv::Range^ operator+(OpenCV::Cv::Range^ r1, int delta);

            static OpenCV::Cv::Range^ operator+(int delta, OpenCV::Cv::Range^ r1);

            static OpenCV::Cv::Range^ operator-(OpenCV::Cv::Range^ r1, int delta);
        };

        /// <summary>
        /// Proxy datatype for passing Mat's and vector<>'s as input parameters
        /// </summary>
        public ref class _InputArray : ICppInstance
        {
        public:

            enum struct _0
            {
                KIND_SHIFT = 16,
                FIXED_TYPE = -2147483648,
                FIXED_SIZE = 1073741824,
                KIND_MASK = 1073676288,
                NONE = 0,
                MAT = 65536,
                MATX = 131072,
                STD_VECTOR = 196608,
                STD_VECTOR_VECTOR = 262144,
                STD_VECTOR_MAT = 327680,
                EXPR = 393216,
                OPENGL_BUFFER = 458752,
                OPENGL_TEXTURE = 524288,
                GPU_MAT = 589824,
                OCL_MAT = 655360
            };

            property ::cv::_InputArray* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            _InputArray(::cv::_InputArray* native);
            _InputArray(System::IntPtr native);
            _InputArray();

            _InputArray(OpenCV::Cv::Mat^ m);

            _InputArray(OpenCV::Cv::MatExpr^ expr);

            _InputArray(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ vec);

            _InputArray(double* val);

            ~_InputArray();

            !_InputArray();

            property int Flags
            {
                int get();
                void set(int);
            }

            property void* Obj
            {
                void* get();
                void set(void*);
            }

            virtual OpenCV::Cv::Mat^ GetMat(int i);

            virtual void GetMatVector(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv);

            virtual int Kind();

            virtual unsigned int Total(int i);

            virtual int Type(int i);

            virtual int Depth(int i);

            virtual int Channels(int i);

            virtual bool Empty();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Proxy datatype for passing Mat's and vector<>'s as input parameters
        /// </summary>
        public ref class _OutputArray : OpenCV::Cv::_InputArray
        {
        public:

            _OutputArray(::cv::_OutputArray* native);
            _OutputArray(System::IntPtr native);
            _OutputArray();

            _OutputArray(OpenCV::Cv::Mat^ m);

            _OutputArray(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ vec);

            ~_OutputArray();

            !_OutputArray();

            virtual bool FixedSize();

            virtual bool FixedType();

            virtual bool Needed();

            virtual OpenCV::Cv::Mat^ GetMatRef(int i);

            virtual void Create(int rows, int cols, int type, int i, bool allowTransposed, int fixedDepthMask);

            virtual void Create(int dims, int* size, int type, int i, bool allowTransposed, int fixedDepthMask);

            virtual void Release();

            virtual void Clear();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Custom array allocator
        /// </summary>
        public ref class MatAllocator : ICppInstance
        {
        public:

            property ::cv::MatAllocator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            MatAllocator(::cv::MatAllocator* native);
            MatAllocator(System::IntPtr native);
            MatAllocator();

            ~MatAllocator();

            !MatAllocator();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// The n-dimensional matrix class.
        /// </summary>
        public ref class Mat : ICppInstance
        {
        public:

            enum struct _0
            {
                MAGIC_VAL = 1124007936,
                AUTO_STEP = 0,
                CONTINUOUS_FLAG = 16384,
                SUBMATRIX_FLAG = 32768
            };

            ref class MSize : ICppInstance
            {
            public:

                property ::cv::Mat::MSize* NativePtr;
                property System::IntPtr __Instance
                {
                    virtual System::IntPtr get();
                    virtual void set(System::IntPtr instance);
                }

                MSize(::cv::Mat::MSize* native);
                MSize(System::IntPtr native);
                MSize(int* _p);

                ~MSize();

                !MSize();

                property int default[int]
                {
                    int get(int i);
                    void set(int i, int value);
                }

                property int* P
                {
                    int* get();
                    void set(int*);
                }

                static operator int*(OpenCV::Cv::Mat::MSize^ __op);

                static bool operator==(OpenCV::Cv::Mat::MSize^ __op, OpenCV::Cv::Mat::MSize^ sz);

                static bool operator!=(OpenCV::Cv::Mat::MSize^ __op, OpenCV::Cv::Mat::MSize^ sz);
            };

            ref class MStep : ICppInstance
            {
            public:

                property ::cv::Mat::MStep* NativePtr;
                property System::IntPtr __Instance
                {
                    virtual System::IntPtr get();
                    virtual void set(System::IntPtr instance);
                }

                MStep(::cv::Mat::MStep* native);
                MStep(System::IntPtr native);
                MStep();

                MStep(unsigned int s);

                ~MStep();

                !MStep();

                property unsigned int default[int]
                {
                    unsigned int get(int i);
                    void set(int i, unsigned int value);
                }

                property unsigned int* P
                {
                    unsigned int* get();
                    void set(unsigned int*);
                }

                property cli::array<unsigned int>^ Buf
                {
                    cli::array<unsigned int>^ get();
                }

                static operator unsigned int(OpenCV::Cv::Mat::MStep^ __op);
            };

            property ::cv::Mat* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Mat(::cv::Mat* native);
            Mat(System::IntPtr native);
            /// <summary>
            /// default constructor
            /// </summary>
            Mat();

            /// <summary>
            /// constructs 2D matrix of the specified size and type
            /// </summary>
            Mat(int rows, int cols, int type);

            /// <summary>
            /// constructs n-dimensional matrix
            /// </summary>
            Mat(int ndims, int* sizes, int type);

            /// <summary>
            /// constructor for matrix headers pointing to user-allocated data
            /// </summary>
            Mat(int rows, int cols, int type, void* data, unsigned int step);

            Mat(int ndims, int* sizes, int type, void* data, unsigned int* steps);

            /// <summary>
            /// creates a matrix header for a part of the bigger matrix
            /// </summary>
            Mat(OpenCV::Cv::Mat^ m, OpenCV::Cv::Range^ rowRange, OpenCV::Cv::Range^ colRange);

            Mat(OpenCV::Cv::Mat^ m, OpenCV::Cv::Range^ ranges);

            ~Mat();

            !Mat();

            property int Flags
            {
                int get();
                void set(int);
            }

            property int Dims
            {
                int get();
                void set(int);
            }

            property int Rows
            {
                int get();
                void set(int);
            }

            property int Cols
            {
                int get();
                void set(int);
            }

            property int* Refcount
            {
                int* get();
                void set(int*);
            }

            property OpenCV::Cv::MatAllocator^ Allocator
            {
                OpenCV::Cv::MatAllocator^ get();
                void set(OpenCV::Cv::MatAllocator^);
            }

            property OpenCV::Cv::Mat::MSize^ Size
            {
                OpenCV::Cv::Mat::MSize^ get();
                void set(OpenCV::Cv::Mat::MSize^);
            }

            property OpenCV::Cv::Mat::MStep^ Step
            {
                OpenCV::Cv::Mat::MStep^ get();
            }

            /// <summary>
            /// returns a new matrix header for the specified row
            /// </summary>
            OpenCV::Cv::Mat^ Row(int y);

            /// <summary>
            /// returns a new matrix header for the specified column
            /// </summary>
            OpenCV::Cv::Mat^ Col(int x);

            /// <summary>
            /// ... for the specified row span
            /// </summary>
            OpenCV::Cv::Mat^ RowRange(int startrow, int endrow);

            OpenCV::Cv::Mat^ RowRange(OpenCV::Cv::Range^ r);

            /// <summary>
            /// ... for the specified column span
            /// </summary>
            OpenCV::Cv::Mat^ ColRange(int startcol, int endcol);

            OpenCV::Cv::Mat^ ColRange(OpenCV::Cv::Range^ r);

            /// <summary>
            /// ... for the specified diagonal
            /// </summary>
            OpenCV::Cv::Mat^ Diag(int d);

            /// <summary>
            /// returns deep copy of the matrix, i.e. the data is copied
            /// </summary>
            OpenCV::Cv::Mat^ Clone();

            /// <summary>
            /// copies the matrix content to "m".
            /// </summary>
            void CopyTo(OpenCV::Cv::_OutputArray^ m);

            /// <summary>
            /// copies those matrix elements to "m" that are marked with non-zero mask
            /// elements.
            /// </summary>
            void CopyTo(OpenCV::Cv::_OutputArray^ m, OpenCV::Cv::_InputArray^ mask);

            /// <summary>
            /// converts matrix to another datatype with optional scalng. See
            /// cvConvertScale.
            /// </summary>
            void ConvertTo(OpenCV::Cv::_OutputArray^ m, int rtype, double alpha, double beta);

            void AssignTo(OpenCV::Cv::Mat^ m, int type);

            /// <summary>
            /// sets some of the matrix elements to s, according to the mask
            /// </summary>
            OpenCV::Cv::Mat^ SetTo(OpenCV::Cv::_InputArray^ value, OpenCV::Cv::_InputArray^ mask);

            /// <summary>
            /// creates alternative matrix header for the same data, with different
            /// </summary>
            OpenCV::Cv::Mat^ Reshape(int cn, int rows);

            OpenCV::Cv::Mat^ Reshape(int cn, int newndims, int* newsz);

            /// <summary>
            /// matrix transposition by means of matrix expressions
            /// </summary>
            OpenCV::Cv::MatExpr^ T();

            /// <summary>
            /// matrix inversion by means of matrix expressions
            /// </summary>
            OpenCV::Cv::MatExpr^ Inv(int method);

            /// <summary>
            /// per-element matrix multiplication by means of matrix expressions
            /// </summary>
            OpenCV::Cv::MatExpr^ Mul(OpenCV::Cv::_InputArray^ m, double scale);

            /// <summary>
            /// computes cross-product of 2 3D vectors
            /// </summary>
            OpenCV::Cv::Mat^ Cross(OpenCV::Cv::_InputArray^ m);

            /// <summary>
            /// computes dot-product
            /// </summary>
            double Dot(OpenCV::Cv::_InputArray^ m);

            /// <summary>
            /// allocates new matrix data unless the matrix already has specified size and
            /// type.
            /// </summary>
            void Create(int rows, int cols, int type);

            void Create(int ndims, int* sizes, int type);

            /// <summary>
            /// increases the reference counter; use with care to avoid memleaks
            /// </summary>
            void Addref();

            /// <summary>
            /// decreases reference counter;
            /// </summary>
            void Release();

            /// <summary>
            /// deallocates the matrix data
            /// </summary>
            void Deallocate();

            /// <summary>
            /// internal use function; properly re-allocates _size, _step arrays
            /// </summary>
            void CopySize(OpenCV::Cv::Mat^ m);

            /// <summary>
            /// reserves enough space to fit sz hyper-planes
            /// </summary>
            void Reserve(unsigned int sz);

            /// <summary>
            /// resizes matrix to the specified number of hyper-planes
            /// </summary>
            void Resize(unsigned int sz);

            /// <summary>
            /// internal function
            /// </summary>
            void Push_back_(void* elem);

            void Push_back(OpenCV::Cv::Mat^ m);

            /// <summary>
            /// removes several hyper-planes from bottom of the matrix
            /// </summary>
            void Pop_back(unsigned int nelems);

            /// <summary>
            /// moves/resizes the current matrix ROI inside the parent matrix.
            /// </summary>
            OpenCV::Cv::Mat^ AdjustROI(int dtop, int dbottom, int dleft, int dright);

            /// <summary>
            /// returns true iff the matrix data is continuous
            /// </summary>
            bool IsContinuous();

            /// <summary>
            /// returns true if the matrix is a submatrix of another matrix
            /// </summary>
            bool IsSubmatrix();

            /// <summary>
            /// returns element size in bytes,
            /// </summary>
            unsigned int ElemSize();

            /// <summary>
            /// returns the size of element channel in bytes.
            /// </summary>
            unsigned int ElemSize1();

            /// <summary>
            /// returns element type, similar to CV_MAT_TYPE(cvmat->type)
            /// </summary>
            int Type();

            /// <summary>
            /// returns element type, similar to CV_MAT_DEPTH(cvmat->type)
            /// </summary>
            int Depth();

            /// <summary>
            /// returns element type, similar to CV_MAT_CN(cvmat->type)
            /// </summary>
            int Channels();

            /// <summary>
            /// returns step/elemSize1()
            /// </summary>
            unsigned int Step1(int i);

            /// <summary>
            /// returns true if matrix data is NULL
            /// </summary>
            bool Empty();

            /// <summary>
            /// returns the total number of matrix elements
            /// </summary>
            unsigned int Total();

            /// <summary>
            /// returns N if the matrix is 1-channel (N x ptdim) or ptdim-channel (1 x N)
            /// or (N x 1); negative number otherwise
            /// </summary>
            int CheckVector(int elemChannels, int depth, bool requireContinuous);

            static explicit operator OpenCV::Cv::SparseMat^(OpenCV::Cv::Mat^ __op);

            static operator OpenCV::Cv::_InputArray^(OpenCV::Cv::Mat^ __op);

            static operator OpenCV::Cv::_OutputArray^(OpenCV::Cv::Mat^ __op);

            static explicit operator OpenCV::Cv::MatExpr^(OpenCV::Cv::Mat^ __op);

            virtual System::String^ ToString() override;

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            /// <summary>
            /// constructs a square diagonal matrix which main diagonal is vector "d"
            /// </summary>
            static OpenCV::Cv::Mat^ Diag(OpenCV::Cv::Mat^ d);

            /// <summary>
            /// Matlab-style matrix initialization
            /// </summary>
            static OpenCV::Cv::MatExpr^ Zeros(int rows, int cols, int type);

            static OpenCV::Cv::MatExpr^ Ones(int rows, int cols, int type);

            static OpenCV::Cv::MatExpr^ Eye(int rows, int cols, int type);

            static OpenCV::Cv::MatExpr^ operator+(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator+(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator-(OpenCV::Cv::Mat^ m);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::Mat^ a, double s);

            static OpenCV::Cv::MatExpr^ operator*(double s, OpenCV::Cv::Mat^ a);

            static OpenCV::Cv::MatExpr^ operator*(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::Mat^ a, double s);

            static OpenCV::Cv::MatExpr^ operator/(double s, OpenCV::Cv::Mat^ a);

            static OpenCV::Cv::MatExpr^ operator/(OpenCV::Cv::Mat^ m, OpenCV::Cv::MatExpr^ e);

            static OpenCV::Cv::MatExpr^ operator&(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator|(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator^(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);

            static OpenCV::Cv::MatExpr^ operator~(OpenCV::Cv::Mat^ m);

            generic<typename _Tp>
            void Push_back(_Tp elem);

            generic<typename _Tp>
            _Tp At(int i0);

            generic<typename _Tp>
            _Tp At(int i0, int i1);

            generic<typename _Tp>
            _Tp At(int i0, int i1, int i2);

            generic<typename _Tp>
            _Tp At(int* idx);
        };

        /// <summary>
        /// Random Number Generator
        /// </summary>
        public ref class RNG : ICppInstance
        {
        public:

            enum struct _0
            {
                UNIFORM = 0,
                NORMAL = 1
            };

            property ::cv::RNG* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            RNG(::cv::RNG* native);
            RNG(System::IntPtr native);
            RNG();

            ~RNG();

            !RNG();

            /// <summary>
            /// updates the state and returns the next 32-bit unsigned integer random
            /// number
            /// </summary>
            unsigned int Next();

            static operator short(OpenCV::Cv::RNG^ __op);

            static operator unsigned int(OpenCV::Cv::RNG^ __op);

            static operator int(OpenCV::Cv::RNG^ __op);

            static operator float(OpenCV::Cv::RNG^ __op);

            static operator double(OpenCV::Cv::RNG^ __op);

            /// <summary>
            /// returns uniformly distributed integer random number from [a,b) range
            /// </summary>
            int Uniform(int a, int b);

            /// <summary>
            /// returns uniformly distributed floating-point random number from [a,b) range
            /// </summary>
            float Uniform(float a, float b);

            /// <summary>
            /// returns uniformly distributed double-precision floating-point random number
            /// from [a,b) range
            /// </summary>
            double Uniform(double a, double b);

            void Fill(OpenCV::Cv::_OutputArray^ mat, int distType, OpenCV::Cv::_InputArray^ a, OpenCV::Cv::_InputArray^ b, bool saturateRange);

            /// <summary>
            /// returns Gaussian random variate with mean zero.
            /// </summary>
            double Gaussian(double sigma);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Random Number Generator - MT
        /// </summary>
        public ref class RNG_MT19937 : ICppInstance
        {
        public:

            property ::cv::RNG_MT19937* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            RNG_MT19937(::cv::RNG_MT19937* native);
            RNG_MT19937(System::IntPtr native);
            RNG_MT19937();

            RNG_MT19937(unsigned int s);

            ~RNG_MT19937();

            !RNG_MT19937();

            void Seed(unsigned int s);

            unsigned int Next();

            static operator int(OpenCV::Cv::RNG_MT19937^ __op);

            static operator unsigned int(OpenCV::Cv::RNG_MT19937^ __op);

            static operator float(OpenCV::Cv::RNG_MT19937^ __op);

            static operator double(OpenCV::Cv::RNG_MT19937^ __op);

            /// <summary>
            /// returns uniformly distributed integer random number from [a,b) range
            /// </summary>
            int Uniform(int a, int b);

            /// <summary>
            /// returns uniformly distributed floating-point random number from [a,b) range
            /// </summary>
            float Uniform(float a, float b);

            /// <summary>
            /// returns uniformly distributed double-precision floating-point random number
            /// from [a,b) range
            /// </summary>
            double Uniform(double a, double b);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Termination criteria in iterative algorithms
        /// </summary>
        public ref class TermCriteria : ICppInstance
        {
        public:

            enum struct _0
            {
                /// <summary> the maximum number of iterations or elements to compute </summary>
                COUNT = 1,
                /// <summary> ditto </summary>
                MAX_ITER = 1,
                /// <summary> the desired accuracy or change in parameters at which the iterative algorithm stops </summary>
                EPS = 2
            };

            property ::cv::TermCriteria* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            TermCriteria(::cv::TermCriteria* native);
            TermCriteria(System::IntPtr native);
            /// <summary>
            /// default constructor
            /// </summary>
            TermCriteria();

            /// <summary>
            /// full constructor
            /// </summary>
            TermCriteria(int type, int maxCount, double epsilon);

            ~TermCriteria();

            !TermCriteria();

            property int Type
            {
                int get();
                void set(int);
            }

            property int MaxCount
            {
                int get();
                void set(int);
            }

            property double Epsilon
            {
                double get();
                void set(double);
            }

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Principal Component Analysis
        /// </summary>
        public ref class PCA : ICppInstance
        {
        public:

            property ::cv::PCA* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            PCA(::cv::PCA* native);
            PCA(System::IntPtr native);
            /// <summary>
            /// default constructor
            /// </summary>
            PCA();

            /// <summary>
            /// the constructor that performs PCA
            /// </summary>
            PCA(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, int maxComponents);

            PCA(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, double retainedVariance);

            ~PCA();

            !PCA();

            property OpenCV::Cv::Mat^ Eigenvectors
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ Eigenvalues
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ Mean
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            OpenCV::Cv::PCA^ ComputeVar(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, int flags, double retainedVariance);

            /// <summary>
            /// projects vector from the original space to the principal components
            /// subspace
            /// </summary>
            OpenCV::Cv::Mat^ Project(OpenCV::Cv::_InputArray^ vec);

            /// <summary>
            /// projects vector from the original space to the principal components
            /// subspace
            /// </summary>
            void Project(OpenCV::Cv::_InputArray^ vec, OpenCV::Cv::_OutputArray^ result);

            /// <summary>
            /// reconstructs the original vector from the projection
            /// </summary>
            OpenCV::Cv::Mat^ BackProject(OpenCV::Cv::_InputArray^ vec);

            /// <summary>
            /// reconstructs the original vector from the projection
            /// </summary>
            void BackProject(OpenCV::Cv::_InputArray^ vec, OpenCV::Cv::_OutputArray^ result);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Singular Value Decomposition class
        /// </summary>
        public ref class SVD : ICppInstance
        {
        public:

            [System::Flags]
            enum struct _0
            {
                MODIFY_A = 1,
                NO_UV = 2,
                FULL_UV = 4
            };

            property ::cv::SVD* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            SVD(::cv::SVD* native);
            SVD(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            SVD();

            /// <summary>
            /// the constructor that performs SVD
            /// </summary>
            SVD(OpenCV::Cv::_InputArray^ src, int flags);

            ~SVD();

            !SVD();

            property OpenCV::Cv::Mat^ U
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ W
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property OpenCV::Cv::Mat^ Vt
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            /// <summary>
            /// performs back substitution, so that dst is the solution or pseudo-solution
            /// of m*dst = rhs, where m is the decomposed matrix
            /// </summary>
            void BackSubst(OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            /// <summary>
            /// decomposes matrix and stores the results to user-provided matrices
            /// </summary>
            static void Compute(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, OpenCV::Cv::_OutputArray^ u, OpenCV::Cv::_OutputArray^ vt, int flags);

            /// <summary>
            /// computes singular values of a matrix
            /// </summary>
            static void Compute(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, int flags);

            /// <summary>
            /// performs back substitution
            /// </summary>
            static void BackSubst(OpenCV::Cv::_InputArray^ w, OpenCV::Cv::_InputArray^ u, OpenCV::Cv::_InputArray^ vt, OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst);

            /// <summary>
            /// finds dst = arg min_{|dst|=1} |m*dst|
            /// </summary>
            static void SolveZ(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
        };

        /// <summary>
        /// Line iterator class
        /// </summary>
        public ref class LineIterator : ICppInstance
        {
        public:

            property ::cv::LineIterator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            LineIterator(::cv::LineIterator* native);
            LineIterator(System::IntPtr native);
            ~LineIterator();

            !LineIterator();

            property int Step
            {
                int get();
                void set(int);
            }

            property int ElemSize
            {
                int get();
                void set(int);
            }

            property int Err
            {
                int get();
                void set(int);
            }

            property int Count
            {
                int get();
                void set(int);
            }

            property int MinusDelta
            {
                int get();
                void set(int);
            }

            property int PlusDelta
            {
                int get();
                void set(int);
            }

            property int MinusStep
            {
                int get();
                void set(int);
            }

            property int PlusStep
            {
                int get();
                void set(int);
            }

            /// <summary>
            /// prefix increment operator (++it). shifts iterator to the next pixel
            /// </summary>
            static OpenCV::Cv::LineIterator^ operator++(OpenCV::Cv::LineIterator^ __op);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        ///////// Iterators & Comma initializers //////////////////
        /// </summary>
        public ref class MatConstIterator : ICppInstance
        {
        public:

            property ::cv::MatConstIterator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            MatConstIterator(::cv::MatConstIterator* native);
            MatConstIterator(System::IntPtr native);
            /// <summary>
            /// default constructor
            /// </summary>
            MatConstIterator();

            /// <summary>
            /// constructor that sets the iterator to the beginning of the matrix
            /// </summary>
            MatConstIterator(OpenCV::Cv::Mat^ _m);

            /// <summary>
            /// constructor that sets the iterator to the specified element of the matrix
            /// </summary>
            MatConstIterator(OpenCV::Cv::Mat^ _m, int _row, int _col);

            ~MatConstIterator();

            !MatConstIterator();

            property OpenCV::Cv::Mat^ M
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property unsigned int ElemSize
            {
                unsigned int get();
                void set(unsigned int);
            }

            /// <summary>
            /// decrements the iterator
            /// </summary>
            static OpenCV::Cv::MatConstIterator^ operator--(OpenCV::Cv::MatConstIterator^ __op);

            /// <summary>
            /// increments the iterator
            /// </summary>
            static OpenCV::Cv::MatConstIterator^ operator++(OpenCV::Cv::MatConstIterator^ __op);

            /// <summary>
            /// returns the current iterator position
            /// </summary>
            void Pos(int* _idx);

            int Lpos();

            void Seek(int ofs, bool relative);

            void Seek(int* _idx, bool relative);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static bool operator==(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b);

            static bool operator<(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b);

            static bool operator>(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b);

            static bool operator<=(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b);

            static bool operator>=(OpenCV::Cv::MatConstIterator^ a, OpenCV::Cv::MatConstIterator^ b);

            static int operator-(OpenCV::Cv::MatConstIterator^ b, OpenCV::Cv::MatConstIterator^ a);

            static OpenCV::Cv::MatConstIterator^ operator+(OpenCV::Cv::MatConstIterator^ a, int ofs);

            static OpenCV::Cv::MatConstIterator^ operator+(int ofs, OpenCV::Cv::MatConstIterator^ a);

            static OpenCV::Cv::MatConstIterator^ operator-(OpenCV::Cv::MatConstIterator^ a, int ofs);
        };

        /// <summary>
        /// n-Dimensional Dense Matrix Iterator Class.
        /// </summary>
        public ref class NAryMatIterator : ICppInstance
        {
        public:

            property ::cv::NAryMatIterator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            NAryMatIterator(::cv::NAryMatIterator* native);
            NAryMatIterator(System::IntPtr native);
            ~NAryMatIterator();

            !NAryMatIterator();

            property OpenCV::Cv::Mat^ Arrays
            {
                OpenCV::Cv::Mat^ get();
            }

            property OpenCV::Cv::Mat^ Planes
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property int Narrays
            {
                int get();
                void set(int);
            }

            property unsigned int Nplanes
            {
                unsigned int get();
                void set(unsigned int);
            }

            property unsigned int Size
            {
                unsigned int get();
                void set(unsigned int);
            }

            /// <summary>
            /// proceeds to the next plane of every iterated matrix
            /// </summary>
            static OpenCV::Cv::NAryMatIterator^ operator++(OpenCV::Cv::NAryMatIterator^ __op);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// Sparse matrix class.
        /// </summary>
        public ref class SparseMat : ICppInstance
        {
        public:

            enum struct _0
            {
                MAGIC_VAL = 1123876864,
                MAX_DIM = 32,
                HASH_SCALE = 1540483477,
                HASH_BIT = -2147483648
            };

            /// <summary>
            /// sparse matrix node - element of a hash table
            /// </summary>
            ref class Node : ICppInstance
            {
            public:

                property ::cv::SparseMat::Node* NativePtr;
                property System::IntPtr __Instance
                {
                    virtual System::IntPtr get();
                    virtual void set(System::IntPtr instance);
                }

                Node(::cv::SparseMat::Node* native);
                Node(System::IntPtr native);
                Node();

                ~Node();

                !Node();

                property unsigned int Hashval
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property unsigned int Next
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property cli::array<int>^ Idx
                {
                    cli::array<int>^ get();
                }
            };

            /// <summary>
            /// the sparse matrix header
            /// </summary>
            ref class Hdr : ICppInstance
            {
            public:

                property ::cv::SparseMat::Hdr* NativePtr;
                property System::IntPtr __Instance
                {
                    virtual System::IntPtr get();
                    virtual void set(System::IntPtr instance);
                }

                Hdr(::cv::SparseMat::Hdr* native);
                Hdr(System::IntPtr native);
                Hdr(int _dims, int* _sizes, int _type);

                ~Hdr();

                !Hdr();

                property int Refcount
                {
                    int get();
                    void set(int);
                }

                property int Dims
                {
                    int get();
                    void set(int);
                }

                property int ValueOffset
                {
                    int get();
                    void set(int);
                }

                property unsigned int NodeSize
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property unsigned int NodeCount
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property unsigned int FreeList
                {
                    unsigned int get();
                    void set(unsigned int);
                }

                property System::Collections::Generic::List<unsigned int>^ Hashtab
                {
                    System::Collections::Generic::List<unsigned int>^ get();
                    void set(System::Collections::Generic::List<unsigned int>^);
                }

                property cli::array<int>^ Size
                {
                    cli::array<int>^ get();
                }

                void Clear();
            };

            property ::cv::SparseMat* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            SparseMat(::cv::SparseMat* native);
            SparseMat(System::IntPtr native);
            /// <summary>
            /// default constructor
            /// </summary>
            SparseMat();

            /// <summary>
            /// creates matrix of the specified size and type
            /// </summary>
            SparseMat(int dims, int* _sizes, int _type);

            /// <summary>
            /// converts dense 2d matrix to the sparse form
            /// </summary>
            SparseMat(OpenCV::Cv::Mat^ m);

            ~SparseMat();

            !SparseMat();

            property int Flags
            {
                int get();
                void set(int);
            }

            property OpenCV::Cv::SparseMat::Hdr^ hdr
            {
                OpenCV::Cv::SparseMat::Hdr^ get();
                void set(OpenCV::Cv::SparseMat::Hdr^);
            }

            /// <summary>
            /// creates full copy of the matrix
            /// </summary>
            OpenCV::Cv::SparseMat^ Clone();

            /// <summary>
            /// copies all the data to the destination matrix. All the previous content of
            /// m is erased
            /// </summary>
            void CopyTo(OpenCV::Cv::SparseMat^ m);

            /// <summary>
            /// converts sparse matrix to dense matrix.
            /// </summary>
            void CopyTo(OpenCV::Cv::Mat^ m);

            /// <summary>
            /// multiplies all the matrix elements by the specified scale factor alpha and
            /// converts the results to the specified data type
            /// </summary>
            void ConvertTo(OpenCV::Cv::SparseMat^ m, int rtype, double alpha);

            /// <summary>
            /// converts sparse matrix to dense n-dim matrix with optional type conversion
            /// and scaling.
            /// </summary>
            void ConvertTo(OpenCV::Cv::Mat^ m, int rtype, double alpha, double beta);

            void AssignTo(OpenCV::Cv::SparseMat^ m, int type);

            /// <summary>
            /// reallocates sparse matrix.
            /// </summary>
            void Create(int dims, int* _sizes, int _type);

            /// <summary>
            /// sets all the sparse matrix elements to 0, which means clearing the hash
            /// table.
            /// </summary>
            void Clear();

            /// <summary>
            /// manually increments the reference counter to the header.
            /// </summary>
            void Addref();

            void Release();

            /// <summary>
            /// returns the size of each element in bytes (not including the overhead - the
            /// space occupied by SparseMat::Node elements)
            /// </summary>
            unsigned int ElemSize();

            /// <summary>
            /// returns elemSize()/channels()
            /// </summary>
            unsigned int ElemSize1();

            /// <summary>
            /// returns type of sparse matrix elements
            /// </summary>
            int Type();

            /// <summary>
            /// returns the depth of sparse matrix elements
            /// </summary>
            int Depth();

            /// <summary>
            /// returns the number of channels
            /// </summary>
            int Channels();

            /// <summary>
            /// returns the array of sizes, or NULL if the matrix is not allocated
            /// </summary>
            int* Size();

            /// <summary>
            /// returns the size of i-th matrix dimension (or 0)
            /// </summary>
            int Size(int i);

            /// <summary>
            /// returns the matrix dimensionality
            /// </summary>
            int Dims();

            /// <summary>
            /// returns the number of non-zero elements (=the number of hash table nodes)
            /// </summary>
            unsigned int Nzcount();

            /// <summary>
            /// computes the element hash value (1D case)
            /// </summary>
            unsigned int Hash(int i0);

            /// <summary>
            /// computes the element hash value (2D case)
            /// </summary>
            unsigned int Hash(int i0, int i1);

            /// <summary>
            /// computes the element hash value (3D case)
            /// </summary>
            unsigned int Hash(int i0, int i1, int i2);

            /// <summary>
            /// computes the element hash value (nD case)
            /// </summary>
            unsigned int Hash(int* idx);

            /// <summary>
            /// erases the specified element (2D case)
            /// </summary>
            void Erase(int i0, int i1, unsigned int* hashval);

            /// <summary>
            /// erases the specified element (3D case)
            /// </summary>
            void Erase(int i0, int i1, int i2, unsigned int* hashval);

            /// <summary>
            /// erases the specified element (nD case)
            /// </summary>
            void Erase(int* idx, unsigned int* hashval);

            /// <summary>
            /// return the sparse matrix iterator pointing to the first sparse matrix
            /// element
            /// </summary>
            OpenCV::Cv::SparseMatIterator^ Begin();

            /// <summary>
            /// return the sparse matrix iterator pointing to the element following the
            /// last sparse matrix element
            /// </summary>
            OpenCV::Cv::SparseMatIterator^ End();

            void RemoveNode(unsigned int hidx, unsigned int nidx, unsigned int previdx);

            void ResizeHashTab(unsigned int newsize);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            generic<typename _Tp>
            _Tp Ref(int i0, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Ref(int i0, int i1, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Ref(int i0, int i1, int i2, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Ref(int* idx, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Value(int i0, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Value(int i0, int i1, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Value(int i0, int i1, int i2, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Value(int* idx, unsigned int* hashval);

            generic<typename _Tp>
            _Tp Value(OpenCV::Cv::SparseMat::Node^ n);
        };

        /// <summary>
        /// Read-Only Sparse Matrix Iterator. Here is how to use the iterator to
        /// compute the sum of floating-point sparse matrix elements:
        /// </summary>
        public ref class SparseMatConstIterator : ICppInstance
        {
        public:

            property ::cv::SparseMatConstIterator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            SparseMatConstIterator(::cv::SparseMatConstIterator* native);
            SparseMatConstIterator(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            SparseMatConstIterator();

            /// <summary>
            /// the full constructor setting the iterator to the first sparse matrix
            /// element
            /// </summary>
            SparseMatConstIterator(OpenCV::Cv::SparseMat^ _m);

            ~SparseMatConstIterator();

            !SparseMatConstIterator();

            property OpenCV::Cv::SparseMat^ M
            {
                OpenCV::Cv::SparseMat^ get();
                void set(OpenCV::Cv::SparseMat^);
            }

            property unsigned int Hashidx
            {
                unsigned int get();
                void set(unsigned int);
            }

            /// <summary>
            /// returns the current node of the sparse matrix. it.node->idx is the current
            /// element index
            /// </summary>
            OpenCV::Cv::SparseMat::Node^ Node();

            /// <summary>
            /// moves iterator to the next element
            /// </summary>
            static OpenCV::Cv::SparseMatConstIterator^ operator++(OpenCV::Cv::SparseMatConstIterator^ __op);

            /// <summary>
            /// moves iterator to the element after the last element
            /// </summary>
            void SeekEnd();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static bool operator==(OpenCV::Cv::SparseMatConstIterator^ it1, OpenCV::Cv::SparseMatConstIterator^ it2);

            static bool operator!=(OpenCV::Cv::SparseMatConstIterator^ it1, OpenCV::Cv::SparseMatConstIterator^ it2);

            generic<typename _Tp>
            _Tp Value();
        };

        /// <summary>
        //////////////////////// multi-dimensional sparse matrix
        //////////////////////////
        /// </summary>
        public ref class SparseMatIterator : OpenCV::Cv::SparseMatConstIterator
        {
        public:

            SparseMatIterator(::cv::SparseMatIterator* native);
            SparseMatIterator(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            SparseMatIterator();

            /// <summary>
            /// the full constructor setting the iterator to the first sparse matrix
            /// element
            /// </summary>
            SparseMatIterator(OpenCV::Cv::SparseMat^ _m);

            ~SparseMatIterator();

            !SparseMatIterator();

            /// <summary>
            /// returns pointer to the current sparse matrix node. it.node->idx is the
            /// index of the current element (do not modify it!)
            /// </summary>
            OpenCV::Cv::SparseMat::Node^ Node();

            /// <summary>
            /// moves iterator to the next element
            /// </summary>
            static OpenCV::Cv::SparseMatIterator^ operator++(OpenCV::Cv::SparseMatIterator^ __op);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            generic<typename _Tp>
            _Tp Value();
        };

        /// <summary>
        /// Fast Nearest Neighbor Search Class.
        /// </summary>
        public ref class KDTree : ICppInstance
        {
        public:

            /// <summary>
            /// The node of the search tree.
            /// </summary>
            ref class Node : ICppInstance
            {
            public:

                property ::cv::KDTree::Node* NativePtr;
                property System::IntPtr __Instance
                {
                    virtual System::IntPtr get();
                    virtual void set(System::IntPtr instance);
                }

                Node(::cv::KDTree::Node* native);
                Node(System::IntPtr native);
                Node();

                Node(int _idx, int _left, int _right, float _boundary);

                ~Node();

                !Node();

                property int Idx
                {
                    int get();
                    void set(int);
                }

                property int Left
                {
                    int get();
                    void set(int);
                }

                property int Right
                {
                    int get();
                    void set(int);
                }

                property float Boundary
                {
                    float get();
                    void set(float);
                }
            };

            property ::cv::KDTree* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            KDTree(::cv::KDTree* native);
            KDTree(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            KDTree();

            /// <summary>
            /// the full constructor that builds the search tree
            /// </summary>
            KDTree(OpenCV::Cv::_InputArray^ points, bool copyAndReorderPoints);

            /// <summary>
            /// the full constructor that builds the search tree
            /// </summary>
            KDTree(OpenCV::Cv::_InputArray^ points, OpenCV::Cv::_InputArray^ _labels, bool copyAndReorderPoints);

            ~KDTree();

            !KDTree();

            property System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>^ Nodes
            {
                System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>^ get();
                void set(System::Collections::Generic::List<OpenCV::Cv::KDTree::Node^>^);
            }

            property OpenCV::Cv::Mat^ Points
            {
                OpenCV::Cv::Mat^ get();
                void set(OpenCV::Cv::Mat^);
            }

            property System::Collections::Generic::List<int>^ Labels
            {
                System::Collections::Generic::List<int>^ get();
                void set(System::Collections::Generic::List<int>^);
            }

            property int MaxDepth
            {
                int get();
                void set(int);
            }

            property int NormType
            {
                int get();
                void set(int);
            }

            /// <summary>
            /// builds the search tree
            /// </summary>
            void Build(OpenCV::Cv::_InputArray^ points, bool copyAndReorderPoints);

            /// <summary>
            /// builds the search tree
            /// </summary>
            void Build(OpenCV::Cv::_InputArray^ points, OpenCV::Cv::_InputArray^ labels, bool copyAndReorderPoints);

            /// <summary>
            /// finds the K nearest neighbors of "vec" while looking at Emax (at most)
            /// leaves
            /// </summary>
            int FindNearest(OpenCV::Cv::_InputArray^ vec, int K, int Emax, OpenCV::Cv::_OutputArray^ neighborsIdx, OpenCV::Cv::_OutputArray^ neighbors, OpenCV::Cv::_OutputArray^ dist, OpenCV::Cv::_OutputArray^ labels);

            /// <summary>
            /// finds all the points from the initial set that belong to the specified box
            /// </summary>
            void FindOrthoRange(OpenCV::Cv::_InputArray^ minBounds, OpenCV::Cv::_InputArray^ maxBounds, OpenCV::Cv::_OutputArray^ neighborsIdx, OpenCV::Cv::_OutputArray^ neighbors, OpenCV::Cv::_OutputArray^ labels);

            /// <summary>
            /// returns vectors with the specified indices
            /// </summary>
            void GetPoints(OpenCV::Cv::_InputArray^ idx, OpenCV::Cv::_OutputArray^ pts, OpenCV::Cv::_OutputArray^ labels);

            /// <summary>
            /// return a vector with the specified index
            /// </summary>
            float* GetPoint(int ptidx, int* label);

            /// <summary>
            /// returns the search space dimensionality
            /// </summary>
            int Dims();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// XML/YAML File Storage Class.
        /// </summary>
        public ref class FileStorage : ICppInstance
        {
        public:

            /// <summary>
            /// file storage mode
            /// </summary>
            enum struct _0
            {
                READ = 0,
                /// <summary> read mode </summary>
                WRITE = 1,
                /// <summary> write mode </summary>
                APPEND = 2,
                /// <summary> append mode </summary>
                MEMORY = 4,
                /// <summary> append mode </summary>
                FORMAT_MASK = 56,
                /// <summary> append mode </summary>
                FORMAT_AUTO = 0,
                /// <summary> append mode </summary>
                FORMAT_XML = 8,
                /// <summary> append mode </summary>
                FORMAT_YAML = 16
            };

            [System::Flags]
            enum struct _1
            {
                UNDEFINED = 0,
                VALUE_EXPECTED = 1,
                NAME_EXPECTED = 2,
                INSIDE_MAP = 4
            };

            property ::cv::FileStorage* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            FileStorage(::cv::FileStorage* native);
            FileStorage(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            FileStorage();

            /// <summary>
            /// the full constructor that opens file storage for reading or writing
            /// </summary>
            FileStorage(System::String^ source, int flags, System::String^ encoding);

            ~FileStorage();

            !FileStorage();

            property OpenCV::Cv::FileNode^ default[System::String^]
            {
                OpenCV::Cv::FileNode^ get(System::String^ nodename);
            }

            property System::String^ Elname
            {
                System::String^ get();
                void set(System::String^);
            }

            property System::Collections::Generic::List<char>^ Structs
            {
                System::Collections::Generic::List<char>^ get();
                void set(System::Collections::Generic::List<char>^);
            }

            property int State
            {
                int get();
                void set(int);
            }

            /// <summary>
            /// opens file storage for reading or writing. The previous storage is closed
            /// with release()
            /// </summary>
            virtual bool Open(System::String^ filename, int flags, System::String^ encoding);

            /// <summary>
            /// returns true if the object is associated with currently opened file.
            /// </summary>
            virtual bool IsOpened();

            /// <summary>
            /// closes the file and releases all the memory buffers
            /// </summary>
            virtual void Release();

            /// <summary>
            /// closes the file, releases all the memory buffers and returns the text
            /// string
            /// </summary>
            System::String^ ReleaseAndGetString();

            /// <summary>
            /// returns the first element of the top-level mapping
            /// </summary>
            OpenCV::Cv::FileNode^ GetFirstTopLevelNode();

            /// <summary>
            /// returns the top-level mapping. YAML supports multiple streams
            /// </summary>
            OpenCV::Cv::FileNode^ Root(int streamidx);

            /// <summary>
            /// writes the registered C structure (CvMat, CvMatND, CvSeq). See cvWrite()
            /// </summary>
            void WriteObj(System::String^ name, void* obj);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            /// <summary>
            /// returns the normalized object name for the specified file name
            /// </summary>
            static System::String^ GetDefaultObjectName(System::String^ filename);
        };

        /// <summary>
        ///////////////////////////////////// XML & YAML I/O
        ////////////////////////////////////
        /// </summary>
        public ref class FileNode : ICppInstance
        {
        public:

            /// <summary>
            /// type of the file storage node
            /// </summary>
            enum struct _0
            {
                /// <summary> empty node </summary>
                NONE = 0,
                /// <summary> an integer </summary>
                INT = 1,
                /// <summary> floating-point number </summary>
                REAL = 2,
                /// <summary> synonym or REAL </summary>
                FLOAT = 2,
                /// <summary> text string in UTF-8 encoding </summary>
                STR = 3,
                /// <summary> synonym for STR </summary>
                STRING = 3,
                /// <summary> integer of size size_t. Typically used for storing complex dynamic structures where some elements reference the others </summary>
                REF = 4,
                /// <summary> sequence </summary>
                SEQ = 5,
                /// <summary> mapping </summary>
                MAP = 6,
                TYPE_MASK = 7,
                /// <summary> compact representation of a sequence or mapping. Used only by YAML writer </summary>
                FLOW = 8,
                /// <summary> a registered object (e.g. a matrix) </summary>
                USER = 16,
                /// <summary> empty structure (sequence or mapping) </summary>
                EMPTY = 32,
                /// <summary> the node has a name (i.e. it is element of a mapping) </summary>
                NAMED = 64
            };

            property ::cv::FileNode* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            FileNode(::cv::FileNode* native);
            FileNode(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            FileNode();

            ~FileNode();

            !FileNode();

            property OpenCV::Cv::FileNode^ default[System::String^]
            {
                OpenCV::Cv::FileNode^ get(System::String^ nodename);
            }

            property OpenCV::Cv::FileNode^ default[int]
            {
                OpenCV::Cv::FileNode^ get(int i);
            }

            /// <summary>
            /// returns type of the node
            /// </summary>
            int Type();

            /// <summary>
            /// returns true if the node is empty
            /// </summary>
            bool Empty();

            /// <summary>
            /// returns true if the node is a "none" object
            /// </summary>
            bool IsNone();

            /// <summary>
            /// returns true if the node is a sequence
            /// </summary>
            bool IsSeq();

            /// <summary>
            /// returns true if the node is a mapping
            /// </summary>
            bool IsMap();

            /// <summary>
            /// returns true if the node is an integer
            /// </summary>
            bool IsInt();

            /// <summary>
            /// returns true if the node is a floating-point number
            /// </summary>
            bool IsReal();

            /// <summary>
            /// returns true if the node is a text string
            /// </summary>
            bool IsString();

            /// <summary>
            /// returns true if the node has a name
            /// </summary>
            bool IsNamed();

            /// <summary>
            /// returns the node name or an empty string if the node is nameless
            /// </summary>
            System::String^ Name();

            /// <summary>
            /// returns the number of elements in the node, if it is a sequence or mapping,
            /// or 1 otherwise.
            /// </summary>
            unsigned int Size();

            /// <summary>
            /// returns the node content as an integer. If the node stores floating-point
            /// number, it is rounded.
            /// </summary>
            static operator int(OpenCV::Cv::FileNode^ __op);

            /// <summary>
            /// returns the node content as float
            /// </summary>
            static operator float(OpenCV::Cv::FileNode^ __op);

            /// <summary>
            /// returns the node content as double
            /// </summary>
            static operator double(OpenCV::Cv::FileNode^ __op);

            /// <summary>
            /// returns the node content as text string
            /// </summary>
            static operator System::String^(OpenCV::Cv::FileNode^ __op);

            /// <summary>
            /// returns iterator pointing to the first node element
            /// </summary>
            OpenCV::Cv::FileNodeIterator^ Begin();

            /// <summary>
            /// returns iterator pointing to the element following the last node element
            /// </summary>
            OpenCV::Cv::FileNodeIterator^ End();

            /// <summary>
            /// reads the registered object and returns pointer to it
            /// </summary>
            void* ReadObj();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        /// File Node Iterator
        /// </summary>
        public ref class FileNodeIterator : ICppInstance
        {
        public:

            property ::cv::FileNodeIterator* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            FileNodeIterator(::cv::FileNodeIterator* native);
            FileNodeIterator(System::IntPtr native);
            /// <summary>
            /// the default constructor
            /// </summary>
            FileNodeIterator();

            ~FileNodeIterator();

            !FileNodeIterator();

            property unsigned int Remaining
            {
                unsigned int get();
                void set(unsigned int);
            }

            /// <summary>
            /// moves iterator to the next node
            /// </summary>
            static OpenCV::Cv::FileNodeIterator^ operator++(OpenCV::Cv::FileNodeIterator^ __op);

            /// <summary>
            /// moves iterator to the previous node
            /// </summary>
            static OpenCV::Cv::FileNodeIterator^ operator--(OpenCV::Cv::FileNodeIterator^ __op);

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static bool operator==(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2);

            static bool operator!=(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2);

            static int operator-(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2);

            static bool operator<(OpenCV::Cv::FileNodeIterator^ it1, OpenCV::Cv::FileNodeIterator^ it2);
        };

        /// <summary>
        /// Base class for high-level OpenCV algorithms
        /// </summary>
        public ref class Algorithm : ICppInstance
        {
        public:

            [System::Runtime::InteropServices::UnmanagedFunctionPointer(System::Runtime::InteropServices::CallingConvention::Cdecl)] 
            delegate OpenCV::Cv::Algorithm^ Constructor();

            property ::cv::Algorithm* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Algorithm(::cv::Algorithm* native);
            Algorithm(System::IntPtr native);
            Algorithm();

            ~Algorithm();

            !Algorithm();

            System::String^ Name();

            int GetInt(System::String^ name);

            double GetDouble(System::String^ name);

            bool GetBool(System::String^ name);

            System::String^ GetString(System::String^ name);

            OpenCV::Cv::Mat^ GetMat(System::String^ name);

            System::Collections::Generic::List<OpenCV::Cv::Mat^>^ GetMatVector(System::String^ name);

            void Set(System::String^ name, int value);

            void Set(System::String^ name, double value);

            void Set(System::String^ name, bool value);

            void Set(System::String^ name, System::String^ value);

            void Set(System::String^ name, OpenCV::Cv::Mat^ value);

            void Set(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value);

            void SetInt(System::String^ name, int value);

            void SetDouble(System::String^ name, double value);

            void SetBool(System::String^ name, bool value);

            void SetString(System::String^ name, System::String^ value);

            void SetMat(System::String^ name, OpenCV::Cv::Mat^ value);

            void SetMatVector(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value);

            void Set1(System::String^ name, int value);

            void Set1(System::String^ name, double value);

            void Set1(System::String^ name, bool value);

            void Set1(System::String^ name, System::String^ value);

            void Set1(System::String^ name, OpenCV::Cv::Mat^ value);

            void Set1(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value);

            void SetInt1(System::String^ name, int value);

            void SetDouble1(System::String^ name, double value);

            void SetBool1(System::String^ name, bool value);

            void SetString1(System::String^ name, System::String^ value);

            void SetMat1(System::String^ name, OpenCV::Cv::Mat^ value);

            void SetMatVector1(System::String^ name, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ value);

            System::String^ ParamHelp(System::String^ name);

            int ParamType(System::String^ name);

            void GetParams(System::Collections::Generic::List<System::String^>^ names);

            virtual void Write(OpenCV::Cv::FileStorage^ fs);

            virtual void Read(OpenCV::Cv::FileNode^ fn);

            virtual OpenCV::Cv::AlgorithmInfo^ Info();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;

            static void GetList(System::Collections::Generic::List<System::String^>^ algorithms);
        };

        public ref class AlgorithmInfo : ICppInstance
        {
        public:

            property ::cv::AlgorithmInfo* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            AlgorithmInfo(::cv::AlgorithmInfo* native);
            AlgorithmInfo(System::IntPtr native);
            AlgorithmInfo(System::String^ name, OpenCV::Cv::Algorithm::Constructor^ create);

            ~AlgorithmInfo();

            !AlgorithmInfo();

            void Get(OpenCV::Cv::Algorithm^ algo, System::String^ name, int argType, void* value);

            System::String^ ParamHelp(System::String^ name);

            int ParamType(System::String^ name);

            void GetParams(System::Collections::Generic::List<System::String^>^ names);

            void Write(OpenCV::Cv::Algorithm^ algo, OpenCV::Cv::FileStorage^ fs);

            void Read(OpenCV::Cv::Algorithm^ algo, OpenCV::Cv::FileNode^ fn);

            System::String^ Name();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class Param : ICppInstance
        {
        public:

            enum struct _0
            {
                INT = 0,
                BOOLEAN = 1,
                REAL = 2,
                STRING = 3,
                MAT = 4,
                MAT_VECTOR = 5,
                ALGORITHM = 6,
                FLOAT = 7,
                UNSIGNED_INT = 8,
                UINT64 = 9,
                SHORT = 10,
                UCHAR = 11
            };

            property ::cv::Param* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Param(::cv::Param* native);
            Param(System::IntPtr native);
            Param();

            ~Param();

            !Param();

            property int Type
            {
                int get();
                void set(int);
            }

            property int Offset
            {
                int get();
                void set(int);
            }

            property bool Readonly
            {
                bool get();
                void set(bool);
            }

            property System::String^ Help
            {
                System::String^ get();
                void set(System::String^);
            }

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        //////////////////////////// Parallel Primitives
        //////////////////////////////////
        /// </summary>
        public ref class ParallelLoopBody : ICppInstance
        {
        public:

            property ::cv::ParallelLoopBody* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            ParallelLoopBody(::cv::ParallelLoopBody* native);
            ParallelLoopBody(System::IntPtr native);
            ParallelLoopBody();

            ~ParallelLoopBody();

            !ParallelLoopBody();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        /// <summary>
        //////////////////////// Synchronization Primitives
        ///////////////////////////////
        /// </summary>
        public ref class Mutex : ICppInstance
        {
        public:

            property ::cv::Mutex* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            Mutex(::cv::Mutex* native);
            Mutex(System::IntPtr native);
            Mutex();

            ~Mutex();

            !Mutex();

            void Lock();

            bool Trylock();

            void Unlock();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class TLSDataContainer : ICppInstance
        {
        public:

            property ::cv::TLSDataContainer* NativePtr;
            property System::IntPtr __Instance
            {
                virtual System::IntPtr get();
                virtual void set(System::IntPtr instance);
            }

            TLSDataContainer(::cv::TLSDataContainer* native);
            TLSDataContainer(System::IntPtr native);
            virtual void* CreateDataInstance();

            virtual void DeleteDataInstance(void* data);

            void* GetData();

            virtual bool Equals(System::Object^ object) override;

            virtual int GetHashCode() override;
        };

        public ref class core
        {
        public:
            static System::String^ Format(System::String^ fmt);
            static System::String^ Tempfile(System::String^ suffix);
            /// <summary>
            /// When the break-on-error mode is set, the default error handler issues a
            /// hardware exception, which can make debugging more convenient.
            /// </summary>
            static bool SetBreakOnError(bool flag);
            /// <summary>
            /// The function sets the new error handler, called from cv::error().
            /// </summary>
            static OpenCV::Cv::ErrorCallback^ RedirectError(OpenCV::Cv::ErrorCallback^ errCallback, void* userdata, void** prevUserdata);
            static void Glob(System::String^ pattern, System::Collections::Generic::List<System::String^>^ result, bool recursive);
            static void SetNumThreads(int nthreads);
            static int GetNumThreads();
            static int GetThreadNum();
            static System::String^ GetBuildInformation();
            /// <summary>
            /// Returns the number of ticks per seconds.
            /// </summary>
            static double GetTickFrequency();
            /// <summary>
            /// Returns SSE etc. support status
            /// </summary>
            static bool CheckHardwareSupport(int feature);
            /// <summary>
            /// returns the number of CPUs (including hyper-threading)
            /// </summary>
            static int GetNumberOfCPUs();
            /// <summary>
            /// Allocates memory buffer
            /// </summary>
            static void* FastMalloc(unsigned int bufSize);
            /// <summary>
            /// Frees the memory allocated with cv::fastMalloc
            /// </summary>
            static void FastFree(void* ptr);
            /// <summary>
            /// Aligns buffer size by the certain number of bytes
            /// </summary>
            static unsigned int AlignSize(unsigned int sz, int n);
            /// <summary>
            /// Turns on/off available optimization
            /// </summary>
            static void SetUseOptimized(bool onoff);
            /// <summary>
            /// Returns the current optimization status
            /// </summary>
            static bool UseOptimized();
            static OpenCV::Cv::_OutputArray^ NoArray();
            static unsigned int GetElemSize(int type);
            /// <summary>
            /// swaps two matrices
            /// </summary>
            static void Swap(OpenCV::Cv::Mat^ a, OpenCV::Cv::Mat^ b);
            /// <summary>
            /// adds one matrix to another (dst = src1 + src2)
            /// </summary>
            static void Add(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask, int dtype);
            /// <summary>
            /// subtracts one matrix from another (dst = src1 - src2)
            /// </summary>
            static void Subtract(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask, int dtype);
            /// <summary>
            /// computes element-wise weighted product of the two arrays (dst =
            /// scale*src1*src2)
            /// </summary>
            static void Multiply(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, double scale, int dtype);
            /// <summary>
            /// computes element-wise weighted quotient of the two arrays (dst =
            /// scale*src1/src2)
            /// </summary>
            static void Divide(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, double scale, int dtype);
            /// <summary>
            /// computes element-wise weighted reciprocal of an array (dst = scale/src2)
            /// </summary>
            static void divide(double scale, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int dtype);
            /// <summary>
            /// adds scaled array to another one (dst = alpha*src1 + src2)
            /// </summary>
            static void ScaleAdd(OpenCV::Cv::_InputArray^ src1, double alpha, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes weighted sum of two arrays (dst = alpha*src1 + beta*src2 + gamma)
            /// </summary>
            static void AddWeighted(OpenCV::Cv::_InputArray^ src1, double alpha, OpenCV::Cv::_InputArray^ src2, double beta, double gamma, OpenCV::Cv::_OutputArray^ dst, int dtype);
            /// <summary>
            /// scales array elements, computes absolute values and converts the results to
            /// 8-bit unsigned integers: dst(i)=saturate_cast<uchar>abs(src(i)*alpha+beta)
            /// </summary>
            static void ConvertScaleAbs(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, double alpha, double beta);
            /// <summary>
            /// transforms array of numbers using a lookup table: dst(i)=lut(src(i))
            /// </summary>
            static void LUT(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ lut, OpenCV::Cv::_OutputArray^ dst, int interpolation);
            /// <summary>
            /// computes the number of nonzero array elements
            /// </summary>
            static int CountNonZero(OpenCV::Cv::_InputArray^ src);
            /// <summary>
            /// returns the list of locations of non-zero pixels
            /// </summary>
            static void FindNonZero(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ idx);
            /// <summary>
            /// computes mean value and standard deviation of all or selected array
            /// elements
            /// </summary>
            static void MeanStdDev(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ stddev, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// computes norm of the selected array part
            /// </summary>
            static double Norm(OpenCV::Cv::_InputArray^ src1, int normType, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// computes norm of selected part of the difference between two arrays
            /// </summary>
            static double norm(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, int normType, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// naive nearest neighbor finder
            /// </summary>
            static void BatchDistance(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dist, int dtype, OpenCV::Cv::_OutputArray^ nidx, int normType, int K, OpenCV::Cv::_InputArray^ mask, int update, bool crosscheck);
            /// <summary>
            /// scales and shifts array elements so that either the specified norm (alpha)
            /// or the minimum (alpha) and maximum (beta) array values get the specified
            /// values
            /// </summary>
            static void Normalize(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, double alpha, double beta, int norm_type, int dtype, OpenCV::Cv::_InputArray^ mask);
            static void MinMaxIdx(OpenCV::Cv::_InputArray^ src, double* minVal, double* maxVal, int* minIdx, int* maxIdx, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// transforms 2D matrix to 1D row or column vector by taking sum, minimum,
            /// maximum or mean value over all the rows
            /// </summary>
            static void Reduce(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int dim, int rtype, int dtype);
            /// <summary>
            /// makes multi-channel array out of several single-channel arrays
            /// </summary>
            static void Merge(OpenCV::Cv::Mat^ mv, unsigned int count, OpenCV::Cv::_OutputArray^ dst);
            static void merge(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// makes multi-channel array out of several single-channel arrays
            /// </summary>
            static void merge(OpenCV::Cv::_InputArray^ mv, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// copies each plane of a multi-channel array to a dedicated array
            /// </summary>
            static void Split(OpenCV::Cv::Mat^ src, OpenCV::Cv::Mat^ mvbegin);
            static void split(OpenCV::Cv::Mat^ m, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ mv);
            /// <summary>
            /// copies each plane of a multi-channel array to a dedicated array
            /// </summary>
            static void split(OpenCV::Cv::_InputArray^ m, OpenCV::Cv::_OutputArray^ mv);
            /// <summary>
            /// copies selected channels from the input arrays to the selected channels of
            /// the output arrays
            /// </summary>
            static void MixChannels(OpenCV::Cv::Mat^ src, unsigned int nsrcs, OpenCV::Cv::Mat^ dst, unsigned int ndsts, int* fromTo, unsigned int npairs);
            static void mixChannels(System::Collections::Generic::List<OpenCV::Cv::Mat^>^ src, System::Collections::Generic::List<OpenCV::Cv::Mat^>^ dst, int* fromTo, unsigned int npairs);
            static void mixChannels(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ dst, System::Collections::Generic::List<int>^ fromTo);
            /// <summary>
            /// extracts a single channel from src (coi is 0-based index)
            /// </summary>
            static void ExtractChannel(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int coi);
            /// <summary>
            /// inserts a single channel to dst (coi is 0-based index)
            /// </summary>
            static void InsertChannel(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int coi);
            /// <summary>
            /// reverses the order of the rows, columns or both in a matrix
            /// </summary>
            static void Flip(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flipCode);
            /// <summary>
            /// replicates the input matrix the specified number of times in the horizontal
            /// and/or vertical direction
            /// </summary>
            static void Repeat(OpenCV::Cv::_InputArray^ src, int ny, int nx, OpenCV::Cv::_OutputArray^ dst);
            static OpenCV::Cv::Mat^ repeat(OpenCV::Cv::Mat^ src, int ny, int nx);
            static void Hconcat(OpenCV::Cv::Mat^ src, unsigned int nsrc, OpenCV::Cv::_OutputArray^ dst);
            static void hconcat(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            static void hconcat(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            static void Vconcat(OpenCV::Cv::Mat^ src, unsigned int nsrc, OpenCV::Cv::_OutputArray^ dst);
            static void vconcat(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            static void vconcat(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes bitwise conjunction of the two arrays (dst = src1 & src2)
            /// </summary>
            static void Bitwise_and(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// computes bitwise disjunction of the two arrays (dst = src1 | src2)
            /// </summary>
            static void Bitwise_or(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// computes bitwise exclusive-or of the two arrays (dst = src1 ^ src2)
            /// </summary>
            static void Bitwise_xor(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// inverts each bit of array (dst = ~src)
            /// </summary>
            static void Bitwise_not(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mask);
            /// <summary>
            /// computes element-wise absolute difference of two arrays (dst = abs(src1 -
            /// src2))
            /// </summary>
            static void Absdiff(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// set mask elements for those array elements which are within the
            /// element-specific bounding box (dst = lowerb <= src && src < upperb)
            /// </summary>
            static void InRange(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_InputArray^ lowerb, OpenCV::Cv::_InputArray^ upperb, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// compares elements of two arrays (dst = src1 <cmpop> src2)
            /// </summary>
            static void Compare(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int cmpop);
            /// <summary>
            /// computes per-element minimum of two arrays (dst = min(src1, src2))
            /// </summary>
            static void Min(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes per-element maximum of two arrays (dst = max(src1, src2))
            /// </summary>
            static void Max(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes per-element minimum of two arrays (dst = min(src1, src2))
            /// </summary>
            static void min(OpenCV::Cv::Mat^ src1, OpenCV::Cv::Mat^ src2, OpenCV::Cv::Mat^ dst);
            /// <summary>
            /// computes per-element minimum of array and scalar (dst = min(src1, src2))
            /// </summary>
            static void min(OpenCV::Cv::Mat^ src1, double src2, OpenCV::Cv::Mat^ dst);
            /// <summary>
            /// computes per-element maximum of two arrays (dst = max(src1, src2))
            /// </summary>
            static void max(OpenCV::Cv::Mat^ src1, OpenCV::Cv::Mat^ src2, OpenCV::Cv::Mat^ dst);
            /// <summary>
            /// computes per-element maximum of array and scalar (dst = max(src1, src2))
            /// </summary>
            static void max(OpenCV::Cv::Mat^ src1, double src2, OpenCV::Cv::Mat^ dst);
            /// <summary>
            /// computes square root of each matrix element (dst = src**0.5)
            /// </summary>
            static void Sqrt(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// raises the input matrix elements to the specified power (b = a**power)
            /// </summary>
            static void Pow(OpenCV::Cv::_InputArray^ src, double power, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes exponent of each matrix element (dst = e**src)
            /// </summary>
            static void Exp(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes natural logarithm of absolute value of each matrix element: dst =
            /// log(abs(src))
            /// </summary>
            static void Log(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes cube root of the argument
            /// </summary>
            static float CubeRoot(float val);
            /// <summary>
            /// computes the angle in degrees (0..360) of the vector (x,y)
            /// </summary>
            static float FastAtan2(float y, float x);
            static void exp(float* src, float* dst, int n);
            static void log(float* src, float* dst, int n);
            static void fastAtan2(float* y, float* x, float* dst, int n, bool angleInDegrees);
            static void Magnitude(float* x, float* y, float* dst, int n);
            /// <summary>
            /// converts polar coordinates to Cartesian
            /// </summary>
            static void PolarToCart(OpenCV::Cv::_InputArray^ magnitude, OpenCV::Cv::_InputArray^ angle, OpenCV::Cv::_OutputArray^ x, OpenCV::Cv::_OutputArray^ y, bool angleInDegrees);
            /// <summary>
            /// converts Cartesian coordinates to polar
            /// </summary>
            static void CartToPolar(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ magnitude, OpenCV::Cv::_OutputArray^ angle, bool angleInDegrees);
            /// <summary>
            /// computes angle (angle(i)) of each (x(i), y(i)) vector
            /// </summary>
            static void Phase(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ angle, bool angleInDegrees);
            /// <summary>
            /// computes magnitude (magnitude(i)) of each (x(i), y(i)) vector
            /// </summary>
            static void magnitude(OpenCV::Cv::_InputArray^ x, OpenCV::Cv::_InputArray^ y, OpenCV::Cv::_OutputArray^ magnitude);
            /// <summary>
            /// converts NaN's to the given number
            /// </summary>
            static void PatchNaNs(OpenCV::Cv::_OutputArray^ a, double val);
            /// <summary>
            /// implements generalized matrix product algorithm GEMM from BLAS
            /// </summary>
            static void Gemm(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, double alpha, OpenCV::Cv::_InputArray^ src3, double gamma, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// multiplies matrix by its transposition from the left or from the right
            /// </summary>
            static void MulTransposed(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, bool aTa, OpenCV::Cv::_InputArray^ delta, double scale, int dtype);
            /// <summary>
            /// transposes the matrix
            /// </summary>
            static void Transpose(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// performs affine transformation of each element of multi-channel input
            /// matrix
            /// </summary>
            static void Transform(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ m);
            /// <summary>
            /// performs perspective transformation of each element of multi-channel input
            /// matrix
            /// </summary>
            static void PerspectiveTransform(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ m);
            /// <summary>
            /// extends the symmetrical matrix from the lower half or from the upper half
            /// </summary>
            static void CompleteSymm(OpenCV::Cv::_OutputArray^ mtx, bool lowerToUpper);
            /// <summary>
            /// computes determinant of a square matrix
            /// </summary>
            static double Determinant(OpenCV::Cv::_InputArray^ mtx);
            /// <summary>
            /// computes inverse or pseudo-inverse matrix
            /// </summary>
            static double Invert(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// solves linear system or a least-square problem
            /// </summary>
            static bool Solve(OpenCV::Cv::_InputArray^ src1, OpenCV::Cv::_InputArray^ src2, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// sorts independently each matrix row or each matrix column
            /// </summary>
            static void Sort(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// sorts independently each matrix row or each matrix column
            /// </summary>
            static void SortIdx(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// finds real roots of a cubic polynomial
            /// </summary>
            static int SolveCubic(OpenCV::Cv::_InputArray^ coeffs, OpenCV::Cv::_OutputArray^ roots);
            /// <summary>
            /// finds real and complex roots of a polynomial
            /// </summary>
            static double SolvePoly(OpenCV::Cv::_InputArray^ coeffs, OpenCV::Cv::_OutputArray^ roots, int maxIters);
            /// <summary>
            /// finds eigenvalues of a symmetric matrix
            /// </summary>
            static bool Eigen(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ eigenvalues, int lowindex, int highindex);
            /// <summary>
            /// finds eigenvalues and eigenvectors of a symmetric matrix
            /// </summary>
            static bool eigen(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ eigenvalues, OpenCV::Cv::_OutputArray^ eigenvectors, int lowindex, int highindex);
            static bool eigen(OpenCV::Cv::_InputArray^ src, bool computeEigenvectors, OpenCV::Cv::_OutputArray^ eigenvalues, OpenCV::Cv::_OutputArray^ eigenvectors);
            /// <summary>
            /// computes covariation matrix of a set of samples
            /// </summary>
            static void CalcCovarMatrix(OpenCV::Cv::Mat^ samples, int nsamples, OpenCV::Cv::Mat^ covar, OpenCV::Cv::Mat^ mean, int flags, int ctype);
            /// <summary>
            /// computes covariation matrix of a set of samples
            /// </summary>
            static void calcCovarMatrix(OpenCV::Cv::_InputArray^ samples, OpenCV::Cv::_OutputArray^ covar, OpenCV::Cv::_OutputArray^ mean, int flags, int ctype);
            static void PCACompute(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ eigenvectors, int maxComponents);
            static void PCAComputeVar(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_OutputArray^ mean, OpenCV::Cv::_OutputArray^ eigenvectors, double retainedVariance);
            static void PCAProject(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ eigenvectors, OpenCV::Cv::_OutputArray^ result);
            static void PCABackProject(OpenCV::Cv::_InputArray^ data, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ eigenvectors, OpenCV::Cv::_OutputArray^ result);
            /// <summary>
            /// computes SVD of src
            /// </summary>
            static void SVDecomp(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ w, OpenCV::Cv::_OutputArray^ u, OpenCV::Cv::_OutputArray^ vt, int flags);
            /// <summary>
            /// performs back substitution for the previously computed SVD
            /// </summary>
            static void SVBackSubst(OpenCV::Cv::_InputArray^ w, OpenCV::Cv::_InputArray^ u, OpenCV::Cv::_InputArray^ vt, OpenCV::Cv::_InputArray^ rhs, OpenCV::Cv::_OutputArray^ dst);
            /// <summary>
            /// computes Mahalanobis distance between two vectors:
            /// sqrt((v1-v2)'*icovar*(v1-v2)), where icovar is the inverse covariation
            /// matrix
            /// </summary>
            static double Mahalanobis(OpenCV::Cv::_InputArray^ v1, OpenCV::Cv::_InputArray^ v2, OpenCV::Cv::_InputArray^ icovar);
            /// <summary>
            /// a synonym for Mahalanobis
            /// </summary>
            static double Mahalonobis(OpenCV::Cv::_InputArray^ v1, OpenCV::Cv::_InputArray^ v2, OpenCV::Cv::_InputArray^ icovar);
            /// <summary>
            /// performs forward or inverse 1D or 2D Discrete Fourier Transformation
            /// </summary>
            static void Dft(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags, int nonzeroRows);
            /// <summary>
            /// performs inverse 1D or 2D Discrete Fourier Transformation
            /// </summary>
            static void Idft(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags, int nonzeroRows);
            /// <summary>
            /// performs forward or inverse 1D or 2D Discrete Cosine Transformation
            /// </summary>
            static void Dct(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// performs inverse 1D or 2D Discrete Cosine Transformation
            /// </summary>
            static void Idct(OpenCV::Cv::_InputArray^ src, OpenCV::Cv::_OutputArray^ dst, int flags);
            /// <summary>
            /// computes element-wise product of the two Fourier spectrums. The second
            /// spectrum can optionally be conjugated before the multiplication
            /// </summary>
            static void MulSpectrums(OpenCV::Cv::_InputArray^ a, OpenCV::Cv::_InputArray^ b, OpenCV::Cv::_OutputArray^ c, int flags, bool conjB);
            /// <summary>
            /// computes the minimal vector size vecsize1 >= vecsize so that the dft() of
            /// the vector of length vecsize1 can be computed efficiently
            /// </summary>
            static int GetOptimalDFTSize(int vecsize);
            /// <summary>
            /// clusters the input data using k-Means algorithm
            /// </summary>
            static double Kmeans(OpenCV::Cv::_InputArray^ data, int K, OpenCV::Cv::_OutputArray^ bestLabels, OpenCV::Cv::TermCriteria^ criteria, int attempts, int flags, OpenCV::Cv::_OutputArray^ centers);
            /// <summary>
            /// returns the thread-local Random number generator
            /// </summary>
            static OpenCV::Cv::RNG^ TheRNG();
            /// <summary>
            /// fills array with uniformly-distributed random numbers from the range [low,
            /// high)
            /// </summary>
            static void Randu(OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ low, OpenCV::Cv::_InputArray^ high);
            /// <summary>
            /// fills array with normally-distributed random numbers with the specified
            /// mean and the standard deviation
            /// </summary>
            static void Randn(OpenCV::Cv::_OutputArray^ dst, OpenCV::Cv::_InputArray^ mean, OpenCV::Cv::_InputArray^ stddev);
            /// <summary>
            /// shuffles the input array elements
            /// </summary>
            static void RandShuffle(OpenCV::Cv::_OutputArray^ dst, double iterFactor, OpenCV::Cv::RNG^ rng);
            static void RandShuffle_(OpenCV::Cv::_OutputArray^ dst, double iterFactor);
            /// <summary>
            /// returns the function for converting pixels from one data type to another
            /// </summary>
            static OpenCV::Cv::ConvertData^ GetConvertElem(int fromType, int toType);
            /// <summary>
            /// returns the function for converting pixels from one data type to another
            /// with the optional scaling
            /// </summary>
            static OpenCV::Cv::ConvertScaleData^ GetConvertScaleElem(int fromType, int toType);
            /// <summary>
            /// finds global minimum and maximum sparse array elements and returns their
            /// values and their locations
            /// </summary>
            static void minMaxLoc(OpenCV::Cv::SparseMat^ a, double* minVal, double* maxVal, int* minIdx, int* maxIdx);
            /// <summary>
            /// computes norm of a sparse matrix
            /// </summary>
            static double norm(OpenCV::Cv::SparseMat^ src, int normType);
            /// <summary>
            /// scales and shifts array elements so that either the specified norm (alpha)
            /// or the minimum (alpha) and maximum (beta) array values get the specified
            /// values
            /// </summary>
            static void normalize(OpenCV::Cv::SparseMat^ src, OpenCV::Cv::SparseMat^ dst, double alpha, int normType);
            static void Parallel_for_(OpenCV::Cv::Range^ range, OpenCV::Cv::ParallelLoopBody^ body, double nstripes);
        };

        namespace Gpu
        {
        }

        namespace Ogl
        {
        }
    }
}
