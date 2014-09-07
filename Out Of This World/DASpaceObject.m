//
//  DASpaceObject.m
//  Out Of This World
//
//  Created by Dave Arnoldi on 2014/08/31.
//  Copyright (c) 2014 Dave Arnoldi. All rights reserved.
//

#import "DASpaceObject.h"
#import "AstronomicalData.h"

@implementation DASpaceObject

-(id) init
{
    self = [self initWithData:Nil andImage:Nil];
    return self;
    
    
}

-(id) initWithData:(NSDictionary *)data andImage:(UIImage *)image
{
    self = [super init];
    
    self.name = data[PLANET_NAME];
    self.gravitationalForce = [data[PLANET_GRAVITY] floatValue];
    self.diameter = [data[PLANET_DIAMETER] floatValue];
    self.yearLength = [data[PLANET_YEAR_LENGTH]floatValue];
    self.dayLength = [data[PLANET_DAY_LENGTH]floatValue];
    self.temperature    = [data[PLANET_TEMPERATURE]floatValue];
    self.nomberOfMoons = [data[PLANET_NUMBER_OF_MOONS]intValue];
    self.nickName = data[PLANET_NICKNAME];
    self.interestingFact = data[PLANET_INTERESTING_FACT];
    
    self.spaceImage = image;
    
    return self;

}

@end
