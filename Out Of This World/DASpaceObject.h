//
//  DASpaceObject.h
//  Out Of This World
//
//  Created by Dave Arnoldi on 2014/08/31.
//  Copyright (c) 2014 Dave Arnoldi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DASpaceObject : NSObject


@property (strong, nonatomic) NSString *name;
@property (nonatomic) float gravitationalForce;
@property (nonatomic) float diameter;
@property (nonatomic) float yearLength;
@property (nonatomic) float dayLength;
@property (nonatomic) float temperature;
@property (nonatomic) int nomberOfMoons;
@property (strong, nonatomic) NSString *nickName;
@property (strong, nonatomic) NSString *interestingFact;

@property (strong, nonatomic) UIImage *spaceImage;



-(id) initWithData:(NSDictionary *) data andImage:(UIImage *)image;


@end
