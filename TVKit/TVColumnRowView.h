//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;
@protocol TVColumnRowViewDataSource, TVColumnRowViewDelegate;

@interface TVColumnRowView : UIView
{
    _Bool _drawsBorders;
    _Bool _needsReload;
    id <TVColumnRowViewDataSource> _dataSource;
    id <TVColumnRowViewDelegate> _delegate;
    NSMutableArray *_headerViews;
    NSMutableArray *_columnViews;
}

@property(retain, nonatomic) NSMutableArray *columnViews; // @synthesize columnViews=_columnViews;
@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(nonatomic) _Bool needsReload; // @synthesize needsReload=_needsReload;
@property(nonatomic) _Bool drawsBorders; // @synthesize drawsBorders=_drawsBorders;
@property(nonatomic) __weak id <TVColumnRowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TVColumnRowViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_setHeader:(id)arg1 atIndex:(long long)arg2;
- (id)_headerAtIndex:(long long)arg1;
- (void)reloadData;
- (void)reloadDataIfNeeded;
- (void)setNeedsReloadData;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

