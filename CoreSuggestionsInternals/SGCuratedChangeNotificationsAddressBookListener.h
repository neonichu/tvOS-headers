//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGCuratedChangeNotificationsBaseListener.h>

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener
{
    void *_addressBook;
}

- (void)stopListening;
- (void)startListening;

@end

