//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ESDContainer, ESDObject, OABReaderState, OADDrawable, OADGraphic, OADGroup, OADTableCell, OCPPackagePart;

@protocol OABReaderClient
+ (OADDrawable *)readDrawableFromPackagePart:(OCPPackagePart *)arg1 foundInObject:(ESDObject *)arg2 state:(OABReaderState *)arg3;
+ (int)oadSchemeColorValueForEshSchemeColorIndex:(unsigned short)arg1 state:(OABReaderState *)arg2;
+ (_Bool)xmlEquivalentOfDrawableCanBeUsed;
+ (_Bool)tablesAreAllowed;
+ (_Bool)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(ESDObject *)arg1 toTableCell:(OADTableCell *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromGroup:(ESDContainer *)arg1 toGroup:(OADGroup *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromShape:(ESDObject *)arg1 toGraphic:(OADGraphic *)arg2 state:(OABReaderState *)arg3;
@end

