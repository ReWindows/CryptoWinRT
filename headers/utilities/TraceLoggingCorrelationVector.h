#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CryptoWinRT.dll by Windissect. 3 member(s).
class TraceLoggingCorrelationVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@TraceLoggingCorrelationVector@@QEAA_NPEAD@Z
    bool Increment(char *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementImpl@TraceLoggingCorrelationVector@@AEAA_KXZ
    uint64_t IncrementImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z
    bool ToStringImpl(uint64_t, char *);
};
