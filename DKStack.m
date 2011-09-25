//
//  DKStack.m
//
//  Created by Dominik Krejčík on 25/09/2011.
//  Feel free to use and distribute as long as you mention me. Or buy me a beer.
//

#import "DKStack.h"

@implementation DKStack

- (id)init
{
    self = [super init];
    if (self) {
        array = [[NSMutableArray alloc] init];
    }
    
    return self;
}

- (void)pop {
    [array removeLastObject];
}

- (void)push:(id)element {
    [array addObject:element];
}

- (id)top {
    return [array lastObject];
}

- (NSInteger)size {
    return [array count];
}

- (BOOL)isEmpty {
    return [array count] == 0;
}

- (void)clear {
    [array removeAllObjects];
}

@end
