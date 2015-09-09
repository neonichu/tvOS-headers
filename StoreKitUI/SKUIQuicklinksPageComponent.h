//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIPageComponent.h>

#import <StoreKitUI/SSMetricsEventFieldProvider-Protocol.h>

@class NSArray, NSString;

@interface SKUIQuicklinksPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider>
{
    NSArray *_links;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
- (void).cxx_destruct;
- (void)_setLinksWithLinksArray:(id)arg1 context:(id)arg2;
- (id)valueForMetricsField:(id)arg1;
- (id)metricsElementName;
- (long long)componentType;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithCustomPageContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

