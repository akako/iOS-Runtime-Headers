/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class Player, Decomposer;

@interface WordsSpeaker : NSObject  {
    Decomposer *_matcher;
    Player *_player;
}

@property(readonly) BOOL isPlaying;


- (BOOL)isPlaying;
- (id)initWithGender:(id)arg1 language:(id)arg2;
- (BOOL)playSoundsForWords:(id)arg1;
- (void)stopAllSounds;

@end