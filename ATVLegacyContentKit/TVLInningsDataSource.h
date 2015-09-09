//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/TVLColumnRowViewDataSource.h>

@interface TVLInningsDataSource : TVLColumnRowViewDataSource
{
    long long _pageSize;
    long long _currentPage;
}

@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
- (id)columnRowView:(id)arg1 headerForColumn:(long long)arg2;
- (id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3;
- (long long)numberOfColumnsInColumnRowView:(id)arg1;
- (long long)convertColumn:(long long)arg1;
- (void)advanceToNextPage;
@property(readonly, nonatomic) long long numberOfPages;
- (id)initWithTableElement:(id)arg1;

@end

