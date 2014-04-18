//
//  AFHTTPRequestOperationManager+multipart.h
//  AFHTTPRequestOperationManager+multipart
//
//  Created by Andrea on 18/04/14.
//  Copyright (c) 2014 Fancy Pixel. All rights reserved.
//

#import <AFHTTPRequestOperationManager.h>

@interface AFHTTPRequestOperationManager (multipart)

- (AFHTTPRequestOperation *)PATCH:(NSString *)URLString
                       parameters:(NSDictionary *)parameters
        constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block
                          success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                          failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

- (AFHTTPRequestOperation *)PUT:(NSString *)URLString
                     parameters:(NSDictionary *)parameters
      constructingBodyWithBlock:(void (^)(id <AFMultipartFormData> formData))block
                        success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success
                        failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end
