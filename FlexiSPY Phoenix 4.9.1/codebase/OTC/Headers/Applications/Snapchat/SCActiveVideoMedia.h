/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library

//@class Media;
#import "Media.h"

__attribute__((visibility("hidden")))
@interface SCActiveVideoMedia : NSObject {//XXUnknownSuperclass {
	BOOL _cleanWhenLoaded;
	BOOL _counter;
	BOOL _hideWhenLoaded;
	BOOL _playWhenLoaded;
	id _completion;
	Media* _media;
	int _state;
	int _slot;
	float _timeLeft;
	float _yOffset;
	int _counterShape;
	double _videoTimeSoFar;
}
@property(assign, nonatomic) int counterShape;
@property(assign, nonatomic) float yOffset;
@property(assign, nonatomic) double videoTimeSoFar;
@property(assign, nonatomic) float timeLeft;
@property(assign, nonatomic) int slot;
@property(assign, nonatomic) int state;
@property(assign, nonatomic) BOOL playWhenLoaded;
@property(retain, nonatomic) Media* media;
@property(assign, nonatomic) BOOL hideWhenLoaded;
@property(assign, nonatomic) BOOL counter;
@property(copy, nonatomic) id completion;
@property(assign, nonatomic) BOOL cleanWhenLoaded;
//-(void).cxx_destruct;
-(id)initWithMedia:(id)media withCounter:(BOOL)counter timeLeft:(float)left videoTimeSoFar:(double)far playWhenLoaded:(BOOL)loaded slot:(int)slot counterShape:(int)shape completion:(id)completion;
@end

