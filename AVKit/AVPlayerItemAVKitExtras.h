//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/NSCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerItemAVKitExtras : NSObject <NSCopying>
{
    NSArray *_navigationMarkerGroups;
    NSArray *_externalMetadata;
    NSArray *_interstitialTimeRanges;
    NSArray *_externalSubtitleOptionLanguages;
    NSString *_selectedExternalSubtitleOptionLanguage;
    double _pendingTimeBoundary;
}

@property double pendingTimeBoundary; // @synthesize pendingTimeBoundary=_pendingTimeBoundary;
@property(retain, nonatomic) NSString *selectedExternalSubtitleOptionLanguage; // @synthesize selectedExternalSubtitleOptionLanguage=_selectedExternalSubtitleOptionLanguage;
@property(retain, nonatomic) NSArray *externalSubtitleOptionLanguages; // @synthesize externalSubtitleOptionLanguages=_externalSubtitleOptionLanguages;
@property(retain, nonatomic) NSArray *interstitialTimeRanges; // @synthesize interstitialTimeRanges=_interstitialTimeRanges;
@property(retain, nonatomic) NSArray *externalMetadata; // @synthesize externalMetadata=_externalMetadata;
@property(retain, nonatomic) NSArray *navigationMarkerGroups; // @synthesize navigationMarkerGroups=_navigationMarkerGroups;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

