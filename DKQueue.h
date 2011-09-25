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

- (void)pop;
- (void)push:(id)element;
- (void)clear;

- (id)front;
- (BOOL)isEmpty;
- (NSInteger)size;

@end
