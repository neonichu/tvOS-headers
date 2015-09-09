//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBFoundation/IBICImageSlot.h>

@class IBICScale, IBICSize;

@interface IBICIconSetRepSlot : IBICImageSlot
{
    IBICSize *_size;
    IBICScale *_scale;
}

+ (id)orderedComponentClasses;
+ (id)slotWithSize:(id)arg1 scale:(id)arg2;
+ (id)slotForFileName:(id)arg1;
+ (id)requiredFileNamesToSlots;
@property(readonly) IBICScale *scale; // @synthesize scale=_scale;
@property(readonly) IBICSize *size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)requiredPixelSize;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaKey;
- (id)requiredFileName;
- (long long)compareDisplayOrder:(id)arg1;
- (id)shortDisplayName;
- (void)captureComponents;

@end

