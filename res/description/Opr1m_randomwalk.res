CONTAINER Opr1m_randomwalk {
    NAME Opr1m_randomwalk;
    INCLUDE Obase;

    GROUP ID_OBJECTPROPERTIES {

        LONG RANDOMWALK_START { MIN 0; }
        LONG RANDOMWALK_STOP { MIN 0; }
        LONG RANDOMWALK_DIRECTIONS { MIN 2; }

        BOOL RANDOMWALK_3D { DEFAULT 0; }
        BOOL RANDOMWALK_ZEROANGLE { DEFAULT 0; }
        BOOL RANDOMWALK_KEEPORIGIN { DEFAULT 0; }

        LONG RANDOMWALK_SEED { }

        REAL RANDOMWALK_STEP_MIN { MIN 0; MINSLIDER 0; MAXSLIDER 100; UNIT METER; CUSTOMGUI REALSLIDER; }
        REAL RANDOMWALK_STEP_MAX { MIN 0; MINSLIDER 0; MAXSLIDER 100; UNIT METER; CUSTOMGUI REALSLIDER; }

        SEPARATOR { LINE; }
    }

    INCLUDE Ospline;
}
