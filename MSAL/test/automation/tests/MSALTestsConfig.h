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
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.  
<<<<<<< HEAD
=======
<<<<<<< HEAD:MSAL/test/automation/tests/MSALTestsConfig.m


#import "MSALTestsConfig.h"

@implementation MSALTestsConfig

+ (BOOL)supportsScopes
{
    return YES;
}

+ (BOOL)supportsRTInHeders
{
    return NO;
}

+ (BOOL)supportsSystemBrowser
{
    return YES;
}

+ (BOOL)supportsTenantSpecificResultAuthority
{
    return YES;
}

+ (BOOL)supportsSelectAccountPrompt
{
    return YES;
}

+ (BOOL)supportsConsentPrompt
{
    return YES;
}

#pragma mark - Error codes

+ (NSInteger)userCanceledErrorCode
{
    return -50005; //MSALErrorUserCanceled
}

+ (NSInteger)applicationCanceledErrorCode
{
    return -50005; //MSALErrorUserCanceled
}
=======
>>>>>>> origin/master


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MSALTestsConfig : NSObject

@property (class, readonly) BOOL supportsScopes;
@property (class, readonly) BOOL supportsRTInHeders;
@property (class, readonly) BOOL supportsSystemBrowser;
@property (class, readonly) BOOL supportsTenantSpecificResultAuthority;
@property (class, readonly) BOOL supportsSelectAccountPrompt;
@property (class, readonly) BOOL supportsConsentPrompt;
@property (class, readonly) NSInteger userCanceledErrorCode;
@property (class, readonly) NSInteger applicationCanceledErrorCode;
<<<<<<< HEAD
=======
>>>>>>> origin/master:MSAL/test/automation/tests/MSALTestsConfig.h
>>>>>>> origin/master

@end

NS_ASSUME_NONNULL_END
