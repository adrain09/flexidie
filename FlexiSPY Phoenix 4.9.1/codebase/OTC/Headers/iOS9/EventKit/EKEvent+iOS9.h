/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem+iOS9.h"

@class EKParticipant, EKCalendarDate, EKStructuredLocation, EKSuggestedEventInfo;

@interface EKEvent : EKCalendarItem {
    NSString *_birthdayPersonUniqueID;
    EKCalendarDate *_occurrenceEndDate;
    BOOL _occurrenceIsAllDay;
    EKCalendarDate *_occurrenceStartDate;
    EKCalendarDate *_originalOccurrenceEndDate;
    NSNumber *_originalOccurrenceIsAllDay;
    EKCalendarDate *_originalOccurrenceStartDate;
    BOOL _requiresDetachDueToSnoozedAlarm;
}

@property (nonatomic, readonly) NSString *UUID;
@property (getter=isAllDay, nonatomic) BOOL allDay;
@property (nonatomic, readonly) BOOL allowsPrivacyLevelModifications;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) BOOL attendeeReplyChanged;
@property (nonatomic, readonly) BOOL automaticLocationGeocodingAllowed;
@property (nonatomic) int availability;
@property (nonatomic, readonly) NSString *birthdayContactIdentifier;
@property (nonatomic, readonly) int birthdayPersonID;
@property (nonatomic, readonly) NSString *birthdayPersonUniqueID;
@property (nonatomic, readonly) BOOL canBeRespondedTo;
@property (nonatomic, readonly) BOOL canDetachSingleOccurrence;
@property (nonatomic, readonly) BOOL canSetAvailability;
@property (nonatomic, readonly) BOOL dateChanged;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double durationIncludingTravel;
@property (nonatomic, readonly) BOOL eligibleForTravelAdvisories;
@property (nonatomic, readonly) EKCalendarDate *endCalendarDate;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, readonly) NSObject *endDateGr;
@property (nonatomic, readonly) NSString *eventIdentifier;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (nonatomic, readonly) NSURL *externalURL;
@property (nonatomic, readonly, copy) NSDate *initialEndDate;
@property (nonatomic, readonly, copy) NSDate *initialStartDate;
@property (nonatomic) unsigned int invitationStatus;
@property BOOL ipsos_isDateTimeTenseDependent;
@property BOOL ipsos_isTimeApproximate;
@property (nonatomic, readonly) BOOL isAllDayDirty;
@property (nonatomic, readonly) BOOL isDetached;
@property (nonatomic, readonly) BOOL isEditable;
@property (nonatomic, readonly) BOOL isEndDateDirty;
@property (nonatomic, readonly) BOOL isStartDateDirty;
@property (nonatomic, readonly) BOOL isStatusDirty;
@property (nonatomic, readonly) BOOL isTravelTimeEditable;
@property (nonatomic, readonly) BOOL locationChanged;
@property (nonatomic, readonly) BOOL locationIsAConferenceRoom;
@property (nonatomic, readonly) unsigned int modifiedProperties;
@property (nonatomic, readonly) NSDate *occurrenceDate;
@property (nonatomic, copy) EKCalendarDate *occurrenceEndDate;
@property (nonatomic) BOOL occurrenceIsAllDay;
@property (nonatomic, copy) EKCalendarDate *occurrenceStartDate;
@property (nonatomic, readonly) EKParticipant *organizer;
@property (nonatomic, copy) EKCalendarDate *originalOccurrenceEndDate;
@property (nonatomic, copy) NSNumber *originalOccurrenceIsAllDay;
@property (nonatomic, copy) EKCalendarDate *originalOccurrenceStartDate;
@property (nonatomic) int participationStatus;
@property (nonatomic, readonly) NSDate *participationStatusModifiedDate;
@property (nonatomic, readonly) int pendingParticipationStatus;
@property (nonatomic) int privacyLevel;
@property (nonatomic) BOOL requiresDetachDueToSnoozedAlarm;
@property (nonatomic, copy) NSString *responseComment;
@property (nonatomic, readonly) BOOL responseMustApplyToAll;
@property (nonatomic, readonly) EKCalendarDate *startCalendarDate;
@property (nonatomic, readonly) EKCalendarDate *startCalendarDateIncludingTravelTime;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, readonly) NSObject * startDateGr;
@property (nonatomic, readonly) NSDate *startDateIncludingTravel;
@property (nonatomic, readonly) int status;
@property (nonatomic, copy) EKStructuredLocation *structuredLocation;
@property (nonatomic, retain) EKSuggestedEventInfo *suggestionInfo;
@property (nonatomic, readonly) BOOL timeChanged;
@property (nonatomic, readonly) BOOL titleChanged;
@property (nonatomic) int travelAdvisoryBehavior;
@property (nonatomic, readonly) BOOL travelAdvisoryBehaviorIsEffectivelyEnabled;
@property (nonatomic, readonly) int travelRoutingMode;
@property (nonatomic) double travelTime;
@property (nonatomic, readonly, copy) NSString *uniqueId;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)eventWithEventStore:(id)arg1;
+ (id)privacyLevelAsString:(int)arg1;

