//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCellLayoutManagerValue1.h>

@interface TKTonePickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
{
    double _minimumTextIndentation;
}

@property(nonatomic) double minimumTextIndentation; // @synthesize minimumTextIndentation=_minimumTextIndentation;
- (struct CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2;
- (struct CGRect)textRectForCell:(id)arg1;
- (struct CGRect)_adjustedTextFrameWithOriginalTextFrame:(struct CGRect)arg1 forCell:(id)arg2;

@end

