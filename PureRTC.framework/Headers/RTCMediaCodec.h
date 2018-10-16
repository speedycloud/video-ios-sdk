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

#ifndef PURERTC_BASE_OBJC_RTCMEDIACODEC_H_
#define PURERTC_BASE_OBJC_RTCMEDIACODEC_H_

#import <Foundation/Foundation.h>
#import <PureRTC/RTCMacros.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, VideoCodec) {
  VideoCodecVP8 = 1,
  VideoCodecH264 = 2,
};

typedef NS_ENUM(NSInteger, AudioCodec) {
  AudioCodecOpus = 1,
  AudioCodecIsac = 2,
  AudioCodecG722 = 3,
  AudioCodecPcmu = 4,
  AudioCodecPcma = 5,
};

/*
  @brief An instance of this class indicates preference for codecs.
  @detail It is not guaranteed to use preferred codec, if remote side doesn't
  support preferred codec, it will use other codec.
*/
@interface RTCMediaCodec : NSObject

/// Preference for audio codec. Default is Opus.
@property(nonatomic, readwrite) NSInteger audioCodec;
/// Preference for video codec. Default is H.264.
@property(nonatomic, readwrite) NSInteger videoCodec;

@end

NS_ASSUME_NONNULL_END

#endif  // PURERTC_BASE_OBJC_RTCMEDIACODEC_H_

