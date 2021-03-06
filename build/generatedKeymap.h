/* Copyright (C) 2014-2018 by Jacob Alexander
 *
 * This file is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file.  If not, see <http://www.gnu.org/licenses/>.
 */

// This file was generated by the kll compiler, DO NOT EDIT.
// Generation Date:    2018-03-21
// KLL Emitter:        kiibohd
// KLL Version:        BETA 0.5c.5df7359bc3daf82839b3f5c9af43000a00fc6479 - 2018-03-13 00:34:53 -0700
// KLL Git Changes:    None
// Compiler arguments:
//      /Users/jack/kiibohd-controller/kll/kll
//    --kiibohd-debug
//    --config
//      /Users/jack/kiibohd-controller/Scan/Devices/MatrixARMPeriodic/capabilities.kll
//      /Users/jack/kiibohd-controller/Macro/PartialMap/capabilities.kll
//      /Users/jack/kiibohd-controller/Output/HID-IO/capabilities.kll
//      /Users/jack/kiibohd-controller/Output/USB/capabilities.kll
//      /Users/jack/kiibohd-controller/Debug/latency/capabilities.kll
//    --base
//      /Users/jack/kiibohd-controller/Scan/Infinity_60/scancode_map.kll
//    --default
//      /Users/jack/kiibohd-controller/kll/layouts/ic60/md1Overlay.kll
//      /Users/jack/kiibohd-controller/kll/layouts/stdFuncMap.kll
//    --partial
//      /Users/jack/kiibohd-controller/kll/layouts/ic60/hhkbpro2.kll
//    --emitter
//      kiibohd
//    --def-template
//      /Users/jack/kiibohd-controller/kll/templates/kiibohdDefs.h
//    --map-template
//      /Users/jack/kiibohd-controller/kll/templates/kiibohdKeymap.h
//    --pixel-template
//      /Users/jack/kiibohd-controller/kll/templates/kiibohdPixelmap.c
//    --def-output
//      kll_defs.h
//    --map-output
//      generatedKeymap.h
//    --pixel-output
//      generatedPixelmap.c
//
// - Configuration File -
//    MatrixARMPeriodicCapabilities
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll
//    PartialMapCapabilities
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Macro_PartialMap@['capabilities']_processed.kll
//    HID-IOCapabilities
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Output_HID-IO@['capabilities']_processed.kll
//    USBCapabilities
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Output_USB@['capabilities']_processed.kll
//    latency
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Debug_latency@['capabilities']_processed.kll
// - Generic Files -
// - Base Layer -
//    Infinity 60%
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/Scan_Infinity_60@['scancode_map']_processed.kll
// - Default Layer -
//    md1Overlay
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/kll_layouts_ic60@['md1Overlay']_processed.kll
//    stdFuncMap
//      /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/kll_layouts@['stdFuncMap']_processed.kll
// - Partial Layers -
//    Layer 1
//     hhkbpro2
//       /var/folders/yt/0hmgs37n6rxb65fhnlc005f40000gn/T/kll/kll_layouts_ic60@['hhkbpro2']_processed.kll



#pragma once

// ----- Includes -----

// KLL Include
#include <kll.h>



// ----- Capabilities -----

// Capability function declarations
void Layer_layerLatch_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Layer_layerLock_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Layer_layerRotate_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Layer_layerShift_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Layer_layerState_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_testThreadSafe_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Macro_testThreadUnsafe_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_consCtrlSend_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_flashMode_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_kbdProtocolBoot_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_kbdProtocolNKRO_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_noneSend_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_sysCtrlSend_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_toggleKbdProtocol_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_usbCodeSend_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );
void Output_usbMouse_capability( TriggerMacro *trigger, uint8_t state, uint8_t stateType, uint8_t *args );



