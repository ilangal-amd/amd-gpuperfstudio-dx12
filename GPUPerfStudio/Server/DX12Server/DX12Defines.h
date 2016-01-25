//==============================================================================
// Copyright (c) 2014-2015 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  A global include file for the DX12 server.
//==============================================================================
#ifndef DX12DEFINES_H
#define DX12DEFINES_H

// For platform-independent Dll operations and gtASCIIString.
#include <AMDTBaseTools/Include/gtASCIIString.h>
#include "../Common/misc.h"

#define DX12_DLL "d3d12.dll"

// Include all D3D headers
#include <d3d12.h>

// Include all generated serializer classes.
#include "SymbolSerializers/Autogenerated/DX12CoreSymbolSerializers.h"

// Include all enumeration declarations.
#include "D3D12Enumerations.h"

#define USE_GPA_PROFILING 1

#endif // DX12DEFINES_H