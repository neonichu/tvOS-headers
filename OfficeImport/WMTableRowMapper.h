//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

__attribute__((visibility("hidden")))
@interface WMTableRowMapper : CMMapper
{
    WDTableRow *mWdTableRow;
    double mHeight;
}

+ (_Bool)isTableRowDeleted:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (double)height;
- (id)initWithWDTableRow:(id)arg1 parent:(id)arg2;
- (void)setRowProperties:(id)arg1;

@end

