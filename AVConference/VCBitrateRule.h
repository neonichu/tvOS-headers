//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCBitrateRule : NSObject
{
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule *limitingRule;
}

@property(readonly, nonatomic) VCVideoRule *limitingRule; // @synthesize limitingRule;
@property int connectionType; // @synthesize connectionType=_connectionType;
@property unsigned int bitrate; // @synthesize bitrate=_bitrate;
- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;

@end

