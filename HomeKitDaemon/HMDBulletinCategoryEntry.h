//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HMDBulletinCategoryEntry : NSObject
{
    NSString *_serviceType;
    NSString *_characteristicType;
}

@property(retain, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (_Bool)isRelatedToCharacteristic:(id)arg1;
- (id)initWithServiceType:(id)arg1 characteristicType:(id)arg2;
- (id)init;

@end

