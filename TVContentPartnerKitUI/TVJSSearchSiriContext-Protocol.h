//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVContentPartnerKitUI/JSExport-Protocol.h>

@class NSDictionary, NSString, TVSSContentItem;

@protocol TVJSSearchSiriContext <JSExport>
@property(readonly, copy, nonatomic) NSString *pluginMode;
- (void)sendMetricsWithCategory:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)didSelectContentItemInPartialScreenPluginMode:(TVSSContentItem *)arg1;
@end

