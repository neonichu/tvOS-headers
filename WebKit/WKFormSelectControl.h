//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKFormPeripheral-Protocol.h>

__attribute__((visibility("hidden")))
@interface WKFormSelectControl : NSObject <WKFormPeripheral>
{
    struct RetainPtr<id<WKFormControl>> _control;
}

+ (id)createPeripheralWithView:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endEditing;
- (void)beginEditing;
- (id)assistantView;
- (id)initWithView:(id)arg1;

@end

