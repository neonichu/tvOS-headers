//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIDOMFeature-Protocol.h>
#import <StoreKitUI/SKUIJSDOMFeatureCollectionAppBridge-Protocol.h>

@class IKAppContext, NSString;
@protocol SKUICollectionDOMFeatureTargetting;

@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature>
{
    IKAppContext *_appContext;
    NSString *_featureName;
    id <SKUICollectionDOMFeatureTargetting> _collectionTarget;
}

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;
@property(nonatomic) __weak id <SKUICollectionDOMFeatureTargetting> collectionTarget; // @synthesize collectionTarget=_collectionTarget;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(readonly, nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 options:(id)arg2;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

