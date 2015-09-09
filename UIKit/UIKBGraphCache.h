//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIScreenBasedObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, UIScreen;

__attribute__((visibility("hidden")))
@interface UIKBGraphCache : NSObject <_UIScreenBasedObject>
{
    UIScreen *_screen;
    NSMutableDictionary *_graphCache;
}

+ (id)graphCacheForScreen:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *graphCache; // @synthesize graphCache=_graphCache;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;
@property(readonly) UIScreen *_intendedScreen;
- (void)dealloc;
- (id)_initWithScreen:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

