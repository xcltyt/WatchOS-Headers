//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICTableViewController.h"

#import "NCABContactQuickCellDelegate.h"

@class NCABContactAction, NSString;

@interface NCABUnknownContactDetailViewController : PUICTableViewController <NCABContactQuickCellDelegate>
{
    NSString *_name;
    NSString *_destination;
    unsigned int _unknownContactType;
    NCABContactAction *_contactAction;
}

- (id)initWithUnknownContact:(id)arg1 type:(unsigned int)arg2;
- (void)quickMessageDestination:(id)arg1;
- (void)quickCallDestination:(id)arg1;
- (id)initWithDestination:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
