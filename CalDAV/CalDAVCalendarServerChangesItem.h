//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVCalendarServerChangesItem : CoreDAVItem
{
    NSMutableSet *_changedProperties;
}

@property(retain, nonatomic) NSMutableSet *changedProperties; // @synthesize changedProperties=_changedProperties;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)addChangedProperty:(id)arg1;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

