//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _WBUDynamicMeCard : NSObject
{
    void *_me;
    NSMutableArray *_blocksPendingMeCard;
}

+ (int)_ABPropertyIDForString:(id)arg1;
+ (_Bool)isProxyProperty:(id)arg1;
- (void).cxx_destruct;
- (void)performWhenReady:(CDUnknownBlockType)arg1;
- (id)valueForProxyProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 isMultiValue:(_Bool *)arg2;
- (void)_addressBookChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

