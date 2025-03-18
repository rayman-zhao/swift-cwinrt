// WARNING: Please don't edit this file. It was generated by Swift/WinRT v0.0.1

#pragma once
// Header files for imported files
#include <inspectable.h>
#include <EventToken.h>
#include <windowscontracts.h>
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Contacts.h"
#include "Windows.ApplicationModel.DataTransfer.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include "Windows.Foundation.Collections.h"

/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3 __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if !defined(____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1_HSTRING __x_ABI_C__FIIterator_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1_HSTRING;

    typedef struct __x_ABI_C__FIIterator_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1_HSTRING* This,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1_HSTRING* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1_HSTRING* This,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterator_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1_HSTRING __x_ABI_C__FIIterable_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1_HSTRING;

    typedef struct __x_ABI_C__FIIterable_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1_HSTRING* This,
        __x_ABI_C__FIIterator_1_HSTRING** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1_HSTRINGVtbl;

    interface __x_ABI_C__FIIterable_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1_HSTRING_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CContacts_CIContact __x_ABI_CWindows_CApplicationModel_CContacts_CIContact;

#endif // ____x_ABI_CWindows_CApplicationModel_CContacts_CIContact_FWD_DEFINED__

#if !defined(____x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    typedef struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Current)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact** result);
    HRESULT (STDMETHODCALLTYPE* get_HasCurrent)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* MoveNext)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        UINT32 itemsLength,
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl;

    interface __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact
    {
        CONST_VTBL struct __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    typedef struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* First)(__x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        __x_ABI_C__FIIterator_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact** result);

        END_INTERFACE
    } __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl;

    interface __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact
    {
        CONST_VTBL struct __x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIIterable_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVectorView_1_HSTRING __x_ABI_C__FIVectorView_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVectorView_1_HSTRING;

    typedef struct __x_ABI_C__FIVectorView_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVectorView_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVectorView_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVectorView_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32 index,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        HSTRING value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVectorView_1_HSTRING* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIVectorView_1_HSTRINGVtbl;

    interface __x_ABI_C__FIVectorView_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIVectorView_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVectorView_1_HSTRING_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact;

    typedef struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        UINT32 index,
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact** result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact* value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        __x_ABI_CWindows_CApplicationModel_CContacts_CIContact** items,
        UINT32* result);

        END_INTERFACE
    } __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl;

    interface __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact
    {
        CONST_VTBL struct __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContactVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact_INTERFACE_DEFINED__
    
#if !defined(____x_ABI_C__FIVector_1_HSTRING_INTERFACE_DEFINED__)
    #define ____x_ABI_C__FIVector_1_HSTRING_INTERFACE_DEFINED__

    typedef interface __x_ABI_C__FIVector_1_HSTRING __x_ABI_C__FIVector_1_HSTRING;

    //  Declare the parameterized interface IID.
    EXTERN_C const IID IID___x_ABI_C__FIVector_1_HSTRING;

    typedef struct __x_ABI_C__FIVector_1_HSTRINGVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_C__FIVector_1_HSTRING* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_C__FIVector_1_HSTRING* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_C__FIVector_1_HSTRING* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_C__FIVector_1_HSTRING* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_C__FIVector_1_HSTRING* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_C__FIVector_1_HSTRING* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* GetAt)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 index,
        HSTRING* result);
    HRESULT (STDMETHODCALLTYPE* get_Size)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* GetView)(__x_ABI_C__FIVector_1_HSTRING* This,
        __x_ABI_C__FIVectorView_1_HSTRING** result);
    HRESULT (STDMETHODCALLTYPE* IndexOf)(__x_ABI_C__FIVector_1_HSTRING* This,
        HSTRING value,
        UINT32* index,
        boolean* result);
    HRESULT (STDMETHODCALLTYPE* SetAt)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 index,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* InsertAt)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 index,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* RemoveAt)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 index);
    HRESULT (STDMETHODCALLTYPE* Append)(__x_ABI_C__FIVector_1_HSTRING* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* RemoveAtEnd)(__x_ABI_C__FIVector_1_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* Clear)(__x_ABI_C__FIVector_1_HSTRING* This);
    HRESULT (STDMETHODCALLTYPE* GetMany)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 startIndex,
        UINT32 itemsLength,
        HSTRING* items,
        UINT32* result);
    HRESULT (STDMETHODCALLTYPE* ReplaceAll)(__x_ABI_C__FIVector_1_HSTRING* This,
        UINT32 itemsLength,
        HSTRING* items);

        END_INTERFACE
    } __x_ABI_C__FIVector_1_HSTRINGVtbl;

    interface __x_ABI_C__FIVector_1_HSTRING
    {
        CONST_VTBL struct __x_ABI_C__FIVector_1_HSTRINGVtbl* lpVtbl;
    };

    
    #endif // ____x_ABI_C__FIVector_1_HSTRING_INTERFACE_DEFINED__
    
#ifndef ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView;

#endif // ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
    typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__

#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Title)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Title)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_Thumbnail)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference** value);
    HRESULT (STDMETHODCALLTYPE* put_Thumbnail)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference* value);
    HRESULT (STDMETHODCALLTYPE* get_Id)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* put_Id)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        HSTRING value);
    HRESULT (STDMETHODCALLTYPE* get_SupportedDataFormats)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        __x_ABI_C__FIVector_1_HSTRING** value);
    HRESULT (STDMETHODCALLTYPE* get_SupportedFileTypes)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* This,
        __x_ABI_C__FIVector_1_HSTRING** value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLinkVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Data)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CIDataPackageView** value);
    HRESULT (STDMETHODCALLTYPE* get_QuickLinkId)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
        HSTRING* value);
    HRESULT (STDMETHODCALLTYPE* RemoveThisQuickLink)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportStarted)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportDataRetrieved)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportSubmittedBackgroundTask)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportCompletedWithQuickLink)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
        __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIQuickLink* quicklink);
    HRESULT (STDMETHODCALLTYPE* ReportCompleted)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This);
    HRESULT (STDMETHODCALLTYPE* ReportError)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation* This,
        HSTRING value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperationVtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* DismissUI)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2* This);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation2_INTERFACE_DEFINED__) */
    
#if !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_INTERFACE_DEFINED__)
    #define ____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_INTERFACE_DEFINED__
    typedef struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3Vtbl
    {
        BEGIN_INTERFACE

        HRESULT (STDMETHODCALLTYPE* QueryInterface)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This,
            REFIID riid,
            void** ppvObject);
        ULONG (STDMETHODCALLTYPE* AddRef)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This);
        ULONG (STDMETHODCALLTYPE* Release)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This);
        HRESULT (STDMETHODCALLTYPE* GetIids)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This,
            ULONG* iidCount,
            IID** iids);
        HRESULT (STDMETHODCALLTYPE* GetRuntimeClassName)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This,
            HSTRING* className);
        HRESULT (STDMETHODCALLTYPE* GetTrustLevel)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This,
            TrustLevel* trustLevel);
        HRESULT (STDMETHODCALLTYPE* get_Contacts)(__x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3* This,
        __x_ABI_C__FIVectorView_1___x_ABI_CWindows__CApplicationModel__CContacts__CContact** value);

        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3Vtbl* lpVtbl;
    };

    
    EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CDataTransfer_CShareTarget_CIShareOperation3_INTERFACE_DEFINED__) */
    
