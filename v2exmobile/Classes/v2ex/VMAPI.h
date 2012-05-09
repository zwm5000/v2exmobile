//
//  VMAPI.h
//  v2exmobile
//
//  Created by Xu Ke <tuoxie007@gmail.com> on 5/4/12.
//  Copyright (c) 2012 Xu Ke.
//  Released under the MIT Licenses.
//

#import <Foundation/Foundation.h>

@interface VMAPI : NSObject
{
    NSURLConnection *connection;
    NSMutableData *jsonData;
    id _delegate;
    NSMutableArray *requestQueue;
    BOOL loading;
}

@property (strong) id delegate;

- (void)allNodesWithDelegate:(id)delegate;
- (void)topicsWithDelegate:(id)delegate;
- (void)processNextRequest;

+ (VMAPI *)sharedAPI;

@end

@protocol APIDalegate <NSObject>

- (void)didFinishedLoadingWithData:(id)data;
- (void)cancel;

@end
