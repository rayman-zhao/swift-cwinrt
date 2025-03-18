// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Activation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.Spatial.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 __x_ABI_CWindows_CFoundation_CNumerics_CVector2;

typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;

#ifndef ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;

#endif // ____x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* IsCurrentViewPresentedOnHolographicDisplay)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* IsHolographicActivation)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics* This,
        __x_ABI_CWindows_CApplicationModel_CActivation_CIActivatedEventArgs* activatedEventArgs,
        boolean* result);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicApplicationPreviewStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* SetPlacementOverride)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem* coordinateSystem,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 topCenterPosition,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal);
    HRESULT (STDMETHODCALLTYPE* SetPlacementOverrideWithMaxSize)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This,
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem* coordinateSystem,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 topCenterPosition,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 normal,
        struct __x_ABI_CWindows_CFoundation_CNumerics_CVector2 maxSize);
    HRESULT (STDMETHODCALLTYPE* ResetPlacementOverride)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetForCurrentView)(__x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics* This,
        __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreview** result);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CHolographic_CIHolographicKeyboardPlacementOverridePreviewStatics_INTERFACE_DEFINED__) */
    
