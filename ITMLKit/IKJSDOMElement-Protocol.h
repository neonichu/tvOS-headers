//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNodeList, NSString;

@protocol IKJSDOMElement <JSExport>
@property(readonly, retain, nonatomic) NSString *tagName;
- (_Bool)hasAttribute:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (void)removeAttribute:(NSString *)arg1;
- (void)setAttribute:(NSString *)arg1:(NSString *)arg2;
- (NSString *)getAttribute:(NSString *)arg1;
@end

