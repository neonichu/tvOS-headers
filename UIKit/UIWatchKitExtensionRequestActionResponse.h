//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSActionResponse.h>

@class NSDictionary;

@interface UIWatchKitExtensionRequestActionResponse : BSActionResponse
{
}

+ (id)responseWithWatchKitExtensionResult:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) NSDictionary *result;
- (id)initWithWatchKitExtensionResult:(id)arg1;

@end

