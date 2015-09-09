//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

@interface IBICScale : IBICSlotComponent
{
    double _multiple;
    long long _coreUIScale;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 multiple:(double)arg4 coreUIScale:(long long)arg5 displayOrder:(double)arg6;
+ (id)contentsJSONKey;
@property(readonly) long long coreUIScale; // @synthesize coreUIScale=_coreUIScale;
@property(readonly) double multiple; // @synthesize multiple=_multiple;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToSlotComponent:(id)arg1;
- (_Bool)isEqualToScale:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 multiple:(double)arg4 coreUIScale:(long long)arg5 displayOrder:(double)arg6;

@end

