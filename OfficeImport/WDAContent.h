//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OADClient-Protocol.h>
#import <OfficeImport/OADTextClient-Protocol.h>

@class NSString, OADDrawable, WDAAnchor, WDATextBox;

__attribute__((visibility("hidden")))
@interface WDAContent : NSObject <OADClient, OADTextClient>
{
    WDAAnchor *mAnchor;
    WDATextBox *mTextBox;
    OADDrawable *mDrawable;
    int mTextType;
}

+ (Class)classForType:(unsigned short)arg1;
@property(readonly, nonatomic) WDAAnchor *anchor; // @synthesize anchor=mAnchor;
@property(readonly, copy) NSString *description;
- (_Bool)hasText;
- (_Bool)floating;
- (void)setTextType:(int)arg1;
- (int)textType;
- (_Bool)isTopLevelObject;
- (_Bool)isLine;
- (_Bool)isShape;
- (void)setDrawable:(id)arg1;
- (id)drawable;
- (void)setTextBox:(id)arg1 document:(id)arg2;
- (id)textBox;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGRect)bounds;
- (_Bool)hasBounds;
- (id)createTextBoxWithDocument:(id)arg1 textType:(int)arg2;
- (void)clearAnchor;
- (id)createAnchor;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

