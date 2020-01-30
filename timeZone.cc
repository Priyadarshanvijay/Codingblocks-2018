#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

bool recruiterCalender[48] = {false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,true,true,true,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
bool candidateCalender[144] = {false,false,false,false,false,false,false,false,false,false,false,true,true,false,true,true,false,false,false,true,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};
string dateArr[3] = {"29-Jan-2020","30-Jan-2020","31-Jan-2020"};

int convertStringToTimeIndex(string curTime,int offset){
    //curTime format is hh:mm & minutes are 00 or 30 only
    int tm = 0;
    tm += curTime[0+offset]-'0';
    tm *= 10;
    tm += curTime[1+offset]-'0';
    tm *= 2;
    if(curTime[3+offset] == '3') ++tm;
    return tm;
}

int findDayStartIndex(string curTime, string srcTimeZone, string destTimeZone){
    int curTimeIndex = convertStringToTimeIndex(curTime,0);
    int srcTimeZoneIndex = convertStringToTimeIndex(srcTimeZone,1);
    int destTimeZoneIndex = convertStringToTimeIndex(destTimeZone,1);
    if(srcTimeZone[0] == '-') srcTimeZoneIndex *= -1;
    if(destTimeZone[0] == '-') destTimeZoneIndex *= -1;
    return (curTimeIndex + destTimeZoneIndex - srcTimeZoneIndex + 48);
}

pair<int,string> findTimeFromIndex(int index){
    int day = index/48;
    int time = index%48;
    string hh = to_string(time/2);
    if(hh.length() < 2) hh = "0"+hh;
    if((time%2) == 1) hh = hh+":30";
    else hh = hh+":00";
    return {day,hh};
}

void recruiterFree(string timeZone){
    for(int i = 0 ; i < 48 ; ++i){
        if(recruiterCalender[i]) cout << "Recruiter free at " << dateArr[1] << " " << findTimeFromIndex(i).second << " GMT " << timeZone << '\n';
    }
}

void candidateFree(string timeZone){
    for(int i = 0 ; i < 144 ; ++i){
        if(recruiterCalender[i]){
            pair<int,string> dateAndTime = findTimeFromIndex(i);
            cout << "Candidate free at " << dateArr[dateAndTime.first] << " " << dateAndTime.second <<" GMT " << timeZone << '\n';
        }
    }
}

pair<int,vector<int>> findCommonSlots(int noOfSlotsRequired, int startIndexOfCandidate){
    pair<int,vector<int>> noOfFreeSlots;
    noOfFreeSlots.first = 0;
    for(int start = 0 ; (startIndexOfCandidate+start < 144) &&  (start < 48) ; ++start){
        if(candidateCalender[startIndexOfCandidate+start] && recruiterCalender[start]){
            bool isAvailable = true;
            for(int subStart = start ; (startIndexOfCandidate + subStart < 144) && (subStart < noOfSlotsRequired) ; ++subStart){
                if(candidateCalender[startIndexOfCandidate+subStart] && recruiterCalender[subStart]) continue;
                else{
                    isAvailable = false;
                    break;
                }
            }
            if(isAvailable) {++noOfFreeSlots.first; noOfFreeSlots.second.push_back(start);}
        }
    }
    return noOfFreeSlots;
}

int main(){
    string timeZoneCandidate;
    string timeZoneRecruiter;
    candidateCalender[48] = true;
    recruiterCalender[1] = true;
    int noOfSlotsrequired = 0;
    cout << "Calenders of Candidate and Panelist are hardcoded for now :\n";
    cout << "Enter time zone of candidate in this format +-hh:mm : ";
    cin >> timeZoneCandidate;
    cout << "Enter time zone of recruiter in this format +-hh:mm : ";
    cin >> timeZoneRecruiter;
    cout << "Enter no of slots in multiples of half hour required: ";
    cin >> noOfSlotsrequired;
    string dayStartTime = "00:00";
    int index =  findDayStartIndex(dayStartTime,timeZoneRecruiter,timeZoneCandidate);
    pair<int,vector<int>> slotCount = findCommonSlots(noOfSlotsrequired,index);
    cout << "There are " << slotCount.first << " slot(s) available.\n";
    if(slotCount.first)
    cout << "For Recruiter :\n";
    for(int i = 0 ; i < slotCount.first ; ++i){
        cout << i+1 << ". " << findTimeFromIndex(slotCount.second[i]).second << " GMT " << timeZoneRecruiter << " " << dateArr[1] << "\n";
    }
    if(slotCount.first)
    cout << "For Candidate :\n";
    for(int i = 0 ; i < slotCount.first ; ++i){
        pair<int,string> finalizedTime = findTimeFromIndex(slotCount.second[i]+index);
        cout << i+1 << ". " << finalizedTime.second << " GMT " << timeZoneCandidate << " " << dateArr[finalizedTime.first] << "\n";
    }
    return 0;
}