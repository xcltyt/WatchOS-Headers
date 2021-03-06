//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIView;

@interface PUICActionSheetGroup : NSObject
{
    NSArray *_actions;
    NSString *_title;
    UIView *_headerView;
}

+ (id)groupWithActions:(id)arg1 headerView:(id)arg2;
+ (id)groupWithActions:(id)arg1 title:(id)arg2;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;

@end

