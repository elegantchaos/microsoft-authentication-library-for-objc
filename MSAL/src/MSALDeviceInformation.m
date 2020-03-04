//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.
// All rights reserved.
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//------------------------------------------------------------------------------

#import "MSALDeviceInformation.h"
#import "MSALDeviceInformation+Internal.h"
#import "MSIDDeviceInfo.h"

@implementation MSALDeviceInformation

- (instancetype)initWithMSIDDeviceInfo:(MSIDDeviceInfo *)deviceInfo
{
    self = [super init];
    
    if (self)
    {
        _deviceMode = [self msalDeviceModeFromMSIDMode:deviceInfo.deviceMode];
        _ssoExtensionMode = [self msalSSOExtensionModeFromMSIDMode:deviceInfo.ssoExtensionMode];
    }
    
    return self;
}

- (MSALDeviceMode)msalDeviceModeFromMSIDMode:(MSIDDeviceMode)msidDeviceMode
{
    switch (msidDeviceMode) {
        case MSIDDeviceModeShared:
            return MSALDeviceModeShared;
            
        default:
            return MSALDeviceModeDefault;
    }
}

- (NSString *)msalDeviceModeString
{
    switch (self.deviceMode) {
        case MSALDeviceModeShared:
            return @"shared";
            
        default:
            return @"default";
    }
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"Device mode %@", self.msalDeviceModeString];
}

@end
