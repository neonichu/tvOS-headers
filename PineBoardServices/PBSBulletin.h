//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PineBoardServices/NSCopying-Protocol.h>
#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface PBSBulletin : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_message;
    NSString *_serviceIdentifier;
    NSString *_viewControllerClassName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
@property(copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
@property(copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

