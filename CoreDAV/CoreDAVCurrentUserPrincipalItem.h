//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (id)description;
- (void)dealloc;
- (id)init;

@end

