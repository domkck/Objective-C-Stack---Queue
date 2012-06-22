//
//  DKQueue.h
//
//  Created by Dominik Krejčík on 25/09/2011.
//  Feel free to use and distribute as long as you mention me. Or buy me a beer.
//

#import <Foundation/Foundation.h>

@interface DKQueue : NSObject {
    NSMutableArray* array;
}

-(id)dequeue;
-(void)enqueue:(id)element;
-(void)clear;

-(id)peek;
-(BOOL)isEmpty;
-(NSInteger)size;

@end
