#ifndef Ocsveffector_H
#define Ocsveffector_H

    enum {
        Ocsveffector = 1030730,
        CSVEFFECTOR_FILENAME = 2000,
        CSVEFFECTOR_FORCERELOAD = 2001,
        CSVEFFECTOR_STATS = 2002,
        CSVEFFECTOR_HASHEADER = 2003,
        CSVEFFECTOR_DELIMITER = 2004,

        CSVEFFECTOR_OFFSET = 2005,
        CSVEFFECTOR_REPEAT = 2006,
        CSVEFFECTOR_ANGLEMODE = 2007,
            CSVEFFECTOR_ANGLEMODE_DEGREES = 0,
            CSVEFFECTOR_ANGLEMODE_RADIANS = 1,

        CSVEFFECTOR_ASSIGNMENT = 3000,
            CSVEFFECTOR_ASSIGNMENT_XPOS = 2020,
            CSVEFFECTOR_ASSIGNMENT_YPOS = 2021,
            CSVEFFECTOR_ASSIGNMENT_ZPOS = 2022,

            CSVEFFECTOR_ASSIGNMENT_XSCALE = 2030,
            CSVEFFECTOR_ASSIGNMENT_YSCALE = 2031,
            CSVEFFECTOR_ASSIGNMENT_ZSCALE = 2032,

            CSVEFFECTOR_ASSIGNMENT_XROT = 2040,
            CSVEFFECTOR_ASSIGNMENT_YROT = 2041,
            CSVEFFECTOR_ASSIGNMENT_ZROT = 2042,

        CSVEFFECTOR_MULTIPLIER = 3001,
            CSVEFFECTOR_MULTIPLIER_POS = 2050,
            CSVEFFECTOR_MULTIPLIER_SCALE = 2051,
            CSVEFFECTOR_MULTIPLIER_ROT = 2052,

        CSVEFFECTOR_DELIMITER_COMMA = 44,
        CSVEFFECTOR_DELIMITER_SEMICOLON = 59,
        CSVEFFECTOR_DELIMITER_TAB = 9,
    };

#endif /* Ocsveffector */
