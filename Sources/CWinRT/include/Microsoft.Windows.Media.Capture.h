// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Microsoft.UI.h"
#include "Windows.Storage.h"

/* Forward Declarations */
#ifndef ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI;

#endif // ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory;

#endif // ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings;

#endif // ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_FWD_DEFINED__

#ifndef ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_FWD_DEFINED__
#define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_FWD_DEFINED__
    typedef interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings;

#endif // ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFileVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* This,
        __x_ABI_CWindows_CStorage_CIStorageFile** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFileVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFileVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFileVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFileVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFileVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CStorage__CStorageFile_INTERFACE_DEFINED__
    
typedef struct __x_ABI_CMicrosoft_CUI_CWindowId __x_ABI_CMicrosoft_CUI_CWindowId;

typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

typedef enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution;

typedef enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution;

typedef enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode;

typedef enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat;

typedef enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat;

enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution
    {
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_HighestAvailable = 0,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_VerySmallQvga = 1,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_SmallVga = 2,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_MediumXga = 3,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_Large3M = 4,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution_VeryLarge5M = 5,
};

enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution
    {
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution_HighestAvailable = 0,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution_LowDefinition = 1,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution_StandardDefinition = 2,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution_HighDefinition = 3,
};

enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode
    {
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode_PhotoOrVideo = 0,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode_Photo = 1,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode_Video = 2,
};

enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat
    {
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat_Jpeg = 0,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat_Png = 1,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat_JpegXR = 2,
};

enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat
    {
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat_Mp4 = 0,
    __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat_Wmv = 1,
};

#if !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_PhotoSettings)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings** value);
    HRESULT (STDMETHODCALLTYPE* get_VideoSettings)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings** value);
    HRESULT (STDMETHODCALLTYPE* CaptureFileAsync)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMode mode,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CStorage__CStorageFile** operation);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl;

    interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* CreateInstance)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory* This,
        struct __x_ABI_CMicrosoft_CUI_CWindowId windowId,
        __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUI** value);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactoryVtbl;

    interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactoryVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIFactory_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AllowCropping)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_AllowCropping)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_CroppedAspectRatio)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* put_CroppedAspectRatio)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        struct __x_ABI_CWindows_CFoundation_CSize value);
    HRESULT (STDMETHODCALLTYPE* get_CroppedSizeInPixels)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        struct __x_ABI_CWindows_CFoundation_CSize* value);
    HRESULT (STDMETHODCALLTYPE* put_CroppedSizeInPixels)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        struct __x_ABI_CWindows_CFoundation_CSize value);
    HRESULT (STDMETHODCALLTYPE* get_Format)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat* value);
    HRESULT (STDMETHODCALLTYPE* put_Format)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIPhotoFormat value);
    HRESULT (STDMETHODCALLTYPE* get_MaxResolution)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution* value);
    HRESULT (STDMETHODCALLTYPE* put_MaxResolution)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxPhotoResolution value);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl;

    interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettingsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIPhotoCaptureSettings_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_INTERFACE_DEFINED__)
    #define ____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_INTERFACE_DEFINED__
    typedef struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_AllowTrimming)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_AllowTrimming)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_Format)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat* value);
    HRESULT (STDMETHODCALLTYPE* put_Format)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIVideoFormat value);
    HRESULT (STDMETHODCALLTYPE* get_MaxDurationInSeconds)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        FLOAT* value);
    HRESULT (STDMETHODCALLTYPE* put_MaxDurationInSeconds)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        FLOAT value);
    HRESULT (STDMETHODCALLTYPE* get_MaxResolution)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution* value);
    HRESULT (STDMETHODCALLTYPE* put_MaxResolution)(__x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings* This,
        enum __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CCameraCaptureUIMaxVideoResolution value);

        END_INTERFACE
    } __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl;

    interface __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings
    {
        CONST_VTBL struct __x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettingsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings;
#endif /* !defined(____x_ABI_CMicrosoft_CWindows_CMedia_CCapture_CICameraCaptureUIVideoCaptureSettings_INTERFACE_DEFINED__) */
    
