//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMPMediaEntity : SADomainObject
{
}

+ (id)mediaEntityWithDictionary:(id)arg1 context:(id)arg2;
+ (id)mediaEntity;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *sortTitle;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

