//
//  NSJSONSerialization+Additions.h
//  JsonTest
//
//  Created by Prem kumar on 17/03/14.
//  Copyright (c) 2014 nexTip. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSJSONSerialization (Additions)

typedef enum {
    JSON_TYPE_NO_TYPE = 0,
    JSON_TYPE_ARRAY,
    JSON_TYPE_DICTIONARY
} JSON_TYPE;

/**
 It will check if the json is valid on the specified URL
 @param url valid URL that returns a json response
 @return BOOL yes,if json is valid & no if reveived json is invalid or received data is nil.
 */
+(BOOL)isValidJsonFromURL:(NSURL *)url;

/**
 It will convert a jsonString to a NSDictionary
 @param jsonString a json string to convert
 @return NSDictionary is conversion is successfull, nil if conversion fails.
 */
+(NSDictionary *)convertJsonStringToDictionary:(NSString *)jsonString;

/**it will check of the passed object is empty
 @param object that has to be tested
 @return BOOL yes if object is empty.
 */
+(BOOL)isObjectEmpty:(id)object;

/**This method will get the data from the URL provided.
 @param url to fetch the data from
 @return NSData returned from the server.
 */
+(NSData *)getJsonDataFromURL:(NSURL *)url;

/** This method is to check if the data is a valid json.
 @param object that has to be tested
 @return BOOL yes if json is valid
 */
+(BOOL)isValidJsonData:(NSData *)jsonData;

/** This method will convert the received NSData to NSString.
 @param NSdata that has to be converted
 @return NSString converted string
 */
+(NSString *)convertNSDataToJsonString:(NSData *)jsonData;

/** This method to know the root node type in the json
 @param jsonString that has to be checked
 @return JSON_TYPE type to return
 */
+(JSON_TYPE)getJsonType:(NSString *)jsonString;

@end
