//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUICAnimatedEmojiChooser, PUICVideo, UIImage;

@interface PUICAnimatedEmoji : NSObject
{
    struct _AnimatedEmojiSpecification _specification;
    int _type;
    NSString *_name;
    PUICVideo *_videoLoop;
    UIImage *_animatedImage;
    PUICAnimatedEmojiChooser *_chooserForLowerHalfPanning;
    PUICAnimatedEmojiChooser *_chooserForUpperHalfPanning;
    PUICAnimatedEmojiChooser *_chooserForCrown;
    int _animatedEmojiType;
}

+ (int)defaultAnimatedEmojiTypeForHearts;
+ (int)defaultAnimatedEmojiTypeForHands;
+ (int)defaultAnimatedEmojiTypeForFaces;
+ (id)sharedInstanceWithAnimatedEmojiType:(int)arg1;
+ (id)emojiAssetsBundle;
- (void)clearCaches;
@property(readonly, nonatomic) int animatedEmojiType; // @synthesize animatedEmojiType=_animatedEmojiType;
@property(readonly, nonatomic) UIImage *animatedImage;
@property(readonly, nonatomic) PUICAnimatedEmojiChooser *chooserForCrown;
@property(readonly, nonatomic) PUICAnimatedEmojiChooser *chooserForUpperHalfPanning;
@property(readonly, nonatomic) PUICAnimatedEmojiChooser *chooserForLowerHalfPanning;
@property(readonly, nonatomic) PUICVideo *videoLoop;
- (struct _AnimatedEmojiSpecification)_specificationForAnimatedEmojiType:(int)arg1;
- (id)_initWithAnimatedEmojiType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@end
