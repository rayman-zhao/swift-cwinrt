// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

#if !defined(____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

    typedef struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* put_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* handler);
    HRESULT (STDMETHODCALLTYPE* get_Completed)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
        __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults** result);
    HRESULT (STDMETHODCALLTYPE* GetResults)(__x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults** result);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;

    interface __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

    typedef struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This);
        HRESULT (STDMETHODCALLTYPE* Invoke)(__x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults* asyncInfo,
        enum __x_ABI_CWindows_CFoundation_CAsyncStatus asyncStatus);

        END_INTERFACE
    } __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;

    interface __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
    {
        CONST_VTBL struct __x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIAsyncOperationCompletedHandler_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__
    
typedef enum __x_ABI_CWindows_CFoundation_CAsyncStatus __x_ABI_CWindows_CFoundation_CAsyncStatus;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CFoundation_CIAsyncInfo __x_ABI_CWindows_CFoundation_CIAsyncInfo;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncInfo_FWD_DEFINED__

typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult;

typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult;

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult_RequestedPolicyIsStricter = 3,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType_WindowsEncryption = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType_OtherEncryption = 2,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult_InvalidParameter = 4,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult_InvalidParameter = 4,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_RequestedPolicyNotEnforceable = 4,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_InvalidParameter = 5,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_CurrentUserHasBlankPassword = 6,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_AdminsHaveBlankPassword = 7,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_UserCannotChangePassword = 8,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_AdminsCannotChangePassword = 9,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_LocalControlledUsersCannotChangePassword = 10,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_ConnectedUserProviderPolicyIsWeak = 12,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_ChangeConnectedAdminsPassword = 13,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult_ChangeConnectedUserPassword = 14,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_RequestedPolicyNotEnforceable = 4,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_InvalidParameter = 5,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_CurrentUserHasBlankPassword = 6,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_AdminsHaveBlankPassword = 7,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_UserCannotChangePassword = 8,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_AdminsCannotChangePassword = 9,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_LocalControlledUsersCannotChangePassword = 10,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_ConnectedUserProviderPolicyIsWeak = 12,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_ChangeConnectedAdminsPassword = 13,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult_ChangeConnectedUserPassword = 14,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_RequestedExpirationIncompatible = 4,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_InvalidParameter = 5,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_UserCannotChangePassword = 6,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_AdminsCannotChangePassword = 7,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult_LocalControlledUsersCannotChangePassword = 8,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult_RequestedPolicyIsStricter = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult_InvalidParameter = 4,
};

enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult
    {
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_NotEvaluated = 0,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_Compliant = 1,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_CanBeCompliant = 2,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_NotProvisionedOnAllVolumes = 3,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeFixedDataNotSupported = 4,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_FixedDataNotSupported = 4,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeHardwareNotCompliant = 5,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_HardwareNotCompliant = 5,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeWinReNotConfigured = 6,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_LockNotConfigured = 6,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeProtectionSuspended = 7,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_ProtectionSuspended = 7,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeOsVolumeNotProtected = 8,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_OsVolumeNotProtected = 8,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_DeProtectionNotYetEnabled = 9,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_ProtectionNotYetEnabled = 9,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_NoFeatureLicense = 10,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_OsNotProtected = 11,
    __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult_UnexpectedFailure = 12,
};

#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        GUID* value);
    HRESULT (STDMETHODCALLTYPE* get_OperatingSystem)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_FriendlyName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_SystemManufacturer)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_SystemProductName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_SystemSku)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl;

    interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_SystemHardwareVersion)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* get_SystemFirmwareVersion)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2* This,
        HSTRING* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl;

    interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_RequireEncryption)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_RequireEncryption)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_MinPasswordLength)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE* value);
    HRESULT (STDMETHODCALLTYPE* put_MinPasswordLength)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE value);
    HRESULT (STDMETHODCALLTYPE* get_DisallowConvenienceLogon)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* put_DisallowConvenienceLogon)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        boolean value);
    HRESULT (STDMETHODCALLTYPE* get_MinPasswordComplexCharacters)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE* value);
    HRESULT (STDMETHODCALLTYPE* put_MinPasswordComplexCharacters)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE value);
    HRESULT (STDMETHODCALLTYPE* get_PasswordExpiration)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* put_PasswordExpiration)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan value);
    HRESULT (STDMETHODCALLTYPE* get_PasswordHistory)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        UINT32* value);
    HRESULT (STDMETHODCALLTYPE* put_PasswordHistory)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        UINT32 value);
    HRESULT (STDMETHODCALLTYPE* get_MaxPasswordFailedAttempts)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE* value);
    HRESULT (STDMETHODCALLTYPE* put_MaxPasswordFailedAttempts)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        BYTE value);
    HRESULT (STDMETHODCALLTYPE* get_MaxInactivityTimeLock)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan* value);
    HRESULT (STDMETHODCALLTYPE* put_MaxInactivityTimeLock)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        struct __x_ABI_CWindows_CFoundation_CTimeSpan value);
    HRESULT (STDMETHODCALLTYPE* CheckCompliance)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults** result);
    HRESULT (STDMETHODCALLTYPE* ApplyAsync)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy* This,
        __x_ABI_C__FIAsyncOperation_1___x_ABI_CWindows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults** operation);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl;

    interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Compliant)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        boolean* value);
    HRESULT (STDMETHODCALLTYPE* get_RequireEncryptionResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult* value);
    HRESULT (STDMETHODCALLTYPE* get_MinPasswordLengthResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult* value);
    HRESULT (STDMETHODCALLTYPE* get_DisallowConvenienceLogonResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult* value);
    HRESULT (STDMETHODCALLTYPE* get_MinPasswordComplexCharactersResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult* value);
    HRESULT (STDMETHODCALLTYPE* get_PasswordExpirationResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult* value);
    HRESULT (STDMETHODCALLTYPE* get_PasswordHistoryResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult* value);
    HRESULT (STDMETHODCALLTYPE* get_MaxPasswordFailedAttemptsResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult* value);
    HRESULT (STDMETHODCALLTYPE* get_MaxInactivityTimeLockResult)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl;

    interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_EncryptionProviderType)(__x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2* This,
        enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType* value);

        END_INTERFACE
    } __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl;

    interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2
    {
        CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__) */
    
