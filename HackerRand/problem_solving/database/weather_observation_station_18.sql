select round(abs(min(LAT_N) - max(LAT_N)) + abs(max(LONG_W) - min(LONG_W)),4) from STATION;