- (BOOL)_cancelWithSpan:(int)arg1 error:(id*)arg2;
- (BOOL)_checkStartDateConstraintAgainstDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 timeZone:(id)arg2 error:(id*)arg3;
- (id)_dateForNextOccurrence;
- (void)_deleteThisOccurrence;
- (BOOL)_deleteWithSpan:(int)arg1 error:(id*)arg2;
- (void)_detachWithStartDate:(id)arg1 newStartDate:(id)arg2 future:(BOOL)arg3;
- (id)_effectiveTimeZone;
- (BOOL)_eventIsTheOnlyRemainingRecurrence;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_gregorianDateCorrectedForTimeZoneFromCalendarDate:(id)arg1 orNSDate:(id)arg2;
- (BOOL)_isAllDay;
- (BOOL)_isInitialOccurrenceDate:(id)arg1;
- (BOOL)_isSimpleRepeatingEvent;
- (BOOL)_occurrenceExistsOnDate:(double)arg1 timeZone:(id)arg2;
- (int)_parentParticipationStatus;
- (id)_persistentEvent;
- (void)_sendModifiedNote;
- (BOOL)_shouldCancelInsteadOfDeleteWithSpan:(int)arg1;
- (BOOL)_shouldDeclineInsteadOfDelete;
- (id)_suggestedEventInfoRelation;
- (id)_travelTimeInternalDescription;
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)arg1;
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)arg1 error:(id*)arg2;
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;
- (BOOL)allowsAlarmModifications;
- (BOOL)allowsCalendarModifications;
- (BOOL)allowsPrivacyLevelModifications;
- (BOOL)allowsRecurrenceModifications;
- (BOOL)allowsSpansOtherThanThisEvent;
- (BOOL)attendeeReplyChanged;
- (BOOL)automaticLocationGeocodingAllowed;
- (int)availability;
- (id)birthdayContactIdentifier;
- (int)birthdayPersonID;
- (id)birthdayPersonUniqueID;
- (BOOL)canBeRespondedTo;
- (BOOL)canDetachSingleOccurrence;
- (BOOL)canMoveToCalendar:(id)arg1 fromCalendar:(id)arg2 error:(id*)arg3;
- (BOOL)canSetAvailability;
- (BOOL)changingAllDayPropertyIsAllowed;
- (void)clearInvitationStatus;
- (BOOL)commitWithSpan:(int)arg1 error:(id*)arg2;
- (id)committedValueForKey:(id)arg1;
- (int)compareStartDateWithEvent:(id)arg1;
- (BOOL)conformsToRecurrenceRules:(id)arg1;
- (BOOL)dateChanged;
- (void)dealloc;
- (id)description;
- (void)didCommit;
- (id)dirtyPropertiesToSkip;
- (double)duration;
- (double)durationIncludingTravel;
- (BOOL)eligibleForTravelAdvisories;
- (id)endCalendarDate;
- (id)endDate;
- (NSObject *)endDateGr;
- (NSObject *)endDatePinnedForAllDay;
- (id)eventIdentifier;
- (id)eventStore;
- (id)exportToICS;
- (id)externalURI;
- (id)externalURL;
- (BOOL)hasSelfAttendee;
- (unsigned int)hash;
- (id)init;
- (id)initWithEventStore:(id)arg1;
- (id)initWithPersistentObject:(id)arg1;
- (id)initWithPersistentObject:(id)arg1 occurrenceDate:(id)arg2;
- (id)initialEndDate;
- (id)initialStartDate;
- (unsigned int)invitationStatus;
- (BOOL)isAllDay;
- (BOOL)isAllDayDirty;
- (BOOL)isDetached;
- (BOOL)isEditable;
- (BOOL)isEndDateDirty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStartDateDirty;
- (BOOL)isStatusDirty;
- (BOOL)isTentative;
- (BOOL)isTravelTimeEditable;
- (BOOL)locationChanged;
- (BOOL)locationIsAConferenceRoom;
- (unsigned int)modifiedProperties;
- (BOOL)needsOccurrenceCacheUpdate;
- (id)occurrenceDate;
- (id)occurrenceEndDate;
- (BOOL)occurrenceIsAllDay;
- (id)occurrenceStartDate;
- (id)originalOccurrenceEndDate;
- (id)originalOccurrenceIsAllDay;
- (id)originalOccurrenceStartDate;
- (int)participationStatus;
- (id)participationStatusModifiedDate;
- (int)pendingParticipationStatus;
- (int)privacyLevel;
- (id)recurrenceRule;
- (BOOL)refresh;
- (BOOL)removeWithSpan:(int)arg1 error:(id*)arg2;
- (BOOL)requiresDetach;
- (BOOL)requiresDetachDueToSnoozedAlarm;
- (id)responseComment;
- (BOOL)responseMustApplyToAll;
- (void)revert;
- (void)rollback;
- (void)setAllDay:(BOOL)arg1;
- (void)setAvailability:(int)arg1;
- (void)setEndDate:(id)arg1;
- (void)setInvitationStatus:(unsigned int)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNeedsOccurrenceCacheUpdate:(BOOL)arg1;
- (void)setOccurrenceEndDate:(id)arg1;
- (void)setOccurrenceIsAllDay:(BOOL)arg1;
- (void)setOccurrenceStartDate:(id)arg1;
- (void)setOriginalOccurrenceEndDate:(id)arg1;
- (void)setOriginalOccurrenceIsAllDay:(id)arg1;
- (void)setOriginalOccurrenceStartDate:(id)arg1;
- (void)setParticipationStatus:(int)arg1;
- (void)setPrivacyLevel:(int)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRequiresDetachDueToSnoozedAlarm:(BOOL)arg1;
- (void)setResponseComment:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSuggestionInfo:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTravelAdvisoryBehavior:(int)arg1;
- (void)setTravelTime:(double)arg1;
- (void)snoozeAlarm:(id)arg1 withTimeIntervalFromNow:(double)arg2;
- (id)startCalendarDate;
- (id)startCalendarDateIncludingTravelTime;
- (id)startDate;
- (id)startDateForRecurrence;
- (NSObject *)startDateGr;
- (id)startDateIncludingTravel;
- (NSObject *)startDatePinnedForAllDay;
- (int)status;
- (id)suggestionInfo;
- (BOOL)timeChanged;
- (id)title;
- (BOOL)titleChanged;
- (int)travelAdvisoryBehavior;
- (BOOL)travelAdvisoryBehaviorIsEffectivelyEnabled;
- (int)travelRoutingMode;
- (double)travelTime;
- (id)uniqueId;
- (BOOL)updateEventToEvent:(id)arg1;
- (BOOL)validateRecurrenceRule:(id)arg1 error:(id*)arg2;
- (BOOL)validateWithSpan:(int)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (id)_commentIconString;
- (id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)arg1;
- (int)daySpan;
- (BOOL)hasHumanInviteesToDisplay;
- (id)sortEKParticipantsIgnoringNonHumans:(id)arg1;
- (id)sortedEKAttachmentsDisplayStrings;
- (id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (BOOL)sg_isCuratedEventFromSuggestionNewerThan:(double)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage

- (id)ipsos_betterDescription;
- (BOOL)ipsos_isDateTimeTenseDependent;
- (BOOL)ipsos_isTimeApproximate;
- (void)setIpsos_isDateTimeTenseDependent:(BOOL)arg1;
- (void)setIpsos_isTimeApproximate:(BOOL)arg1;

@end
