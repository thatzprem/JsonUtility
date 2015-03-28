//
//  ViewController.m
//  JsonTest
//
//  Created by Prem kumar on 17/03/14.
//  Copyright (c) 2014 nexTip. All rights reserved.
//

#import "ViewController.h"
#import "NSJSONSerialization+Additions.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

    NSURL *url = [NSURL URLWithString:@"https://maps.googleapis.com/maps/api/place/details/json?reference=CpQBggAAAJoVNQqXLnDOIcg5zntwCPPCnrJFbhu-lGmAb6Ky3cYXUepI_1Jxa3Jf4pBWuwCXp9cYNKQIAMXw552BXfihmN-8cxM0BKWiuNdl7ZMHu4QsXvoHfyvb8PVL-zwV0jsdZpmdAZ3YHdBRgq8D-H6QQxodXJx2EGz13VvSx4aVGnIAyaJqAA_d6Hsze53O1xYUBRIQ3gd2YtxaL7v83dP0z_sHrxoUiJncH0aTxRHWioydLVErRav-8AU&sensor=true&key=AIzaSyD01grVmoelEHPJZ3WwzhC0oVtzwuuzcM8"];
    NSData *data = [NSJSONSerialization getJsonDataFromURL:url];
    NSLog(@"Json Data: %@",data);
    
    NSString *jsonString = [NSJSONSerialization convertNSDataToJsonString:data];
    
    NSLog(@"%@",jsonString);
    
    NSLog(@"%d",[NSJSONSerialization getJsonType:jsonString]);

}


@end
