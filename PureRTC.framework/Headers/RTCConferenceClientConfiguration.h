/*
 * Copyright © 2016 Intel Corporation. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef PURERTC_CONFERENCE_OBJC_RTCCONFERENCECLIENTCONFIGURATION_H_
#define PURERTC_CONFERENCE_OBJC_RTCCONFERENCECLIENTCONFIGURATION_H_

#import <Foundation/Foundation.h>
#import <PureRTC/RTCConfiguration.h>
#import "PureRTC/RTCMediaCodec.h"

/// Configuration for creating a RTCConferenceClient
/**
  This configuration is used while creating RTCConferenceClient. Changing this
  configuration does NOT impact RTCConferenceClient already created.
*/
RTC_EXPORT
@interface RTCConferenceClientConfiguration : NSObject

@property(nonatomic, strong, readwrite) NSArray* ICEServers;
/// Media codec preference
@property(nonatomic, strong, readwrite) RTCMediaCodec* mediaCodec;
/**
 @brief Max outgoing audio bandwidth, unit: kbps.
 @detail Please be noticed different codecs may support different bitrate
 ranges. If you set a bandwidth limitation which is not supported by selected
 codec, connection will fail.
 */
@property(nonatomic, readwrite) NSInteger maxAudioBandwidth;
/**
 @brief Max outgoing video bandwidth, unit: kbps.
 @detail Please be noticed different codecs may support different bitrate
 ranges. If you set a bandwidth limitation which is not supported by selected
 codec, connection will fail.
 */
@property(nonatomic, readwrite) NSInteger maxVideoBandwidth;

/**
 @brief Candidate collection policy.
 @detail If you do not want cellular network when WiFi is available, please use
 RTCCandidateNetworkPolicyLowCost. Using low cost policy may not have good
 network experience. Default policy is collecting all candidates.
 */
@property(nonatomic, assign, readwrite)
    RTCCandidateNetworkPolicy candidateNetworkPolicy;

/**
 @brief ICE Transport policy.
 @detail If you allow all ICE candidate types, please use IceTransportPolicy::kAll.
 Default policy is allow all ICE candidate types.
 */
@property(nonatomic, assign, readwrite)
    RTCIceTransportPolicy iceTransportPolicy;
@end

#endif  // PURERTC_CONFERENCE_OBJC_RTCCONFERENCECLIENTCONFIGURATION_H_

