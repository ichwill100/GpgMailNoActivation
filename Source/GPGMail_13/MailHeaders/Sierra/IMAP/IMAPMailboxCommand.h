//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPSingleCommand.h>

@class NSString;

@interface IMAPMailboxCommand : IMAPSingleCommand
{
    NSString *_mailboxName;	// 8 = 0x8
    NSString *_mailboxArgumentName;	// 16 = 0x10
}

@property(copy) NSString *mailboxArgumentName; // @synthesize mailboxArgumentName=_mailboxArgumentName;
@property(copy) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;	// IMP=0x00000000000323a3
- (long long)maxAllowedConnectionState;	// IMP=0x000000000003234a
- (long long)minRequiredConnectionState;	// IMP=0x000000000003233f
- (id)simpleDescriptionString;	// IMP=0x000000000003227e
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x00000000000321db
- (id)debugCommandStringWithAccount:(id)arg1;	// IMP=0x00000000000320e3
- (BOOL)shouldSendAgainOnError;	// IMP=0x00000000000320d8
- (id)init;	// IMP=0x0000000000032009
- (id)initWithMailboxName:(id)arg1;	// IMP=0x0000000000031e9e

@end
