//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ATVLegacyContentKit/NSObject-Protocol.h>

@class NSDictionary, SSURLRequestProperties, TVLAppliance, TVSXMLDocument;

@protocol TVLApplianceDelegate <NSObject>

@optional
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithPropertyList:(NSDictionary *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didSetScreensaverPhotosCollection:(NSDictionary *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithXMLDocument:(TVSXMLDocument *)arg2;
- (void)appliance:(TVLAppliance *)arg1 didRequestLoadWithRequestProperties:(SSURLRequestProperties *)arg2;
@end