// Indexed Capabilities Table
const Capability CapabilitiesList[] = {
	/* 0 layerLatch */
	{ Layer_layerLatch_capability, 2, CapabilityFeature_Safe },
	/* 1 layerLock */
	{ Layer_layerLock_capability, 2, CapabilityFeature_Safe },
	/* 2 layerRotate */
	{ Layer_layerRotate_capability, 1, CapabilityFeature_Safe },
	/* 3 layerShift */
	{ Layer_layerShift_capability, 2, CapabilityFeature_Safe },
	/* 4 layerState */
	{ Layer_layerState_capability, 3, CapabilityFeature_Safe },
	/* 5 testThreadSafe */
	{ Macro_testThreadSafe_capability, 0, CapabilityFeature_Safe },
	/* 6 testThreadUnsafe */
	{ Macro_testThreadUnsafe_capability, 0, CapabilityFeature_None },
	/* 7 consCtrlOut */
	{ Output_consCtrlSend_capability, 2, CapabilityFeature_Safe },
	/* 8 flashMode */
	{ Output_flashMode_capability, 0, CapabilityFeature_Safe },
	/* 9 kbdProtocolBoot */
	{ Output_kbdProtocolBoot_capability, 0, CapabilityFeature_None },
	/* 10 kbdProtocolNKRO */
	{ Output_kbdProtocolNKRO_capability, 0, CapabilityFeature_None },
	/* 11 noneOut */
	{ Output_noneSend_capability, 0, CapabilityFeature_Safe },
	/* 12 sysCtrlOut */
	{ Output_sysCtrlSend_capability, 1, CapabilityFeature_Safe },
	/* 13 toggleKbdProtocol */
	{ Output_toggleKbdProtocol_capability, 0, CapabilityFeature_None },
	/* 14 usbKeyOut */
	{ Output_usbCodeSend_capability, 1, CapabilityFeature_Safe },
	/* 15 mouseOut */
	{ Output_usbMouse_capability, 6, CapabilityFeature_Safe },
};


// -- Result Macros

// Result Macro Guides



// -- Result Macro List

// Indexed Table of Result Macros
const ResultMacro ResultMacroList[] = {
};


// -- Trigger Macros

// Trigger Macro Guides



// -- Trigger Macro List

// Indexed Table of Trigger Macros
const TriggerMacro TriggerMacroList[] = {
};


// -- Trigger Macro Record List

// Keeps a record/state of each trigger macro
TriggerMacroRecord TriggerMacroRecordList[ TriggerMacroNum ];



// ----- Trigger Maps -----

// MaxScanCode
// - This is retrieved from the KLL configuration
// - Should be corollated with the max scan code in the scan module
// - Maximum value is 0x100 (0x0 to 0xFF)
// - Increasing it beyond the keyboard's capabilities is just a waste of ram...
#define MaxScanCode 0x0

// -- Trigger Lists
//
// Index 0: # of triggers in list
// Index n: pointer to trigger macro - use tm() macro

// - Default Layer -
Define_TL( default, 0x00 ) = { 0 };


// - Partial Layers -
// Partial Layer 1
Define_TL( layer1, 0x00 ) = { 0 };


// -- ScanCode Offset Map
// Maps interconnect ids to scancode offsets
//
// Only used for keyboards with an interconnect
const uint8_t InterconnectOffsetList[] = {
	0x00,
	0x00,
};


// -- ScanCode Indexed Maps
// Maps to a trigger list of macro pointers
//                 _
// <scan code> -> |T|
//                |r| -> <trigger macro pointer 1>
//                |i|
//                |g| -> <trigger macro pointer 2>
//                |g|
//                |e| -> <trigger macro pointer 3>
//                |r|
//                |s| -> <trigger macro pointer n>
//                 -

// - Default Map for ScanCode Lookup -
const nat_ptr_t *default_scanMap[] = { 
default_tl_0x00
};


// - Partial Layer ScanCode Lookup Maps -
// Partial Layer 1
const nat_ptr_t *layer1_scanMap[] = { 
layer1_tl_0x00
};



// ----- Layer Index -----

// -- Layer Index List
//
// Index 0: Default map
// Index n: Additional layers
const Layer LayerIndex[] = {
	Layer_IN( default_scanMap, "D: Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll + Macro_PartialMap@['capabilities']_processed.kll + Output_HID-IO@['capabilities']_processed.kll + Output_USB@['capabilities']_processed.kll + Debug_latency@['capabilities']_processed.kll + Scan_Infinity_60@['scancode_map']_processed.kll + kll_layouts_ic60@['md1Overlay']_processed.kll + kll_layouts@['stdFuncMap']_processed.kll", 0x00 ),
	Layer_IN( layer1_scanMap, "1: Scan_Devices_MatrixARMPeriodic@['capabilities']_processed.kll + Macro_PartialMap@['capabilities']_processed.kll + Output_HID-IO@['capabilities']_processed.kll + Output_USB@['capabilities']_processed.kll + Debug_latency@['capabilities']_processed.kll + Scan_Infinity_60@['scancode_map']_processed.kll + kll_layouts_ic60@['hhkbpro2']_processed.kll", 0x00 ),
};


// - Layer State
LayerStateType LayerState[ LayerNum ];



// ----- Key Positions -----

// -- Physical Key Positions
//
// Index 0: Key 1
// Each key has 6 dimensions
// x,y,z and rx,ry,rz (rotation)
// Units are in mm
const Position Key_Positions[] = {
};

