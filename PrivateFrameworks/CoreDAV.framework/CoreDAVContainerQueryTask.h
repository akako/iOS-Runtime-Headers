/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSString, <CoreDAVContainerQueryTaskDelegate>;

@interface CoreDAVContainerQueryTask : CoreDAVTask  {
    NSSet *_searchTerms;
    unsigned int _searchLimit;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property <CoreDAVContainerQueryTaskDelegate> * delegate;

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;
- (id)_initWithSearchTerms:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)initWithSearchString:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(unsigned int)arg2 atURL:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;

@end