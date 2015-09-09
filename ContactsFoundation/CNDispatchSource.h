//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>

@class NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CNDispatchSource : NSObject <CNCancelable>
{
    NSObject<OS_dispatch_source> *_source;
}

- (void)cancel;
- (id)source;
- (void)finalize;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

