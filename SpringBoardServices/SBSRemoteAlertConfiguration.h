//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/BSXPCCoding-Protocol.h>

@class NSDictionary, NSString;

@interface SBSRemoteAlertConfiguration : NSObject <BSXPCCoding, BSDescriptionProviding>
{
    NSString *_serviceName;
    NSString *_vcClassName;
    NSDictionary *_userInfo;
    NSString *_impersonatedCarPlayAppIdentifier;
    _Bool _forCarPlay;
}

@property(nonatomic, getter=isForCarPlay) _Bool forCarPlay; // @synthesize forCarPlay=_forCarPlay;
@property(retain, nonatomic) NSString *impersonatedCarPlayAppIdentifier; // @synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_vcClassName;
@property(readonly, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
