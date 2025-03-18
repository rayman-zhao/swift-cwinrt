// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;

#endif // ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#ifndef ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIStringable __x_ABI_CWindows_CFoundation_CIStringable;

#endif // ____x_ABI_CWindows_CFoundation_CIStringable_FWD_DEFINED__

typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat;

typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult;

typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult;

typedef enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind;

enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat
    {
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat_E164 = 0,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat_International = 1,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat_National = 2,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat_Rfc3966 = 3,
};

enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult
    {
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult_NoMatch = 0,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult_ShortNationalSignificantNumberMatch = 1,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult_NationalSignificantNumberMatch = 2,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult_ExactMatch = 3,
};

enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult
    {
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult_Valid = 0,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult_NotANumber = 1,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult_InvalidCountryCode = 2,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult_TooShort = 3,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult_TooLong = 4,
};

enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind
    {
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_FixedLine = 0,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_Mobile = 1,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_FixedLineOrMobile = 2,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_TollFree = 3,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_PremiumRate = 4,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_SharedCost = 5,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_Voip = 6,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_PersonalNumber = 7,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_Pager = 8,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_UniversalAccountNumber = 9,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_Voicemail = 10,
    __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind_Unknown = 11,
};

#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Format)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* number,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* FormatWithOutputFormat)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* number,
        enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberFormat numberFormat,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* FormatPartialString)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
        HSTRING number,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* FormatString)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
        HSTRING number,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* FormatStringWithLeftToRightMarkers)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter* This,
        HSTRING number,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl;

    interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* TryCreate)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
        HSTRING regionCode,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatter** phoneNumber);
    HRESULT (STDMETHODCALLTYPE* GetCountryCodeForRegion)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
        HSTRING regionCode,
        INT32* result);
    HRESULT (STDMETHODCALLTYPE* GetNationalDirectDialingPrefixForRegion)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
        HSTRING regionCode,
        boolean stripNonDigit,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* WrapWithLeftToRightMarkers)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics* This,
        HSTRING number,
        HSTRING* result);

        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl;

    interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberFormatterStatics_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_CountryCode)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        INT32* value);
    HRESULT (STDMETHODCALLTYPE* get_PhoneNumber)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* GetLengthOfGeographicalAreaCode)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        INT32* result);
    HRESULT (STDMETHODCALLTYPE* GetNationalSignificantNumber)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* GetLengthOfNationalDestinationCode)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        INT32* result);
    HRESULT (STDMETHODCALLTYPE* PredictNumberKind)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPredictedPhoneNumberKind* result);
    HRESULT (STDMETHODCALLTYPE* GetGeographicRegionCode)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* CheckNumberMatch)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* This,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo* otherNumber,
        enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberMatchResult* result);

        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl;

    interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* Create)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory* This,
        HSTRING number,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo** result);

        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl;

    interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactoryVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoFactory_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* TryParse)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
        HSTRING input,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo** phoneNumber,
        enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult* result);
    HRESULT (STDMETHODCALLTYPE* TryParseWithRegion)(__x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics* This,
        HSTRING input,
        HSTRING regionCode,
        __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfo** phoneNumber,
        enum __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CPhoneNumberParseResult* result);

        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl;

    interface __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStaticsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CPhoneNumberFormatting_CIPhoneNumberInfoStatics_INTERFACE_DEFINED__) */
    
