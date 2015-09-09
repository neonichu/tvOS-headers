//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@class ICSDateValue, NSString;

@interface CalDAVCalendarServerResourceChangeDeletedElement : CalDAVCalendarServerResourceChangeElement
{
    _Bool _hadMoreInstances;
    NSString *_componentType;
    NSString *_summary;
    NSString *_displayName;
    ICSDateValue *_nextInstance;
}

@property(nonatomic) _Bool hadMoreInstances; // @synthesize hadMoreInstances=_hadMoreInstances;
@property(retain, nonatomic) ICSDateValue *nextInstance; // @synthesize nextInstance=_nextInstance;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSString *componentType; // @synthesize componentType=_componentType;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)setDeletedDetails:(id)arg1;
- (id)init;

@end

