//
// Created by Tobias Sundstrand on 15-01-30.
//

#import <Foundation/Foundation.h>
#import <Realm-Rest/RestRequestBuilder.h>
#import <Realm-Rest/RestPathFinder.h>
#import "RestRequestBuilder.h"

@protocol RestModelObjectProtocol;
@class RLMObject;
@class RestRequestQueue;
@class RLMRealm;

@interface RestOrchestrator : NSObject

+ (void)restForObject:(RLMObject <RestModelObjectProtocol> *)object
          requestType:(RestRequestType)requestType
           paramStyle:(RestRequestBuilderParameterStyle)parameterStyle
           parameters:(NSDictionary *)parameters
              headers:(NSDictionary *)headers
                queue:(RestRequestQueue *)queue
                realm:(RLMRealm *)realm
      realmIdentifier:(NSString *)realmIdentifier;

@end