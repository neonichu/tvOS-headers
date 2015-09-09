//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureRecordingSettings.h>

#import <Celestial/NSCoding-Protocol.h>
#import <Celestial/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface FigCaptureAudioFileRecordingSettings : FigCaptureRecordingSettings <NSCoding, NSCopying>
{
    NSDictionary *_audioSettings;
    NSArray *_metadata;
}

@property(copy, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSDictionary *audioSettings; // @synthesize audioSettings=_audioSettings;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

