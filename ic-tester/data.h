#define val16(v)	((v) & 0xff), ((v) >> 8)

#define _(v)		(1 << (v-1))

const uint8_t LOGIC_DATA[] PROGMEM = {
	'�', '�', '3', ',', '�', '�', '2', '3', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(2)|_(5)|_(12)|_(15)|_(7)), val16(_(1)|_(4)|_(11)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(4)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(12)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_END,

	'�', '�', '1', '1', ',', '�', '�', '1', '3', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(2)|_(5)|_(12)|_(15)|_(7)), val16(_(1)|_(4)|_(11)|_(14)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(4)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(12)|_(15)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_END,

	'�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(7)), val16(_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(0), val16(_(1)|_(4)|_(12)|_(15)),
	CMD_SET_16, val16(_(3)|_(5)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(10)|_(13)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(0), val16(_(1)|_(4)|_(12)|_(15)),
	CMD_SET_16, val16(_(2)|_(5)|_(10)|_(13)|_(7)), val16(_(3)|_(5)|_(11)|_(14)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(0), val16(_(1)|_(4)|_(12)|_(15)),
	CMD_END,

	'�', '�', '1', ',', '�', '�', '6', ',', '�', '�', '1', '6', ',', '�', '�', '2', '2', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(_(6)|_(10)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(1)|_(11)|_(7)), val16(_(2)|_(4)|_(5)|_(12)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(2)|_(12)|_(7)), val16(_(1)|_(4)|_(5)|_(11)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(4)|_(14)|_(7)), val16(_(1)|_(2)|_(5)|_(11)|_(12)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(5)|_(15)|_(7)), val16(_(1)|_(2)|_(4)|_(11)|_(12)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_END,

	'�', '�', '7', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(_(6)|_(10)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(1)|_(11)|_(7)), val16(_(2)|_(4)|_(5)|_(12)|_(14)|_(15)|_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(2)|_(12)|_(7)), val16(_(1)|_(4)|_(5)|_(11)|_(14)|_(15)|_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(4)|_(14)|_(7)), val16(_(1)|_(2)|_(5)|_(11)|_(12)|_(15)|_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(5)|_(15)|_(7)), val16(_(1)|_(2)|_(4)|_(11)|_(12)|_(14)|_(16)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(6)|_(10)),
	CMD_END,

	'�', '�', '4', ',', '�', '�', '2', '4', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(16)),
	CMD_TEST_16, val16(_(14)|_(6)|_(10)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(1)|_(3)|_(11)|_(7)), val16(_(2)|_(15)|_(4)|_(5)|_(12)|_(13)|_(16)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(2)|_(4)|_(12)|_(7)), val16(_(1)|_(15)|_(3)|_(5)|_(11)|_(13)|_(16)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(15)|_(5)|_(13)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(11)|_(12)|_(16)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_END,

	'�', '�', '1', '0', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(16)|_(14)|_(6)|_(10)),
	CMD_TEST_16, val16(_(14)|_(6)|_(10)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(15)|_(3)|_(4)|_(5)|_(11)|_(12)|_(13)|_(7)), val16(_(16)|_(14)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(1)|_(3)|_(11)|_(7)), val16(_(2)|_(15)|_(4)|_(5)|_(12)|_(13)|_(16)|_(14)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(2)|_(4)|_(12)|_(7)), val16(_(1)|_(15)|_(3)|_(5)|_(11)|_(13)|_(16)|_(14)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_SET_16, val16(_(15)|_(5)|_(13)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(11)|_(12)|_(16)|_(14)|_(6)|_(10)),
	CMD_TEST_16, val16(0), val16(_(14)|_(6)|_(10)),
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(13)|_(14)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(_(10)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(13)|_(14)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(1)|_(7)), val16(_(2)|_(3)|_(4)|_(5)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(2)|_(7)), val16(_(1)|_(3)|_(4)|_(5)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(3)|_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(4)|_(7)), val16(_(1)|_(2)|_(3)|_(5)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(5)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(6)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(6)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(13)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_SET_16, val16(_(14)|_(7)), val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(13)|_(16)),
	CMD_TEST_16, val16(0), val16(_(10)),
	CMD_END,

	'�', '�', '1', '8', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(14)|_(15)|_(16)|_(4)),

	CMD_SET_16, val16(_(4)), val16(_(1)|_(2)|_(14)|_(15)|_(16)|_(3)|_(13)),
	CMD_TEST_16, val16(_(3)|_(13)), val16(0),
	CMD_SET_16, val16(_(1)|_(2)|_(14)|_(15)|_(4)), val16(_(16)|_(3)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(13)),
	CMD_SET_16, val16(_(2)|_(15)|_(4)), val16(_(1)|_(14)|_(16)|_(3)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(13)),
	CMD_SET_16, val16(_(1)|_(14)|_(4)), val16(_(2)|_(15)|_(16)|_(3)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(13)),
	CMD_END,

	'�', '�', '1', ',', '�', '�', '5', ',', '�', '�', '6', ',', '�', '�', '1', '0', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(0), val16(_(1)|_(4)|_(12)|_(15)),
	CMD_SET_16, val16(_(3)|_(6)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(10)|_(13)|_(16)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(2)|_(5)|_(10)|_(13)|_(7)), val16(_(3)|_(6)|_(11)|_(14)|_(16)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_END,

	'�', '�', '1', '1', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(2)|_(3)|_(5)|_(6)|_(10)|_(11)|_(13)|_(14)|_(7)), val16(_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(0), val16(_(1)|_(4)|_(12)|_(15)),
	CMD_SET_16, val16(_(3)|_(6)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(10)|_(13)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(2)|_(5)|_(10)|_(13)|_(7)), val16(_(3)|_(6)|_(11)|_(14)|_(16)|_(1)|_(4)|_(12)|_(15)),
	CMD_TEST_16, val16(_(1)|_(4)|_(12)|_(15)), val16(0),
	CMD_END,

	'�', '�', '1', ',', '�', '�', '4', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(10)|_(12)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(10)|_(12)|_(14)|_(15)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(2)|_(5)|_(12)|_(15)|_(7)), val16(_(1)|_(4)|_(11)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(4)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(12)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_END,

	'�', '�', '1', ',', '�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(2)|_(5)|_(12)|_(15)|_(7)), val16(_(1)|_(4)|_(11)|_(14)|_(16)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(1)|_(4)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(12)|_(15)|_(16)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(7)), val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(0), val16(_(3)|_(6)|_(10)|_(13)),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(11)|_(12)|_(14)|_(15)|_(7)), val16(_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(2)|_(5)|_(12)|_(15)|_(7)), val16(_(1)|_(4)|_(11)|_(14)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_SET_16, val16(_(1)|_(4)|_(11)|_(14)|_(7)), val16(_(2)|_(5)|_(12)|_(15)|_(16)|_(3)|_(6)|_(10)|_(13)),
	CMD_TEST_16, val16(_(3)|_(6)|_(10)|_(13)), val16(0),
	CMD_END,

	'1', '5', '5', '�', '�', '1', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(3)|_(6)|_(7)|_(4)|_(5)|_(12)),

	CMD_SET_16, val16(_(3)|_(6)|_(7)|_(4)|_(12)), val16(_(5)),
	CMD_TEST_16, val16(_(16)), val16(_(15)|_(8)|_(9)|_(13)|_(14)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(6)|_(7)|_(4)|_(12)), val16(_(3)|_(5)),
	CMD_TEST_16, val16(_(15)), val16(_(16)|_(8)|_(9)|_(13)|_(14)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(3)|_(7)|_(4)|_(12)), val16(_(6)|_(5)),
	CMD_TEST_16, val16(_(8)), val16(_(16)|_(15)|_(9)|_(13)|_(14)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(7)|_(4)|_(12)), val16(_(3)|_(6)|_(5)),
	CMD_TEST_16, val16(_(9)), val16(_(16)|_(15)|_(8)|_(13)|_(14)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(3)|_(6)|_(4)|_(12)), val16(_(7)|_(5)),
	CMD_TEST_16, val16(_(13)), val16(_(16)|_(15)|_(8)|_(9)|_(14)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(6)|_(4)|_(12)), val16(_(3)|_(7)|_(5)),
	CMD_TEST_16, val16(_(14)), val16(_(16)|_(15)|_(8)|_(9)|_(13)|_(11)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(3)|_(4)|_(12)), val16(_(6)|_(7)|_(5)),
	CMD_TEST_16, val16(_(11)), val16(_(16)|_(15)|_(8)|_(9)|_(13)|_(14)|_(10)|_(1)|_(2)),
	CMD_SET_16, val16(_(4)|_(12)), val16(_(3)|_(6)|_(7)|_(5)),
	CMD_TEST_16, val16(_(10)), val16(_(16)|_(15)|_(8)|_(9)|_(13)|_(14)|_(11)|_(1)|_(2)),
	CMD_SET_16, val16(_(3)|_(6)|_(7)|_(12)), val16(_(4)|_(5)),
	CMD_TEST_16, val16(_(1)), val16(_(16)|_(15)|_(8)|_(9)|_(13)|_(14)|_(11)|_(10)|_(2)),
	CMD_SET_16, val16(_(6)|_(7)|_(12)), val16(_(3)|_(4)|_(5)),
	CMD_TEST_16, val16(_(2)), val16(_(16)|_(15)|_(8)|_(9)|_(13)|_(14)|_(11)|_(10)|_(1)),
	CMD_END,

	'�', '�', '4', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(13)|_(3)|_(15)|_(14)|_(16)|_(8)),

	CMD_SET_16, val16(_(8)), val16(_(1)|_(2)|_(13)|_(3)|_(15)|_(14)|_(16)),
	CMD_TEST_16, val16(0), val16(_(7)|_(6)|_(5)|_(4)|_(9)|_(10)|_(11)|_(12)),
	CMD_SET_16, val16(_(2)|_(13)|_(3)|_(15)|_(14)|_(8)), val16(_(1)|_(16)),
	CMD_TEST_16, val16(_(7)|_(9)), val16(_(6)|_(5)|_(4)|_(10)|_(11)|_(12)),
	CMD_SET_16, val16(_(2)|_(3)|_(15)|_(14)|_(8)), val16(_(1)|_(13)|_(16)),
	CMD_TEST_16, val16(_(6)|_(10)), val16(_(7)|_(5)|_(4)|_(9)|_(11)|_(12)),
	CMD_SET_16, val16(_(2)|_(13)|_(15)|_(14)|_(8)), val16(_(1)|_(3)|_(16)),
	CMD_TEST_16, val16(_(5)|_(11)), val16(_(7)|_(6)|_(4)|_(9)|_(10)|_(12)),
	CMD_SET_16, val16(_(2)|_(15)|_(14)|_(8)), val16(_(1)|_(13)|_(3)|_(16)),
	CMD_TEST_16, val16(_(4)|_(12)), val16(_(7)|_(6)|_(5)|_(9)|_(10)|_(11)),
	CMD_SET_16, val16(_(1)|_(13)|_(3)|_(15)|_(14)|_(8)), val16(_(2)|_(16)),
	CMD_TEST_16, val16(_(9)), val16(_(7)|_(6)|_(5)|_(4)|_(10)|_(11)|_(12)),
	CMD_SET_16, val16(_(13)|_(3)|_(15)|_(14)|_(8)), val16(_(1)|_(2)|_(16)),
	CMD_TEST_16, val16(_(9)), val16(_(7)|_(6)|_(5)|_(4)|_(10)|_(11)|_(12)),
	CMD_SET_16, val16(_(2)|_(13)|_(3)|_(15)|_(8)), val16(_(1)|_(14)|_(16)),
	CMD_TEST_16, val16(_(7)), val16(_(6)|_(5)|_(4)|_(9)|_(10)|_(11)|_(12)),
	CMD_SET_16, val16(_(2)|_(13)|_(3)|_(14)|_(8)), val16(_(1)|_(15)|_(16)),
	CMD_TEST_16, val16(_(7)), val16(_(6)|_(5)|_(4)|_(9)|_(10)|_(11)|_(12)),
	CMD_END,

	'�', '�', '7', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(6)|_(16)|_(8)),

	CMD_SET_16, val16(_(1)|_(2)|_(3)|_(4)|_(5)|_(8)), val16(_(6)|_(16)),
	CMD_TEST_16, val16(_(15)), val16(_(14)|_(13)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(2)|_(3)|_(4)|_(5)|_(8)), val16(_(1)|_(6)|_(16)),
	CMD_TEST_16, val16(_(14)), val16(_(15)|_(13)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(1)|_(3)|_(4)|_(5)|_(8)), val16(_(2)|_(6)|_(16)),
	CMD_TEST_16, val16(_(13)), val16(_(15)|_(14)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(3)|_(4)|_(5)|_(8)), val16(_(1)|_(2)|_(6)|_(16)),
	CMD_TEST_16, val16(_(12)), val16(_(15)|_(14)|_(13)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(1)|_(2)|_(4)|_(5)|_(8)), val16(_(3)|_(6)|_(16)),
	CMD_TEST_16, val16(_(11)), val16(_(15)|_(14)|_(13)|_(12)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(2)|_(4)|_(5)|_(8)), val16(_(1)|_(3)|_(6)|_(16)),
	CMD_TEST_16, val16(_(10)), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(9)|_(7)),
	CMD_SET_16, val16(_(1)|_(4)|_(5)|_(8)), val16(_(2)|_(3)|_(6)|_(16)),
	CMD_TEST_16, val16(_(9)), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(10)|_(7)),
	CMD_SET_16, val16(_(4)|_(5)|_(8)), val16(_(1)|_(2)|_(3)|_(6)|_(16)),
	CMD_TEST_16, val16(_(7)), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(10)|_(9)),
	CMD_SET_16, val16(_(3)|_(5)|_(8)), val16(_(1)|_(2)|_(4)|_(6)|_(16)),
	CMD_TEST_16, val16(0), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(3)|_(4)|_(8)), val16(_(1)|_(2)|_(5)|_(6)|_(16)),
	CMD_TEST_16, val16(0), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_SET_16, val16(_(3)|_(4)|_(5)|_(6)|_(8)), val16(_(1)|_(2)|_(16)),
	CMD_TEST_16, val16(0), val16(_(15)|_(14)|_(13)|_(12)|_(11)|_(10)|_(9)|_(7)),
	CMD_END,

	'�', '�', '2', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(4)|_(2)|_(3)|_(1)|_(12)|_(14)|_(13)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(4)|_(2)|_(3)|_(12)|_(14)|_(13)|_(7)), val16(_(1)|_(15)|_(16)),
	CMD_TEST_16, val16(_(6)|_(10)), val16(_(5)|_(11)),
	CMD_SET_16, val16(_(4)|_(12)|_(7)), val16(_(2)|_(3)|_(1)|_(14)|_(13)|_(15)|_(16)),
	CMD_TEST_16, val16(_(6)|_(10)), val16(_(5)|_(11)),
	CMD_SET_16, val16(_(2)|_(3)|_(1)|_(14)|_(13)|_(15)|_(7)), val16(_(4)|_(12)|_(16)),
	CMD_TEST_16, val16(_(5)|_(11)), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(1)|_(15)|_(7)), val16(_(4)|_(2)|_(3)|_(12)|_(14)|_(13)|_(16)),
	CMD_TEST_16, val16(_(5)|_(11)), val16(_(6)|_(10)),
	CMD_SET_16, val16(_(3)|_(13)|_(7)), val16(_(4)|_(2)|_(1)|_(12)|_(14)|_(15)|_(16)),
	CMD_PULSE_PLUS, 3,
	CMD_TEST_16, val16(_(6)|_(11)), val16(_(5)|_(10)),
	CMD_PULSE_PLUS, 25,
	CMD_TEST_16, val16(_(6)|_(10)), val16(_(5)|_(11)),
	CMD_SET_16, val16(_(2)|_(14)|_(7)), val16(_(16)),
	CMD_PULSE_PLUS, 3,
	CMD_TEST_16, val16(_(5)|_(10)), val16(_(6)|_(11)),
	CMD_PULSE_PLUS, 25,
	CMD_TEST_16, val16(_(5)|_(11)), val16(_(6)|_(10)),
	CMD_END,

	'�', '�', '9', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(1)|_(3)|_(5)|_(11)|_(13)|_(15)|_(16)|_(7)),

	CMD_SET_16, val16(_(1)|_(3)|_(5)|_(11)|_(13)|_(15)|_(7)), val16(_(16)|_(2)|_(4)|_(6)|_(10)|_(12)|_(14)),
	CMD_TEST_16, val16(_(2)|_(4)|_(6)|_(10)|_(12)|_(14)), val16(0),
	CMD_SET_16, val16(_(7)), val16(_(1)|_(3)|_(5)|_(11)|_(13)|_(15)|_(16)|_(2)|_(4)|_(6)|_(10)|_(12)|_(14)),
	CMD_TEST_16, val16(0), val16(_(2)|_(4)|_(6)|_(10)|_(12)|_(14)),
	CMD_SET_16, val16(_(1)|_(5)|_(13)|_(7)), val16(_(3)|_(11)|_(15)|_(16)|_(2)|_(4)|_(6)|_(10)|_(12)|_(14)),
	CMD_TEST_16, val16(_(2)|_(6)|_(12)), val16(_(4)|_(10)|_(14)),
	CMD_SET_16, val16(_(3)|_(11)|_(15)|_(7)), val16(_(1)|_(5)|_(13)|_(16)|_(2)|_(4)|_(6)|_(10)|_(12)|_(14)),
	CMD_TEST_16, val16(_(4)|_(10)|_(14)), val16(_(2)|_(6)|_(12)),
	CMD_END,

	'�', '�', '8', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(4)|_(5)|_(12)|_(13)|_(9)|_(1)|_(16)|_(8)),

	CMD_SET_16, val16(_(4)|_(5)|_(12)|_(13)|_(9)|_(1)|_(8)), val16(_(16)),
	CMD_TEST_16, val16(_(2)|_(7)|_(10)|_(15)), val16(_(3)|_(6)|_(11)|_(14)),
	CMD_SET_16, val16(_(8)), val16(_(1)|_(16)),
	CMD_TEST_16, val16(_(2)|_(7)|_(10)|_(15)), val16(_(3)|_(6)|_(11)|_(14)),
	CMD_SET_16, val16(_(9)|_(8)), val16(_(4)|_(5)|_(12)|_(13)|_(1)|_(16)),
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, val16(_(3)|_(6)|_(11)|_(14)), val16(_(2)|_(7)|_(10)|_(15)),
	CMD_SET_16, val16(_(4)|_(5)|_(12)|_(13)|_(9)|_(8)), val16(_(1)|_(16)),
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, val16(_(2)|_(7)|_(10)|_(15)), val16(_(3)|_(6)|_(11)|_(14)),
	CMD_END,

	'�', '�', '9', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(3)|_(4)|_(6)|_(11)|_(13)|_(14)|_(9)|_(1)|_(16)|_(8)),

	CMD_SET_16, val16(_(9)|_(8)), val16(_(3)|_(4)|_(6)|_(11)|_(13)|_(14)|_(1)|_(16)),
	CMD_TEST_16, val16(_(2)|_(5)|_(7)|_(10)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(3)|_(4)|_(6)|_(11)|_(13)|_(14)|_(9)|_(8)), val16(_(1)|_(16)),
	CMD_TEST_16, val16(_(2)|_(5)|_(7)|_(10)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(8)), val16(_(1)|_(16)),
	CMD_TEST_16, val16(_(2)|_(5)|_(7)|_(10)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(9)|_(8)), val16(_(3)|_(4)|_(6)|_(11)|_(13)|_(14)|_(1)|_(16)),
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, val16(0), val16(_(2)|_(5)|_(7)|_(10)|_(12)|_(15)),
	CMD_SET_16, val16(_(3)|_(4)|_(6)|_(11)|_(13)|_(14)|_(9)|_(8)), val16(_(1)|_(16)),
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, val16(_(2)|_(5)|_(7)|_(10)|_(12)|_(15)), val16(0),
	CMD_SET_16, val16(_(3)|_(6)|_(13)|_(9)|_(8)), val16(_(4)|_(11)|_(14)|_(1)|_(16)),
	CMD_PULSE_PLUS, 21,
	CMD_TEST_16, val16(_(2)|_(7)|_(12)), val16(_(5)|_(10)|_(15)),
	CMD_END,

	'1', '5', '5', '�', '�', '1', '1', 0,
	CMD_RESET,
	CMD_INIT_16, val16(_(2)|_(4)|_(6)|_(10)|_(1)|_(12)|_(14)|_(15)|_(16)|_(8)),

	CMD_SET_16, val16(_(2)|_(4)|_(6)|_(10)|_(1)|_(15)|_(8)), val16(_(12)|_(14)|_(16)),
	CMD_TEST_16, val16(_(3)|_(5)|_(7)|_(9)), val16(_(11)|_(13)),
	CMD_SET_16, val16(_(1)|_(12)|_(14)|_(15)|_(8)), val16(_(2)|_(4)|_(6)|_(10)|_(16)),
	CMD_TEST_16, val16(_(11)|_(13)), val16(_(3)|_(5)|_(7)|_(9)),
	CMD_SET_16, val16(_(4)|_(10)|_(1)|_(14)|_(15)|_(8)), val16(_(2)|_(6)|_(12)|_(16)),
	CMD_TEST_16, val16(_(5)|_(9)|_(13)), val16(_(3)|_(7)|_(11)),
	CMD_SET_16, val16(_(2)|_(6)|_(1)|_(12)|_(15)|_(8)), val16(_(4)|_(10)|_(14)|_(16)),
	CMD_TEST_16, val16(_(3)|_(7)|_(11)), val16(_(5)|_(9)|_(13)),
	CMD_END,

	'�', '�', '2', '3', 0,
	CMD_RESET,
	CMD_INIT_28, 0b1011,0b110010,0b11001101,

	CMD_SET_28, 0b11,0b110010,0b11001101, 0b1000,0b0,0b0,
	CMD_PULSE_PLUS, 19,
	CMD_TEST_28, 0b100,0b11001001,0b110010, 0b0,0b0,0b0,
	CMD_SET_28, 0b0,0b10,0b1, 0b1011,0b110000,0b11001100,
	CMD_PULSE_PLUS, 19,
	CMD_TEST_28, 0b0,0b0,0b0, 0b100,0b11001001,0b110010,
	CMD_SET_28, 0b10,0b100010,0b10001001, 0b1001,0b10000,0b1000100,
	CMD_PULSE_PLUS, 19,
	CMD_TEST_28, 0b100,0b1000001,0b10000, 0b0,0b10001000,0b100010,
	CMD_SET_28, 0b1,0b10010,0b1000101, 0b1010,0b100000,0b10001000,
	CMD_PULSE_PLUS, 19,
	CMD_TEST_28, 0b0,0b10001000,0b100010, 0b100,0b1000001,0b10000,
	CMD_END,

	CMD_END
};