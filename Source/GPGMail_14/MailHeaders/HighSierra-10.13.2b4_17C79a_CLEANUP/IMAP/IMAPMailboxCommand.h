//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAPSingleCommand.h>

@class NSString;

@interface IMAPMailboxCommand : IMAPSingleCommand
{
    NSString *_mailboxName;
    NSString *_mailboxArgumentName;
}

@property(copy) NSString *mailboxArgumentName; // @synthesize mailboxArgumentName=_mailboxArgumentName;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
//- (void).cxx_destruct;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)simpleDescriptionString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)debugCommandStringWithAccount:(id)arg1;
- (BOOL)shouldSendAgainOnError;
- (id)init;
- (id)initWithMailboxName:(id)arg1;

@end
