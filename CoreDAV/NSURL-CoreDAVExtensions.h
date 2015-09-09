//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (CoreDAVExtensions)
+ (id)CDVDefaultPortForScheme:(id)arg1;
+ (id)CDVURLWithScheme:(id)arg1 host:(id)arg2 port:(id)arg3 path:(id)arg4;
+ (id)CDVURLWithScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6;
- (_Bool)CDVIsSafeRedirectForRequestURL:(id)arg1;
- (id)CDVfixedURLByAppendingPathComponent:(id)arg1;
- (id)CDVFileSystemSafePath;
- (_Bool)CDVIsEqualToURL:(id)arg1;
- (id)CDVServerURLWithPath:(_Bool)arg1;
- (id)CDVServerURL;
- (id)CDVURLByDeletingLastPathComponent;
- (id)CDVRawLastPathComponentPreservingEscapes;
- (id)CDVRawLastPathComponent;
- (id)CDVRawPath;
- (id)CDVPassword;
- (id)CDVURLWithPath:(id)arg1;
- (id)CDVURLWithPassword:(id)arg1;
- (id)CDVURLWithUser:(id)arg1;
- (id)initWithCDVScheme:(id)arg1 user:(id)arg2 password:(id)arg3 host:(id)arg4 port:(id)arg5 path:(id)arg6 parameterString:(id)arg7 query:(id)arg8 fragment:(id)arg9;
- (id)CDVURLWithScheme:(id)arg1 userandpass:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 parameters:(id)arg6 encodePercents:(_Bool)arg7;
@end

