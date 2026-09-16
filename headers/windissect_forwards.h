#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace Microsoft { namespace WRL { class Details; } } 
namespace Windows { namespace Security { class Cryptography; } } 
namespace Windows { namespace Storage { class Streams; } } 
class BCRYPT_ALIAS_ALGORITHM_INFO; class BCRYPT_ENCRYPTION_ALGORITHM_SPECIFIC_INFO; class BCRYPT_SIGNATURE_ALGORITHM_SPECIFIC_INFO; class CNgcCheckAvailabilityOperation; class CNgcCreateUserIdKeyOperation; class CNgcCreateUserIdKeyWithCallbackOperation; class CNgcDeleteKeyOperation; class CNgcDeriveSharedSecretOperation; class CNgcGetAttestationOperation; class CNgcOpenKeyOperation; class CNgcOpenKeyWithCallbackOperation; class CNgcRenewAttestationOperation; class CNgcSignMessageOperation; class Destroy; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HSTRING__; class HWND__; class IClassFactory; class IInspectable; class IStream; class IUnknown; class IWeakReference; class NCryptFreeObject; class ReleaseSRWLockExclusive; class TLV; class TraceLoggingCorrelationVector; class _CERT_CONTEXT; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _RO_REGISTRATION_COOKIE; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class _TlgCVGetter; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByVal; class lambda_2bd760ccb5e43da7400ed52fea93f9fc; class lambda_75d9434be157892b4b1ea476a843d4a5; class lambda_8fcabb03306c9f8765c03020018d7da6; class thunk; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace Microsoft { namespace WRL { class ActivationFactory; class ComPtr; class Details; class FtmBase; class Implements; class RuntimeClassFlags; class SimpleSealedActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HString; class HStringReference; class SRWLock; } } } 
namespace Microsoft { namespace WRL { namespace Wrappers { namespace Details { class SyncLockExclusive; } } } } 
namespace Windows { } 
namespace Windows { namespace Foundation { namespace Collections { namespace Internal { class detail; } } } } 
namespace Windows { namespace Internal { class String; class StringReference; } } 
namespace Windows { namespace Internal { namespace Security { namespace Cryptography { namespace Core { class CSymmetricPopKey; class CSymmetricPopKeyStatic; } } } } } 
namespace Windows { namespace Security { class Cryptography; } } 
namespace Windows { namespace Security { namespace Credentials { class CKeyCredential; class CKeyCredentialAttestationResult; class CKeyCredentialCacheConfiguration; class CKeyCredentialCacheConfigurationFactory; class CKeyCredentialManager; class CKeyCredentialManagerStatic; class CKeyCredentialOperationResult; class CKeyCredentialRetrievalResult; class IAttestationChallengeHandler; class IKeyCredential; class IKeyCredentialAttestationResult; class IKeyCredentialCacheConfiguration; class IKeyCredentialOperationResult; class IKeyCredentialRetrievalResult; class KeyCredentialAttestationResult; class KeyCredentialOperationResult; class KeyCredentialRetrievalResult; } } } 
namespace Windows { namespace Storage { class Streams; } } 
namespace Windows { namespace UI { class WindowId; } } 
namespace std { class nothrow_t; class nullptr_t; } 
namespace wil { class FailureInfo; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_vector; } } 
namespace wistd { class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

