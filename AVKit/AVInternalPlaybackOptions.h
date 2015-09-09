//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVInternalPlaybackOptions : NSObject
{
    _Bool _requireNormalPlayback;
    _Bool _requiresFullSubtitles;
    _Bool _autoplay;
    NSArray *_allowedSubtitleOptionLanguages;
}

@property(nonatomic, getter=isAutoplay) _Bool autoplay; // @synthesize autoplay=_autoplay;
@property(nonatomic) _Bool requiresFullSubtitles; // @synthesize requiresFullSubtitles=_requiresFullSubtitles;
@property(copy, nonatomic) NSArray *allowedSubtitleOptionLanguages; // @synthesize allowedSubtitleOptionLanguages=_allowedSubtitleOptionLanguages;
@property(nonatomic) _Bool requireNormalPlayback; // @synthesize requireNormalPlayback=_requireNormalPlayback;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_descriptionOfBooleanProperty:(id)arg1;
- (id)_descriptionOfTrueBooleanProperty:(id)arg1;
- (void)didStopAutoplay;
- (void)didStartAutoplay;
@property(readonly, getter=isOffOptionAvailableForSubtitles) _Bool offOptionAvailableForSubtitles;

@end

