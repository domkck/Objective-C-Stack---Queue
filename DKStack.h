//
//  DKStack.h
//
//  Created by Dominik Krejčík on 25/09/2011.
//  Feel free to use and distribute as long as you mention me. Or buy me a beer.
//

#import <Foundation/Foundation.h>

@interface DKStack : NSObject {
    NSMutableArray* array;
}

-(id)pop;
-(void)push:(id)element;
-(void)clear;

-(id)peek;
-(NSInteger)size;
-(BOOL)isEmpty;

@end
