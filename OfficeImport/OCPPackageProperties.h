//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCPPackageProperties : NSObject
{
    NSString *mCreator;
    NSString *mDescription;
    NSString *mKeywords;
    NSString *mTitle;
}

- (id)title;
- (id)keywords;
- (id)description;
- (id)creator;
- (void)dealloc;
- (id)initWithXml:(struct _xmlDoc *)arg1;
- (void)readFromXml:(struct _xmlDoc *)arg1;

@end

