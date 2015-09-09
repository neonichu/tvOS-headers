//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CHDAxis.h>

__attribute__((visibility("hidden")))
@interface CHDValueAxis : CHDAxis
{
    _Bool mPercentageFormattingFlag;
    _Bool mAutoMajorUnitValue;
    _Bool mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
    int mBuiltInUnit;
    _Bool mShowBuiltInUnit;
}

- (id)contentFormatWithBuiltInUnit;
- (void)setBuiltInUnit:(int)arg1;
- (int)builtInUnit;
- (void)setShowBuiltInUnitFlag:(_Bool)arg1;
- (_Bool)isShowBuiltInUnit;
- (void)adjustAxisPositionForHorizontalChart;
- (_Bool)isAutoMinorUnitValue;
- (_Bool)isAutoMajorUnitValue;
- (void)setPercentageFormattingFlag:(_Bool)arg1;
- (_Bool)isPercentageFormattingFlag;
- (void)setScalingLogBase:(double)arg1;
- (double)scalingLogBase;
- (void)setMinorUnitValue:(double)arg1;
- (double)minorUnitValue;
- (void)setMajorUnitValue:(double)arg1;
- (double)majorUnitValue;
- (id)initWithResources:(id)arg1;

@end

