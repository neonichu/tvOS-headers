//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPhotoSources/NSXPCListenerDelegate-Protocol.h>

@class NSDictionary, NSString, NSXPCListener;
@protocol TVPhotoServiceInterface;

@interface TVScreenSaverProvider : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    id <TVPhotoServiceInterface> _serviceProvider;
}

+ (id)_bundleForTVPhotoSources;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setScreenSaverWithName:(id)arg1 extraInfo:(id)arg2;
- (id)_collectionIdentifier;
@property(readonly, nonatomic) NSDictionary *currentScreenSaverInfo;
@property(readonly, nonatomic) NSString *currentScreenSaverName;
@property(readonly, nonatomic) _Bool isCurrentScreenSaver;
- (void)setDefaultScreenSaver;
- (void)setScreenSaverWithName:(id)arg1 extraInfo:(id)arg2 showConfirmation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerAppWithProviderObject:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

