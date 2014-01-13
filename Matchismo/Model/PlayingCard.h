//
//  PlayingCard.h
//  Matchismo
//
//  Created by Owen Zidar on 1/8/14.
//  Copyright (c) 2014 Owen Zidar. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
