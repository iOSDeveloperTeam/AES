//
//  ViewController.m
//  test
//
//  Created by leying on 16/2/15.
//  Copyright (c) 2016年 leying. All rights reserved.
//

#import "ViewController.h"
#import "NSString+AES256.h"
#define KEY    @"1de&^*-#gsol&^*-"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSString *string = @"lhy123456";
    NSString *str = [string aes256_encrypt:KEY];
    NSLog(@"%@",str);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end


