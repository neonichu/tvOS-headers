//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/EDSheet.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface EDChartSheet : EDSheet
{
    CHDChart *mMainChart;
    _Bool mIsBoundsSet;
    struct CGRect mBounds;
}

- (void)addDrawable:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (_Bool)areBoundsSet;
- (void)setMainChart:(id)arg1;
- (id)mainChart;
- (void)teardown;

@end

