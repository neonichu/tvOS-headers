//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGFlight : NSObject
{
    NSString *_flightno;
    NSString *_airline;
    NSString *_departureAirportDescription;
    NSString *_arrivalAirportDescription;
}

@property(readonly, nonatomic) NSString *arrivalAirportDescription; // @synthesize arrivalAirportDescription=_arrivalAirportDescription;
@property(readonly, nonatomic) NSString *departureAirportDescription; // @synthesize departureAirportDescription=_departureAirportDescription;
@property(readonly, nonatomic) NSString *airline; // @synthesize airline=_airline;
@property(readonly, nonatomic) NSString *flightno; // @synthesize flightno=_flightno;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCarrier:(id)arg1 flightNo:(id)arg2 depDesc:(id)arg3 arrDesc:(id)arg4;

@end

