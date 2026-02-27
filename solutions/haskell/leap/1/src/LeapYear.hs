module LeapYear (isLeapYear) where

isLeapYear :: Integer -> Bool
isLeapYear year = do
  if year `rem` 4 == 0
    then if year `rem` 100 == 0 
      then if year `rem` 400 /= 0
          then False 
      else
        True
    else
      True
  else
    False  
