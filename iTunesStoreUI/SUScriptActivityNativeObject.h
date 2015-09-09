//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import <iTunesStoreUI/SUActivityDelegate-Protocol.h>

@class NSString;

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>
{
}

- (void)performActionForActivity:(id)arg1;
- (void)activity:(id)arg1 prepareWithActivityItems:(id)arg2;
- (_Bool)activity:(id)arg1 canPerformWithActivityItems:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

