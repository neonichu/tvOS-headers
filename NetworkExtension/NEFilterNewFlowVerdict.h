//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    _Bool _filterInbound;
    _Bool _filterOutbound;
    unsigned long long _peekInboundBytes;
    unsigned long long _peekOutboundBytes;
}

+ (id)filterDataVerdictWithFilterInbound:(_Bool)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(_Bool)arg3 peekOutboundBytes:(unsigned long long)arg4;
+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (id)dropVerdict;
+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (_Bool)supportsSecureCoding;
@property unsigned long long peekOutboundBytes; // @synthesize peekOutboundBytes=_peekOutboundBytes;
@property unsigned long long peekInboundBytes; // @synthesize peekInboundBytes=_peekInboundBytes;
@property _Bool filterOutbound; // @synthesize filterOutbound=_filterOutbound;
@property _Bool filterInbound; // @synthesize filterInbound=_filterInbound;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

