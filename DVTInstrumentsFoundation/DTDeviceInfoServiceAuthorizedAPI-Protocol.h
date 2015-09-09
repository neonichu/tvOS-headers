//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTInstrumentsFoundation/DTXAllowedRPC-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol DTDeviceInfoServiceAuthorizedAPI <DTXAllowedRPC>
- (NSString *)cpDeviceName;
- (NSString *)cpDeviceInfoAsXML;
- (NSString *)cpKDebugEventsAsXML;
- (NSDictionary *)networkInformation;
- (NSDictionary *)systemInformation;
- (NSDictionary *)hardwareInformation;
- (NSDictionary *)iconDescriptionFileForAppPath:(NSString *)arg1;
- (NSArray *)directoryListingForPath:(NSString *)arg1;
- (NSDictionary *)symbolicatorSignaturesForExpiredPids;
- (void)unregisterSignatureTrackingForPid:(NSNumber *)arg1;
- (NSData *)symbolicatorSignatureForPid:(NSNumber *)arg1 trackingSelector:(NSString *)arg2;
- (NSString *)machKernelName;
- (NSNumber *)pidIs64Bit:(NSNumber *)arg1;
- (NSNumber *)isRunningPid:(NSNumber *)arg1;
- (NSString *)execnameForPid:(NSNumber *)arg1;
- (NSString *)nameForGID:(NSNumber *)arg1;
- (NSString *)nameForUID:(NSNumber *)arg1;
- (NSArray *)runningProcesses;
- (NSArray *)machTimeInfo;
@end

