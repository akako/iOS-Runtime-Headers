/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFBufferedDataConsumer, NSData;

@interface _MFOutgoingMessageBody : MessageBody <MFCollectingDataConsumer> {
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long _count;
    BOOL _lastNewLine;
}


- (id)data;
- (void)dealloc;
- (id)init;
- (unsigned long)count;
- (BOOL)isLastCharacterNewLine;
- (id)rawData;
- (int)appendData:(id)arg1;
- (void)done;

@end