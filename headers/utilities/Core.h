#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 13 member(s).
namespace Windows::Security::Cryptography {
class Core {
public:
    class CAsymmetricAlgorithmNames;
    class CAsymmetricAlgorithmNamesFactory;
    class CAsymmetricKey;
    class CAsymmetricKeyAlgorithmProvider;
    class CAsymmetricKeyAlgorithmProviderFactory;
    class CAsymmetricPersistedKey;
    class CAsyncOperationProtect;
    class CAsyncOperationUnprotect;
    class CBCryptDecryptOperation;
    class CBCryptSignOperation;
    class CCryptoOperations;
    class CCryptoOperationsStatics;
    class CDataProtection;
    class CDataProtectionStatics;
    class CDataProtectionStreamAction;
    class CDecryptOperation;
    class CEccCurveNames;
    class CEccCurveNamesFactory;
    class CEncryptedAndAuthenticatedData;
    class CHashAlgorithmNames;
    class CHashAlgorithmNamesFactory;
    class CHashAlgorithmProvider;
    class CHashAlgorithmProviderFactory;
    class CHashComputation;
    class CKeyDerivationAlgorithmNames;
    class CKeyDerivationAlgorithmNamesFactory;
    class CKeyDerivationAlgorithmProvider;
    class CKeyDerivationAlgorithmProviderFactory;
    class CKeyDerivationKey;
    class CKeyDerivationParameters;
    class CKeyDerivationParametersFactory;
    class CMacAlgorithmNames;
    class CMacAlgorithmNamesFactory;
    class CMacAlgorithmProvider;
    class CMacAlgorithmProviderFactory;
    class CMacKey;
    class COpenKeyPairFromCertificateOperation;
    class CPersistedKeyProvider;
    class CPersistedKeyProviderFactory;
    class CSignOperation;
    class CSymmetricAlgorithmNames;
    class CSymmetricAlgorithmNamesFactory;
    class CSymmetricKey;
    class CSymmetricKeyAlgorithmProvider;
    class CSymmetricKeyAlgorithmProviderFactory;
    class ICryptoInternalDataProtection;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CCryptographicKeyImpl_CreateSymmetricKey@Core@Cryptography@Security@Windows@@YAJPEAUIBuffer@Streams@Storage@4@PEAXPEAPEAXPEAI@Z
    long CCryptographicKeyImpl_CreateSymmetricKey(WindissectOpaque *, void *, void * *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CCryptographicKeyImpl_ExportPrivateKey@Core@Cryptography@Security@Windows@@YAJPEAXW4CryptographicPrivateKeyBlobType@1234@W4CryptographicKeyCapabilities@234@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z
    long CCryptographicKeyImpl_ExportPrivateKey(void *, int, int, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CCryptographicKeyImpl_ExportPublicKey@Core@Cryptography@Security@Windows@@YAJPEAXW4CryptographicPublicKeyBlobType@1234@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z
    long CCryptographicKeyImpl_ExportPublicKey(void *, int, unsigned short const *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CDataProtection_Unprotect@Core@Cryptography@Security@Windows@@YAJPEAUIBuffer@Streams@Storage@4@PEAUHWND__@@PEAPEAU5674@@Z
    long CDataProtection_Unprotect(WindissectOpaque *, HWND__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBCryptPublicKeyHandleFromNCryptKeyHandle@Core@Cryptography@Security@Windows@@YAJ_KPEAXPEBGPEAPEAX@Z
    long CreateBCryptPublicKeyHandleFromNCryptKeyHandle(uint64_t, void *, unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportBCryptPublicKey@Core@Cryptography@Security@Windows@@YAJ_KPEBGPEAPEAEPEAK@Z
    long ExportBCryptPublicKey(uint64_t, unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportKeyBlobFromBcrypt@Core@Cryptography@Security@Windows@@YAJPEAXPEBGPEAPEAEPEAK@Z
    long ExportKeyBlobFromBcrypt(void *, unsigned short const *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPkcs8PrivateKey@Core@Cryptography@Security@Windows@@YAJPEAXW4CryptographicKeyCapabilities@234@PEAPEAEPEAK@Z
    long ExportPkcs8PrivateKey(void *, int, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportPublicKeyFromPersistedKey@Core@Cryptography@Security@Windows@@YAJ_KW4CryptographicPublicKeyBlobType@1234@PEAPEAUIBuffer@Streams@Storage@4@@Z
    long ExportPublicKeyFromPersistedKey(uint64_t, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportRsaPkcs1PrivateKey@Core@Cryptography@Security@Windows@@YAJPEAXPEAPEAEPEAK@Z
    long ExportRsaPkcs1PrivateKey(void *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportRsaPkcs1PublicKey@Core@Cryptography@Security@Windows@@YAJPEAXPEAPEAEPEAK@Z
    long ExportRsaPkcs1PublicKey(void *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExportX509PublicKeyInfo@Core@Cryptography@Security@Windows@@YAJPEAXPEAPEAEPEAK@Z
    long ExportX509PublicKeyInfo(void *, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlgorithmInformationFromKeyHandle@Core@Cryptography@Security@Windows@@YAJ_KPEAPEAG@Z
    long GetAlgorithmInformationFromKeyHandle(uint64_t, unsigned short * *);
};
} // namespace Windows::Security::Cryptography
