#include "queen_attack.h"

attack_status_t can_attack(position_t queen1,position_t queen2){
    if (queen1.row > 7  || queen1.column > 7 || queen2.row > 7 || queen2.column > 7 ) {
        return INVALID_POSITION;
    }

    if (queen1.row == queen2.row && queen1.column == queen2.column){
        return INVALID_POSITION;
    }
    if ((queen1.row == queen2.row) || (queen1.column == queen2.column)){
        return CAN_ATTACK;
    }
    int up_row = queen1.row;
    int up_column = queen1.column;
    while (up_row < 8 && up_column < 8){
        if (up_row == queen2.row && up_column == queen2.column){
            return CAN_ATTACK;
        }
        up_row++;
        up_column++;
    }

    int down_row = queen1.row;
    int down_column = queen1.column;

    while (down_row >= 0 && down_column >=0){
        if(down_row == queen2.row && down_column ==queen2.column){
            return CAN_ATTACK;
        }
        down_row--;
        down_column--;
    }    
    int rev_up_row = queen1.row;
    int rev_up_column = queen1.column;
    while (rev_up_row < 8 && rev_up_column < 8){
        if (rev_up_row == queen2.row && rev_up_column == queen2.column){
            return CAN_ATTACK;
        }
        rev_up_row--;
        rev_up_column++;
    }

    int rev_down_row = queen1.row;
    int rev_down_column = queen1.column;

    while (rev_down_row >= 0 && rev_down_column >=0){
        if(rev_down_row == queen2.row && rev_down_column ==queen2.column){
            return CAN_ATTACK;
        }
        rev_down_row++;
        rev_down_column--;
    }

    return CAN_NOT_ATTACK;
    
}
