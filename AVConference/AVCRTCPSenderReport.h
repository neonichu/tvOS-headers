//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVConference/AVCRTCPPacket.h>

@class AVCRTCPReceiverReport;

@interface AVCRTCPSenderReport : AVCRTCPPacket
{
    unsigned int _NTPMostSignificantWord;
    unsigned int _NTPLeastSignificantWord;
    unsigned int _RTPTimestamp;
    unsigned int _packetsSent;
    unsigned int _octetsSent;
    AVCRTCPReceiverReport *_receiverReport;
}

@property(retain, nonatomic) AVCRTCPReceiverReport *receiverReport; // @synthesize receiverReport=_receiverReport;
@property(nonatomic) unsigned int octetsSent; // @synthesize octetsSent=_octetsSent;
@property(nonatomic) unsigned int packetsSent; // @synthesize packetsSent=_packetsSent;
@property(nonatomic) unsigned int RTPTimestamp; // @synthesize RTPTimestamp=_RTPTimestamp;
@property(nonatomic) unsigned int NTPLeastSignificantWord; // @synthesize NTPLeastSignificantWord=_NTPLeastSignificantWord;
@property(nonatomic) unsigned int NTPMostSignificantWord; // @synthesize NTPMostSignificantWord=_NTPMostSignificantWord;
- (id)description;
- (void)dealloc;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg1;

@end

