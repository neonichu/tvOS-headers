//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriTaskDelivering-Protocol.h>

@class NSString;

@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>
{
    NSString *_machServiceName;
}

+ (id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)deliverSiriTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

