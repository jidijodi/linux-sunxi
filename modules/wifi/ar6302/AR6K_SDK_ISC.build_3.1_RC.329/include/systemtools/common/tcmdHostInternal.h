typedef enum {
	ATH_RATE_1M,
	ATH_RATE_2M,
	ATH_RATE_5_5M,
	ATH_RATE_11M,
	ATH_RATE_6M,
	ATH_RATE_9M,
	ATH_RATE_12M,
	ATH_RATE_18M,
	ATH_RATE_24M,
	ATH_RATE_36M,
	ATH_RATE_48M,
	ATH_RATE_54M,
	ATH_RATE_6_5M,
	ATH_RATE_13M,
	ATH_RATE_19_5M,
	ATH_RATE_26M,
	ATH_RATE_39M,
	ATH_RATE_52M,
	ATH_RATE_58_5M,
	ATH_RATE_65M,
    ATH_RATE_HT40_13_5M,
    ATH_RATE_HT40_27M,
    ATH_RATE_HT40_40_5M,
    ATH_RATE_HT40_54M,
    ATH_RATE_HT40_81M,
    ATH_RATE_HT40_108M,
    ATH_RATE_HT40_121_5M,
    ATH_RATE_HT40_135M,

    MASK_RATE_MAX,
} _AthDataRate;

typedef enum {
    ATH_NOHT,
    ATH_HT20,
    ATH_HT40Minus,
    ATH_HT40Plus,
} _AthHtMode;
