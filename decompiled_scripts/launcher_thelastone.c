#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	BOOL bLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	Hash hLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void main() // Position - 0x0
{
	int num;
	Vector3 vector;
	var unk63;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_82 = 1;
	iLocal_83 = 65;
	iLocal_84 = 49;
	iLocal_85 = 64;
	iLocal_89 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_90 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	hLocal_92 = joaat("IG_Hunter");
	iLocal_93 = -1;
	MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
	func_276();
	num.f_17 = 2;
	num.f_28 = 6;
	num.f_35 = 5;
	num.f_41 = 6;
	vector = { 0f, 0f, 0f };
	func_275(&num);
	vector = { uScriptParam_0.f_1[0 /*3*/] };
	unk63 = 1;
	unk63[0] = 57;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_274("Force cleanup [TERMINATING]");
	
		if (num != -1)
		{
			if (Global_112735[num /*10*/].f_9 != -1)
			{
				func_274("Relinquishing candidate id...");
				func_273(&(Global_112735[num /*10*/].f_9));
			}
		}
	
		func_260(&num, true);
	}

	if (!func_257(&unk63, &num, vector, 1f))
	{
		func_256();
		func_274("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (!func_248(num))
	{
		func_256();
		func_274("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_247(num))
	{
		func_256();
		func_274("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}

	while (!func_242(&num))
	{
		SYSTEM::WAIT(0);
	
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_274("Player out of range [TERMINATING]");
			func_260(&num, true);
		}
	}

	MISC::CLEAR_AREA(vector, num.f_15, true, false, false, false);

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (!IS_RC_FINE_AND_IN_RANGE(&num, 1))
			func_260(&num, true);
	
		func_203(num);
		func_196(&iLocal_93, &uLocal_94, &(num.f_9), vector, -1295.84f, 4641.98f, 105.33f, -1301.43f, 4641.21f, 105.62f);
		func_189(&num, vector, "SAS1AUD", "SAS1_AMB", 4, "HUNTER", 10000);
	
		if (func_174(&num, 0))
		{
			if (!func_2(&num))
				func_260(&num, true);
		
			if (func_1(&num))
				func_260(&num, false);
		}
	}

	return;
}

BOOL func_1(var uParam0) // Position - 0x22E
{
	while (!Global_112735[*uParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}

	return true;
}

BOOL func_2(Any* panParam0) // Position - 0x24C
{
	const char* str;
	var unk32;

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		while (!func_164(*panParam0))
		{
			if (func_163(*panParam0))
				func_152();
		
			if (!IS_RC_FINE_AND_IN_RANGE(panParam0, *panParam0 != 2))
			{
				func_274("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return false;
			}
		
			SYSTEM::WAIT(0);
		}
	}

	if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		func_149();

	if (!func_118(panParam0))
	{
		func_274("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return false;
	}

	func_115(*panParam0, &str);
	TEXT_LABEL_COPY(&unk32, { func_114(*panParam0) }, 4);
	func_112(&unk32, str.f_3, 0);
	func_109(*panParam0);

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
		if (panParam0->f_16 == 2)
			func_22(&(panParam0->f_1), 0);
		else
			func_22(&(panParam0->f_1), 1);

	func_3(*panParam0, str);
	return true;
}

void func_3(int iParam0, const char* sParam1) // Position - 0x30D
{
	func_21(sParam1);
	MISC::CLEAR_BIT(&Global_113648.f_18576[iParam0 /*6*/], 5);

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_63363 = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
	
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
	
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", SPECIAL_ABILITY);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}

	while (!IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 5))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
			MISC::SET_BIT(&Global_113648.f_18576[iParam0 /*6*/], 5);
	}

	func_4(iParam0);
	return;
}

void func_4(int iParam0) // Position - 0x3C9
{
	int num;
	int num2;

	if (Global_63360 == 1)
	{
		func_18();
		Global_63360 = 0;
	
		if (Global_63355)
			return;
	}

	if (Global_3)
	{
		Global_63363 = 1;
		func_10();
		return;
	}

	TEXT_LABEL_COPY(&Global_63377, { func_9(iParam0) }, 4);
	Global_63365 = 0;
	Global_63364 = 0;

	switch (iParam0)
	{
		case 1:
		case 9:
			Global_63352 = true;
			Global_63355 = true;
			Global_63358 = 1;
			break;
	
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_63363 = 1;
			Global_63364 = 1;
			func_10();
			func_19();
			return;
	}

	num = Global_75607;
	Global_75607 = 1;
	num2 = Global_75608;
	Global_75608 = iParam0;

	if (!Global_63352)
	{
		if (Global_75608 != num2 || Global_75457 == 0 || num != Global_75607)
		{
			Global_32417 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_63355 = true;
		}
	}

	Global_63390 = MISC::GET_GAME_TIMER();
	func_5();
	Global_63362 = false;
	return;
}

void func_5() // Position - 0x523
{
	int i;

	if (!Global_63359)
		return;

	if (Global_75457 == 0)
		return;

	i = 0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		switch (Global_63587[Global_75458[i /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_75458[i /*9*/].f_3 = 1;
				break;
		
			case 4:
				if (Global_63370)
					Global_75458[i /*9*/].f_3 = 1;
				break;
		
			case 6:
				if (Global_63587[Global_75458[i /*9*/] /*13*/].f_3)
					if (Global_75458[i /*9*/].f_1 != 0)
						Global_75458[i /*9*/].f_3 = 1;
				break;
		}
	}

	Global_63359 = false;
	return;
}

void func_6(int iParam0) // Position - 0x5D6
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
	
		case 3:
			func_7(743);
			func_7(744);
			return;
	
		case 5:
			func_7(745);
			func_7(746);
			return;
	
		case 6:
			func_7(747);
			func_7(748);
			return;
	
		case 8:
			func_7(749);
			return;
	
		case 12:
			func_7(750);
			return;
	
		case 14:
			func_7(751);
			func_7(752);
			return;
	
		case 16:
			func_7(753);
			func_7(754);
			return;
	
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
	
		case 18:
			func_7(758);
			func_7(759);
			return;
	
		case 19:
			func_7(760);
			func_7(761);
			return;
	
		case 20:
			func_7(762);
			return;
	
		case 21:
			func_7(763);
			return;
	
		case 22:
			func_7(764);
			func_7(765);
			return;
	
		case 23:
			func_7(766);
			return;
	
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
	
		case 26:
			func_7(770);
			func_7(771);
			return;
	
		case 28:
			func_7(772);
			func_7(773);
			return;
	
		case 29:
			func_7(774);
			func_7(775);
			return;
	
		case 30:
			func_7(776);
			func_7(777);
			return;
	
		case 32:
			func_7(778);
			func_7(779);
			return;
	
		case 33:
			func_7(780);
			func_7(&func_3);
			func_7(782);
			return;
	
		case 34:
			func_7(783);
			func_7(784);
			return;
	
		case 38:
			func_7(785);
			func_7(786);
			return;
	
		case 39:
			func_7(787);
			func_7(788);
			return;
	
		case 40:
			func_7(789);
			return;
	
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
	
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
	
		case 43:
			func_7(796);
			func_7(797);
			return;
	
		case 46:
			func_7(798);
			func_7(799);
			return;
	
		default:
		
	}

	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
	
		case 49:
			func_7(802);
			func_7(803);
			return;
	
		case 50:
			func_7(804);
			func_7(805);
			return;
	
		case 51:
			func_7(806);
			return;
	
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
	
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
	
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
	
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
	
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
	
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
	
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
	
		default:
			return;
	}

	return;
}

void func_7(int iParam0) // Position - 0x9BE
{
	Global_63355 = true;
	Global_63358 = 1;

	if (Global_75457 > 15)
		return;

	func_8(Global_75457);
	Global_75458[Global_75457 /*9*/] = iParam0;
	Global_75457 = Global_75457 + 1;

	if (Global_63587[iParam0 /*13*/] == 16)
		Global_75609 = 1;

	return;
}

void func_8(int iParam0) // Position - 0xA09
{
	Global_75458[iParam0 /*9*/].f_1 = 0;
	Global_75458[iParam0 /*9*/].f_2 = 0f;
	Global_75458[iParam0 /*9*/].f_3 = 0;
	Global_75458[iParam0 /*9*/].f_4 = 0;
	return;
}

struct<2> func_9(int iParam0) // Position - 0xA3D
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_114(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

void func_10() // Position - 0xA75
{
	if (Global_63362)
		return;

	Global_63371 = 0;
	Global_75457 = 0;
	Global_63373 = 0;
	Global_63370;
	Global_63370 = false;
	func_17(0);
	func_16();
	Global_75609 = 0;
	Global_63361 = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_63352 = false;
	Global_63382 = 0;
	Global_63390 = -1;
	return;
}

void func_11() // Position - 0xACB
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_75644[i /*2*/].f_1 = -1;
	}

	Global_75653 = 0;
	return;
}

void func_12() // Position - 0xAF8
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		Global_75610[i /*2*/] = 0;
		Global_75610[i /*2*/].f_1 = -1;
	}

	Global_75643 = 0;
	return;
}

void func_13() // Position - 0xB2F
{
	Global_63521 = 0;
	return;
}

void func_14() // Position - 0xB3B
{
	Global_63381 = 0;
	Global_63385 = func_15(joaat("SP0_SHOTS"));
	Global_63384 = func_15(joaat("SP0_HITS"));
	Global_63387 = func_15(joaat("SP1_SHOTS"));
	Global_63386 = func_15(joaat("SP1_HITS"));
	Global_63389 = func_15(joaat("SP2_SHOTS"));
	Global_63388 = func_15(joaat("SP2_HITS"));
	return;
}

var func_15(Hash hParam0) // Position - 0xB8F
{
	var outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	return outValue;
}

void func_16() // Position - 0xBA3
{
	int i;

	Global_63391 = 0;
	i = 0;

	for (i = 0; i < 64; i = i + 1)
	{
		Global_63392[i /*2*/] = 0;
	}

	return;
}

void func_17(BOOL bParam0) // Position - 0xBCD
{
	Global_78819 = bParam0;
	Global_78820 = bParam0;
	return;
}

void func_18() // Position - 0xBE1
{
	int i;

	Global_63360 = 1;
	i = 0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		Global_75458[i /*9*/].f_3 = 2;
	}

	Global_63370;
	Global_63370 = false;
	return;
}

void func_19() // Position - 0xC1A
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_63357 && !Global_63356)
			{
				Global_63357 = false;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}

	return;
}

BOOL func_20() // Position - 0xC5C
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) < 1)
		return false;

	if (!Global_63355)
		return false;

	return Global_63367;
}

void func_21(const char* sParam0) // Position - 0xC86
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_22(char* sParam0, int iParam1) // Position - 0xC99
{
	MISC::CLEAR_BIT(&(Global_100681.f_20), 17);
	func_23(sParam0, iParam1, 0);
	return;
}

void func_23(char* sParam0, int iParam1, Ped pedParam2) // Position - 0xCB6
{
	if (Global_100681 != 10 && Global_100681 != 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_104204, sParam0, 32);
		func_25(&Global_104212, sParam0, 0, "Start", iParam1, pedParam2);
		func_24();
		Global_94859 = 0;
	}

	return;
}

void func_24() // Position - 0xCFB
{
	int i;
	int j;

	Global_107196 = Global_104212;
	Global_107196.f_1 = Global_104212.f_1;
	Global_107196.f_6 = Global_104212.f_6;
	Global_107196.f_7 = Global_104212.f_7;
	Global_107196.f_8 = Global_104212.f_8;
	Global_107196.f_2 = Global_104212.f_2;
	Global_107196.f_3 = Global_104212.f_3;
	Global_107196.f_4 = Global_104212.f_4;
	Global_107196.f_5 = Global_104212.f_5;

	for (j = 0; j < 3; j = j + 1)
	{
		Global_107196.f_9[j] = Global_104212.f_9[j];
		Global_107196.f_13[j] = Global_104212.f_13[j];
		Global_107196.f_17[j] = Global_104212.f_17[j];
		Global_107196.f_21[j] = Global_104212.f_21[j];
		Global_107196.f_25[0 /*295*/][j /*98*/] = { Global_104212.f_25[0 /*295*/][j /*98*/] };
		Global_107196.f_25[1 /*295*/][j /*98*/] = { Global_104212.f_25[1 /*295*/][j /*98*/] };
	
		for (i = 0; i < 12; i = i + 1)
		{
			Global_107196.f_616[j /*65*/][i] = Global_104212.f_616[j /*65*/][i];
			Global_107196.f_616[j /*65*/].f_13[i] = Global_104212.f_616[j /*65*/].f_13[i];
			Global_107196.f_616[j /*65*/].f_26[i] = Global_104212.f_616[j /*65*/].f_26[i];
		}
	
		Global_107196.f_616[j /*65*/].f_59 = Global_104212.f_616[j /*65*/].f_59;
		Global_107196.f_616[j /*65*/].f_60 = Global_104212.f_616[j /*65*/].f_60;
		Global_107196.f_616[j /*65*/].f_61 = Global_104212.f_616[j /*65*/].f_61;
		Global_107196.f_616[j /*65*/].f_62 = Global_104212.f_616[j /*65*/].f_62;
		Global_107196.f_616[j /*65*/].f_63 = Global_104212.f_616[j /*65*/].f_63;
		Global_107196.f_616[j /*65*/].f_64 = Global_104212.f_616[j /*65*/].f_64;
	
		for (i = 0; i < 9; i = i + 1)
		{
			Global_107196.f_616[j /*65*/].f_39[i] = Global_104212.f_616[j /*65*/].f_39[i];
			Global_107196.f_616[j /*65*/].f_49[i] = Global_104212.f_616[j /*65*/].f_49[i];
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			Global_107196.f_812[j /*477*/][i /*5*/] = { Global_104212.f_812[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			Global_107196.f_812[j /*477*/].f_221[i /*5*/] = { Global_104212.f_812[j /*477*/].f_221[i /*5*/] };
		}
	
		for (i = 0; i < 4; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/][i] = Global_104212.f_2244[j /*32*/][i];
		}
	
		for (i = 0; i < 10; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/].f_5[i] = Global_104212.f_2244[j /*32*/].f_5[i];
		}
	
		for (i = 0; i < 15; i = i + 1)
		{
			Global_107196.f_2244[j /*32*/].f_16[i] = Global_104212.f_2244[j /*32*/].f_16[i];
		}
	
		Global_107196.f_2341[j] = Global_104212.f_2341[j];
	
		for (i = 0; i <= 3; i = i + 1)
		{
			Global_107196.f_2838[j /*15*/][i] = Global_104212.f_2838[j /*15*/][i];
			Global_107196.f_2838[j /*15*/].f_5[i] = Global_104212.f_2838[j /*15*/].f_5[i];
			Global_107196.f_2838[j /*15*/].f_10[i] = Global_104212.f_2838[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			Global_107196.f_2345[j /*164*/][i] = Global_104212.f_2345[j /*164*/][i];
			Global_107196.f_2345[j /*164*/].f_4[i] = Global_104212.f_2345[j /*164*/].f_4[i];
			Global_107196.f_2345[j /*164*/].f_8[i] = Global_104212.f_2345[j /*164*/].f_8[i];
			Global_107196.f_2345[j /*164*/].f_12[i] = Global_104212.f_2345[j /*164*/].f_12[i];
			Global_107196.f_2345[j /*164*/].f_16[i] = Global_104212.f_2345[j /*164*/].f_16[i];
			Global_107196.f_2345[j /*164*/].f_20[i] = Global_104212.f_2345[j /*164*/].f_20[i];
			Global_107196.f_2345[j /*164*/].f_24[i] = Global_104212.f_2345[j /*164*/].f_24[i];
			Global_107196.f_2345[j /*164*/].f_28[i] = Global_104212.f_2345[j /*164*/].f_28[i];
			Global_107196.f_2345[j /*164*/].f_32[i] = Global_104212.f_2345[j /*164*/].f_32[i];
			Global_107196.f_2345[j /*164*/].f_36[i] = Global_104212.f_2345[j /*164*/].f_36[i];
			Global_107196.f_2345[j /*164*/].f_40[i] = Global_104212.f_2345[j /*164*/].f_40[i];
			Global_107196.f_2345[j /*164*/].f_44[i] = Global_104212.f_2345[j /*164*/].f_44[i];
			Global_107196.f_2345[j /*164*/].f_48[i] = Global_104212.f_2345[j /*164*/].f_48[i];
			Global_107196.f_2345[j /*164*/].f_52[i] = Global_104212.f_2345[j /*164*/].f_52[i];
			Global_107196.f_2345[j /*164*/].f_56[i] = Global_104212.f_2345[j /*164*/].f_56[i];
			Global_107196.f_2345[j /*164*/].f_60[i] = Global_104212.f_2345[j /*164*/].f_60[i];
			Global_107196.f_2345[j /*164*/].f_64[i] = Global_104212.f_2345[j /*164*/].f_64[i];
			Global_107196.f_2345[j /*164*/].f_68[i] = Global_104212.f_2345[j /*164*/].f_68[i];
			Global_107196.f_2345[j /*164*/].f_72[i] = Global_104212.f_2345[j /*164*/].f_72[i];
			Global_107196.f_2345[j /*164*/].f_76[i] = Global_104212.f_2345[j /*164*/].f_76[i];
			Global_107196.f_2345[j /*164*/].f_80[i] = Global_104212.f_2345[j /*164*/].f_80[i];
			Global_107196.f_2345[j /*164*/].f_84[i] = Global_104212.f_2345[j /*164*/].f_84[i];
			Global_107196.f_2345[j /*164*/].f_88[i] = Global_104212.f_2345[j /*164*/].f_88[i];
			Global_107196.f_2345[j /*164*/].f_92[i] = Global_104212.f_2345[j /*164*/].f_92[i];
			Global_107196.f_2345[j /*164*/].f_96[i] = Global_104212.f_2345[j /*164*/].f_96[i];
			Global_107196.f_2345[j /*164*/].f_100[i] = Global_104212.f_2345[j /*164*/].f_100[i];
			Global_107196.f_2345[j /*164*/].f_104[i] = Global_104212.f_2345[j /*164*/].f_104[i];
			Global_107196.f_2345[j /*164*/].f_108[i] = Global_104212.f_2345[j /*164*/].f_108[i];
			Global_107196.f_2345[j /*164*/].f_112[i] = Global_104212.f_2345[j /*164*/].f_112[i];
			Global_107196.f_2345[j /*164*/].f_116[i] = Global_104212.f_2345[j /*164*/].f_116[i];
			Global_107196.f_2345[j /*164*/].f_120[i] = Global_104212.f_2345[j /*164*/].f_120[i];
			Global_107196.f_2345[j /*164*/].f_124[i] = Global_104212.f_2345[j /*164*/].f_124[i];
			Global_107196.f_2345[j /*164*/].f_128[i] = Global_104212.f_2345[j /*164*/].f_128[i];
			Global_107196.f_2345[j /*164*/].f_132[i] = Global_104212.f_2345[j /*164*/].f_132[i];
			Global_107196.f_2345[j /*164*/].f_136[i] = Global_104212.f_2345[j /*164*/].f_136[i];
			Global_107196.f_2345[j /*164*/].f_140[i] = Global_104212.f_2345[j /*164*/].f_140[i];
			Global_107196.f_2345[j /*164*/].f_144[i] = Global_104212.f_2345[j /*164*/].f_144[i];
			Global_107196.f_2345[j /*164*/].f_148[i] = Global_104212.f_2345[j /*164*/].f_148[i];
			Global_107196.f_2345[j /*164*/].f_152[i] = Global_104212.f_2345[j /*164*/].f_152[i];
			Global_107196.f_2345[j /*164*/].f_156[i] = Global_104212.f_2345[j /*164*/].f_156[i];
			Global_107196.f_2345[j /*164*/].f_160[i] = Global_104212.f_2345[j /*164*/].f_160[i];
		}
	}

	Global_107196.f_2884 = { Global_104212.f_2884 };
	Global_107196.f_2884.f_3 = Global_104212.f_2884.f_3;
	Global_107196.f_2890 = { Global_104212.f_2890 };
	Global_107196.f_2890.f_3 = { Global_104212.f_2890.f_3 };
	Global_107196.f_2890.f_6 = Global_104212.f_2890.f_6;
	Global_107196.f_2890.f_8 = Global_107196.f_2890.f_8;
	Global_107196.f_2890.f_7 = Global_104212.f_2890.f_7;
	Global_107196.f_2890.f_9 = Global_104212.f_2890.f_9;
	Global_107196.f_2890.f_11 = Global_104212.f_2890.f_11;
	Global_107196.f_2890.f_10 = Global_104212.f_2890.f_10;
	Global_107196.f_2890.f_12 = Global_104212.f_2890.f_12;
	Global_107196.f_2890.f_12.f_1 = { Global_104212.f_2890.f_12.f_1 };
	Global_107196.f_2890.f_12.f_5 = Global_104212.f_2890.f_12.f_5;
	Global_107196.f_2890.f_12.f_6 = Global_104212.f_2890.f_12.f_6;
	Global_107196.f_2890.f_12.f_7 = Global_104212.f_2890.f_12.f_7;
	Global_107196.f_2890.f_12.f_8 = Global_104212.f_2890.f_12.f_8;
	Global_107196.f_2890.f_12.f_9 = { Global_104212.f_2890.f_12.f_9 };
	Global_107196.f_2890.f_12.f_59 = { Global_104212.f_2890.f_12.f_59 };
	Global_107196.f_2890.f_12.f_62 = Global_104212.f_2890.f_12.f_62;
	Global_107196.f_2890.f_12.f_63 = Global_104212.f_2890.f_12.f_63;
	Global_107196.f_2890.f_12.f_64 = Global_104212.f_2890.f_12.f_64;
	Global_107196.f_2890.f_12.f_65 = Global_104212.f_2890.f_12.f_65;
	Global_107196.f_2890.f_12.f_77 = Global_104212.f_2890.f_12.f_77;
	Global_107196.f_2890.f_12.f_66 = Global_104212.f_2890.f_12.f_66;
	Global_107196.f_2890.f_12.f_67 = Global_104212.f_2890.f_12.f_67;
	Global_107196.f_2890.f_12.f_68 = Global_104212.f_2890.f_12.f_68;
	Global_107196.f_2890.f_12.f_69 = Global_104212.f_2890.f_12.f_69;
	Global_107196.f_2890.f_12.f_71 = Global_104212.f_2890.f_12.f_71;
	Global_107196.f_2890.f_12.f_72 = Global_104212.f_2890.f_12.f_72;
	Global_107196.f_2890.f_12.f_73 = Global_104212.f_2890.f_12.f_73;
	Global_107196.f_2890.f_12.f_74 = Global_104212.f_2890.f_12.f_74;
	Global_107196.f_2890.f_12.f_75 = Global_104212.f_2890.f_12.f_75;
	Global_107196.f_2890.f_12.f_76 = Global_104212.f_2890.f_12.f_76;
	Global_107196.f_2980 = Global_104212.f_2980;
	Global_107196.f_2980.f_1 = Global_104212.f_2980.f_1;
	Global_107196.f_2980.f_2 = Global_104212.f_2980.f_2;
	Global_107196.f_2980.f_3 = Global_104212.f_2980.f_3;
	return;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, Ped pedParam5) // Position - 0x198F
{
	int i;
	eCharacter j;

	*uParam0 = _GET_CURRENT_PLAYER_CHARACTER_0();
	uParam0->f_1 = func_97();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_66(&(uParam0->f_2884), 0);
		func_65(PLAYER::PLAYER_PED_ID());
		func_58(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
			uParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = CHAR_MICHAEL; j < CHAR_MULTIPLAYER; j = j + 1)
	{
		uParam0->f_17[j] = Global_113648.f_2365.f_539.f_294[j];
	
		if (j == _GET_CURRENT_PLAYER_CHARACTER())
		{
			func_48(PLAYER::PLAYER_PED_ID(), &uParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j /*65*/][i] = Global_100406[j /*65*/][i];
				uParam0->f_616[j /*65*/].f_13[i] = Global_100406[j /*65*/].f_13[i];
			}
		
			uParam0->f_616[j /*65*/].f_59 = Global_100406[j /*65*/].f_59;
			uParam0->f_616[j /*65*/].f_60 = Global_100406[j /*65*/].f_60;
			uParam0->f_616[j /*65*/].f_61 = Global_100406[j /*65*/].f_61;
			uParam0->f_616[j /*65*/].f_62 = Global_100406[j /*65*/].f_62;
			uParam0->f_616[j /*65*/].f_63 = Global_100406[j /*65*/].f_63;
			uParam0->f_616[j /*65*/].f_64 = Global_100406[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j /*65*/].f_39[i] = Global_100406[j /*65*/].f_39[i];
				uParam0->f_616[j /*65*/].f_49[i] = Global_100406[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case CHAR_MICHAEL:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_FRANKLIN:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case CHAR_TREVOR:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = Global_113648.f_20566.f_233[j /*69*/].f_1;
		uParam0->f_13[j] = Global_60536[j];
		uParam0->f_25[0 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][j /*98*/] };
		uParam0->f_25[1 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = Global_113648.f_2365.f_493[j /*15*/][i];
			uParam0->f_2838[j /*15*/].f_5[i] = Global_113648.f_2365.f_493[j /*15*/].f_5[i];
			uParam0->f_2838[j /*15*/].f_10[i] = Global_113648.f_2365.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = Global_113648.f_2365[j /*164*/][i];
			uParam0->f_2345[j /*164*/].f_4[i] = Global_113648.f_2365[j /*164*/].f_4[i];
			uParam0->f_2345[j /*164*/].f_8[i] = Global_113648.f_2365[j /*164*/].f_8[i];
			uParam0->f_2345[j /*164*/].f_12[i] = Global_113648.f_2365[j /*164*/].f_12[i];
			uParam0->f_2345[j /*164*/].f_16[i] = Global_113648.f_2365[j /*164*/].f_16[i];
			uParam0->f_2345[j /*164*/].f_20[i] = Global_113648.f_2365[j /*164*/].f_20[i];
			uParam0->f_2345[j /*164*/].f_24[i] = Global_113648.f_2365[j /*164*/].f_24[i];
			uParam0->f_2345[j /*164*/].f_28[i] = Global_113648.f_2365[j /*164*/].f_28[i];
			uParam0->f_2345[j /*164*/].f_32[i] = Global_113648.f_2365[j /*164*/].f_32[i];
			uParam0->f_2345[j /*164*/].f_36[i] = Global_113648.f_2365[j /*164*/].f_36[i];
			uParam0->f_2345[j /*164*/].f_40[i] = Global_113648.f_2365[j /*164*/].f_40[i];
			uParam0->f_2345[j /*164*/].f_44[i] = Global_113648.f_2365[j /*164*/].f_44[i];
			uParam0->f_2345[j /*164*/].f_48[i] = Global_113648.f_2365[j /*164*/].f_48[i];
			uParam0->f_2345[j /*164*/].f_52[i] = Global_113648.f_2365[j /*164*/].f_52[i];
			uParam0->f_2345[j /*164*/].f_56[i] = Global_113648.f_2365[j /*164*/].f_56[i];
			uParam0->f_2345[j /*164*/].f_60[i] = Global_113648.f_2365[j /*164*/].f_60[i];
			uParam0->f_2345[j /*164*/].f_64[i] = Global_113648.f_2365[j /*164*/].f_64[i];
			uParam0->f_2345[j /*164*/].f_68[i] = Global_113648.f_2365[j /*164*/].f_68[i];
			uParam0->f_2345[j /*164*/].f_72[i] = Global_113648.f_2365[j /*164*/].f_72[i];
			uParam0->f_2345[j /*164*/].f_76[i] = Global_113648.f_2365[j /*164*/].f_76[i];
			uParam0->f_2345[j /*164*/].f_80[i] = Global_113648.f_2365[j /*164*/].f_80[i];
			uParam0->f_2345[j /*164*/].f_84[i] = Global_113648.f_2365[j /*164*/].f_84[i];
			uParam0->f_2345[j /*164*/].f_88[i] = Global_113648.f_2365[j /*164*/].f_88[i];
			uParam0->f_2345[j /*164*/].f_92[i] = Global_113648.f_2365[j /*164*/].f_92[i];
			uParam0->f_2345[j /*164*/].f_96[i] = Global_113648.f_2365[j /*164*/].f_96[i];
			uParam0->f_2345[j /*164*/].f_100[i] = Global_113648.f_2365[j /*164*/].f_100[i];
			uParam0->f_2345[j /*164*/].f_104[i] = Global_113648.f_2365[j /*164*/].f_104[i];
			uParam0->f_2345[j /*164*/].f_108[i] = Global_113648.f_2365[j /*164*/].f_108[i];
			uParam0->f_2345[j /*164*/].f_112[i] = Global_113648.f_2365[j /*164*/].f_112[i];
			uParam0->f_2345[j /*164*/].f_116[i] = Global_113648.f_2365[j /*164*/].f_116[i];
			uParam0->f_2345[j /*164*/].f_120[i] = Global_113648.f_2365[j /*164*/].f_120[i];
			uParam0->f_2345[j /*164*/].f_124[i] = Global_113648.f_2365[j /*164*/].f_124[i];
			uParam0->f_2345[j /*164*/].f_128[i] = Global_113648.f_2365[j /*164*/].f_128[i];
			uParam0->f_2345[j /*164*/].f_132[i] = Global_113648.f_2365[j /*164*/].f_132[i];
			uParam0->f_2345[j /*164*/].f_136[i] = Global_113648.f_2365[j /*164*/].f_136[i];
			uParam0->f_2345[j /*164*/].f_140[i] = Global_113648.f_2365[j /*164*/].f_140[i];
			uParam0->f_2345[j /*164*/].f_144[i] = Global_113648.f_2365[j /*164*/].f_144[i];
			uParam0->f_2345[j /*164*/].f_148[i] = Global_113648.f_2365[j /*164*/].f_148[i];
			uParam0->f_2345[j /*164*/].f_152[i] = Global_113648.f_2365[j /*164*/].f_152[i];
			uParam0->f_2345[j /*164*/].f_156[i] = Global_113648.f_2365[j /*164*/].f_156[i];
			uParam0->f_2345[j /*164*/].f_160[i] = Global_113648.f_2365[j /*164*/].f_160[i];
		}
	}

	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_27(&(uParam0->f_2890), uParam0, pedParam5, 1, 1, 0);

	func_26(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_26(var uParam0) // Position - 0x2818
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, Ped pedParam2, int iParam3, int iParam4, int iParam5) // Position - 0x283A
{
	Vehicle vehicle;

	if (pedParam2 == 0)
		pedParam2 = PLAYER::PLAYER_PED_ID();

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
		uParam1->f_5 = _GET_PLAYER_CHARACTER_FROM_PED(pedParam2);

	if (func_42(pedParam2, &vehicle, iParam3, iParam5))
		func_28(uParam0, uParam1, vehicle, iParam4);
	else if (ENTITY::DOES_ENTITY_EXIST(vehicle))
		if (!ENTITY::IS_ENTITY_DEAD(vehicle, false))
			if (VEHICLE::IS_VEHICLE_MODEL(vehicle, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, false))
				func_28(uParam0, uParam1, vehicle, iParam4);

	return;
}

int func_28(var uParam0, var uParam1, Vehicle veParam2, int iParam3) // Position - 0x28C2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam2, false))
	{
		func_30(uParam0, veParam2, iParam3);
		uParam1->f_4 = veParam2;
	
		if (func_29(veParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_29(Vehicle veParam0) // Position - 0x2902
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_100681.f_22[i] == veParam0)
			return true;
	}

	return false;
}

void func_30(var uParam0, Vehicle veParam1, int iParam2) // Position - 0x2930
{
	func_37(veParam1, &(uParam0->f_12));
	uParam0->f_7 = func_33(veParam1, _CHAR_NULL, 0);
	uParam0->f_11 = func_32(veParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_31(veParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(veParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(veParam1) };
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78253 == veParam1)
			uParam0->f_9 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_31(Vehicle veParam0) // Position - 0x2A0C
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (veParam0 == Global_77348.f_484[i])
				return 1;
	}

	return 0;
}

eCharacter func_32(Vehicle veParam0) // Position - 0x2A4E
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return _CHAR_NULL;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return _CHAR_NULL;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				return Global_98022[i];
	}

	return _CHAR_NULL;
}

int func_33(Vehicle veParam0, eCharacter echParam1, int iParam2) // Position - 0x2AB1
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				if (echParam1 == _CHAR_NULL || echParam1 == Global_98022[i])
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(veParam0) == func_34(echParam1, iParam2))
						return 1;
	}

	return 0;
}

Hash func_34(eCharacter echParam0, int iParam1) // Position - 0x2B3F
{
	Hash num;

	if (func_36(echParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_35(echParam0, &num, iParam1);
		return num;
	}
	else
	{
		echParam0 != _CHAR_NULL;
	}

	return 0;
}

void func_35(eCharacter echParam0, var uParam1, int iParam2) // Position - 0x2B81
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			num = joaat("tailgater");
		
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
				num = joaat("premier");
		
			switch (num)
			{
				case joaat("tailgater"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("premier"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case CHAR_TREVOR:
			num = joaat("bodhi2");
		
			switch (num)
			{
				case joaat("bodhi2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113648.f_9087.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam2 == 1)
				num = joaat("buffalo2");
			else if (iParam2 == 2)
				num = joaat("bagger");
			else if (Global_113648.f_9087.f_99.f_58[118])
				num = joaat("bagger");
			else
				num = joaat("buffalo2");
		
			switch (num)
			{
				case joaat("bagger"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("buffalo2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_36(eCharacter echParam0) // Position - 0x2DDD
{
	return echParam0 < CHAR_MULTIPLAYER;
}

void func_37(Vehicle veParam0, var uParam1) // Position - 0x2DE9
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_41(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_40(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_39(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_38(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_38(int iParam0) // Position - 0x3094
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_39(var uParam0, var uParam1, var uParam2) // Position - 0x3144
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_40(int iParam0) // Position - 0x3337
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_41(var uParam0) // Position - 0x3357
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_42(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x3408
{
	const char* thisScriptName;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			else
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != pedParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
								return false;
					
						if (func_43(*uParam1, _GET_CURRENT_PLAYER_CHARACTER_0(), true))
						{
							thisScriptName = SCRIPT::GET_THIS_SCRIPT_NAME();
						
							if (!MISC::ARE_STRINGS_EQUAL(thisScriptName, "save_anywhere"))
								return false;
							else if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
								return false;
						}
					
						if (iParam3 == 1)
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

BOOL func_43(Vehicle veParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x3537
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_44(echParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_44(eCharacter echParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x35A5
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (echParam0)
	{
		case CHAR_MICHAEL:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case CHAR_FRANKLIN:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case CHAR_TREVOR:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x367E
{
	eCharacter i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = CHAR_MICHAEL; i <= CHAR_TREVOR; i = i + 1)
		{
			if (_GET_CHARACTER_MODEL(i) == entityModel)
				return i;
		}
	}

	return _CHAR_NULL;
}

Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x36BB
{
	if (func_36(character))
		return func_47(character);
	else
		character != _CHAR_NULL;

	return 0;
}

Hash func_47(eCharacter echParam0) // Position - 0x36E0
{
	return Global_2028[echParam0 /*29*/];
}

void func_48(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x36EF
{
	eCharacter character;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_54(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_53(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_36(character))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[character /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[character /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[character /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[character /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[character /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[character /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_52(161, iParam3))
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, iParam3, 0);
			else
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, iParam3, 0);
		
			uParam1->f_60 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_ITEM, iParam3, 0);
			uParam1->f_61 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_FORCED_HAIR_TYPE, iParam3, 0);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_52(161, iParam3))
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO_SA, iParam3, 0);
			else
				uParam1->f_59 = _MPCHAR_STAT_GET_INT(MP_STAT_CHAR_FM_STORED_HAIRDO, iParam3, 0);
	}

	return;
}

int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x388F
{
	Hash statHash;
	int outValue;

	if (empsParam0 != MP_STAT_INVALID)
	{
		iParam2 == 0;
		statHash = Global_2805029[empsParam0 /*3*/][func_50(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_50(int iParam0) // Position - 0x38CC
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_51();
	
		if (num2 > -1)
		{
			Global_2804741 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804741 = 1;
		}
	}

	return num;
}

int func_51() // Position - 0x3900
{
	return Global_1574918;
}

BOOL func_52(int iParam0, int iParam1) // Position - 0x390C
{
	Hash statHash;
	BOOL outValue;

	statHash = Global_2848282[iParam0 /*3*/][func_50(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

void func_53(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, eCharacter echParam5) // Position - 0x3938
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	}
	else
	{
		character = echParam5;
	}

	if (iParam4 == 0)
		return;

	if (epctParam1 == PV_COMP_HEAD)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (pedParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
				}
			}
		}
	}

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (epctParam1 == PV_COMP_BERD)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_54(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, eCharacter echParam6) // Position - 0x3E81
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
	}
	else
	{
		character = echParam6;
	}

	if (iParam5 == 0)
		return;

	switch (character)
	{
		case CHAR_MICHAEL:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_FRANKLIN:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case CHAR_TREVOR:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x40C3
{
	func_56();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_56() // Position - 0x40DC
{
	eCharacter character;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			character = _GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
		
			if (func_36(character) && !func_57(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != character && func_36(Global_113648.f_2365.f_539.f_4321))
					Global_113648.f_2365.f_539.f_4322 = Global_113648.f_2365.f_539.f_4321;
			
				Global_113648.f_2365.f_539.f_4323 = character;
				Global_113648.f_2365.f_539.f_4321 = character;
				return;
			}
		}
		else
		{
			if (Global_113648.f_2365.f_539.f_4321 != _CHAR_NULL)
				Global_113648.f_2365.f_539.f_4323 = Global_113648.f_2365.f_539.f_4321;
		
			return;
		}
	}

	Global_113648.f_2365.f_539.f_4321 = 145;
	return;
}

BOOL func_57(int iParam0) // Position - 0x41D9
{
	return Global_43257 == iParam0;
}

void func_58(Ped pedParam0, BOOL bParam1) // Position - 0x41E7
{
	eCharacter character;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_36(character) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_59(pedParam0, &Global_113648.f_2365.f_539.f_298[character /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_113648.f_2365.f_539.f_1730[i /*4*/][character] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
			
				if (bParam1)
				{
					weaponWheelCurrentlyHighlighted = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
				
					if (Global_113648.f_2365.f_539.f_1730[i /*4*/][character] == weaponWheelCurrentlyHighlighted)
						Global_113648.f_2365.f_539.f_1763 = i;
				}
			}
		
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
		
			if (character == CHAR_MICHAEL)
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_FRANKLIN)
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (character == CHAR_TREVOR)
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), tintIndex, true);
		}
	}

	return;
}

void func_59(Ped pedParam0, var uParam1) // Position - 0x42DA
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int l;
	int numDlcWeaponsSp;
	Hash outData;
	var ComponentDataPtr;
	int num;
	int offset;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_64(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_64(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED"))
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == joaat("GADGET_PARACHUTE"))
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_62(pedWeapontypeInSlot, j); k != 0; k = func_62(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_61(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_60(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num /*5*/] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_60(int iParam0) // Position - 0x4562
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_61(int iParam0) // Position - 0x4603
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case 465894841:
			case 1703483498:
			case -22923932:
				return true;
		}
	}

	return false;
}

Hash func_62(Hash hParam0, int iParam1) // Position - 0x47DD
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var ComponentDataPtr;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_63(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_60(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

int func_63(Hash hParam0, Any* panParam1) // Position - 0x543E
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

Hash func_64(int iParam0) // Position - 0x5479
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_65(Ped pedParam0) // Position - 0x56ED
{
	eCharacter character;

	character = _GET_PLAYER_CHARACTER_FROM_PED(pedParam0);

	if (func_36(character) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_294[character] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_66(var uParam0, int iParam1) // Position - 0x5729
{
	var unk;
	var unk2;
	var unk5;
	eCharacter character;

	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_78807, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_78807, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_70(&unk))
		{
			if (func_68(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			character = _GET_CURRENT_PLAYER_CHARACTER_0();
		
			if (character == CHAR_MICHAEL)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (character == CHAR_FRANKLIN)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (character == CHAR_TREVOR)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_67(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_67(Vector3 vParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Position - 0x5C78
{
	Interior interiorAtCoordsWithType;
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(fParam4, sParam3);
	
		if (!INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType))
			return false;
	
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (interiorFromCollision == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_68(int iParam0, var uParam1, var uParam2) // Position - 0x5CBC
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_69(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_69(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x643B
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_70(var uParam0) // Position - 0x6482
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_96())
		{
			*uParam0 = func_76(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, false, true, -1);
		
			if (func_75(*uParam0) && !func_71(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_71(int iParam0) // Position - 0x64DD
{
	return func_72(iParam0, 0, true);
}

BOOL func_72(int iParam0, int iParam1, BOOL bParam2) // Position - 0x64ED
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_74() == 0)
			return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_73(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

eMPStat func_73(int iParam0) // Position - 0x654E
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_SHOPFM_HAIRDO_01_BH;
	
		case 1:
			return MP_STAT_SHOPFM_HAIRDO_02_SC;
	
		case 2:
			return MP_STAT_SHOPFM_HAIRDO_03_V;
	
		case 3:
			return MP_STAT_SHOPFM_HAIRDO_04_SS;
	
		case 4:
			return MP_STAT_SHOPFM_HAIRDO_05_MP;
	
		case 5:
			return MP_STAT_SHOPFM_HAIRDO_06_HW;
	
		case 6:
			return MP_STAT_SHOPFM_HAIRDO_07_PB;
	
		case 7:
			return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
	
		case 8:
			return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
	
		case 9:
			return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
	
		case 10:
			return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
	
		case 11:
			return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
	
		case 12:
			return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
	
		case 13:
			return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
	
		case 14:
			return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
	
		case 15:
			return MP_STAT_SHOPFM_CLOTHES_M_03_H;
	
		case 16:
			return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
	
		case 17:
			return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
	
		case 18:
			return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
	
		case 19:
			return MP_STAT_SHOPFM_CLOTHES_H_02_B;
	
		case 20:
			return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
	
		case 21:
			return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
	
		case 22:
			return MP_STAT_SHOPFM_TATTOO_01_HW;
	
		case 23:
			return MP_STAT_SHOPFM_TATTOO_02_SS;
	
		case 24:
			return MP_STAT_SHOPFM_TATTOO_03_PB;
	
		case 25:
			return MP_STAT_SHOPFM_TATTOO_04_VC;
	
		case 26:
			return MP_STAT_SHOPFM_TATTOO_05_ELS;
	
		case 27:
			return MP_STAT_SHOPFM_TATTOO_06_GOH;
	
		case 28:
			return MP_STAT_SHOPFM_GUN_01_DT;
	
		case 29:
			return MP_STAT_SHOPFM_GUN_02_SS;
	
		case 30:
			return MP_STAT_SHOPFM_GUN_03_HW;
	
		case 31:
			return MP_STAT_SHOPFM_GUN_04_ELS;
	
		case 32:
			return MP_STAT_SHOPFM_GUN_05_PB;
	
		case 33:
			return MP_STAT_SHOPFM_GUN_06_LS;
	
		case 34:
			return MP_STAT_SHOPFM_GUN_07_MW;
	
		case 35:
			return MP_STAT_SHOPFM_GUN_08_CS;
	
		case 36:
			return MP_STAT_SHOPFM_GUN_09_GOH;
	
		case 37:
			return MP_STAT_SHOPFM_GUN_10_VWH;
	
		case 38:
			return MP_STAT_SHOPFM_GUN_11_ID1;
	
		case 39:
			return MP_STAT_SHOPFM_CARMOD_01_AP;
	
		case 40:
			return MP_STAT_SHOPFM_CARMOD_05_ID2;
	
		case 41:
			return MP_STAT_SHOPFM_CARMOD_06_BT1;
	
		case 42:
			return MP_STAT_SHOPFM_CARMOD_07_CS1;
	
		case 43:
			return MP_STAT_SHOPFM_CARMOD_08_CS6;
	
		case 44:
			return MP_STAT_SHOPFM_CARMOD_SUPERMOD;
	
		case 45:
			return MP_STAT_SHOPFM_PERS_GAR;
	
		case 46:
			return MP_STAT_SHOPFM_PERS_GUN;
	
		case 47:
			return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
	
		case 48:
			return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
	
		case 49:
			return MP_STAT_SHOPFM_PERS_GUN_ARENA;
	
		case 52:
			return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
	
		case 50:
			return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
	
		case 51:
			return MP_STAT_SHOPFM_CLOTHES_CASINO;
	
		case 53:
			return MP_STAT_SHOPFM_PERS_GUN_SUB;
	
		case 54:
			return MP_STAT_SHOPFM_TATTOO_07_CCT;
	
		case 55:
			return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
	
		case 56:
			return MP_STAT_SHOPFM_PERS_GUN_FIXER;
	
		case 57:
			return MP_STAT_SHOPFM_CLOTHES_STUDIO;
	
		case 58:
			return UNK_108067914;
	
		case 59:
			return UNK_067837685;
	
		default:
			break;
	}

	return MP_STAT_INVALID;
}

int func_74() // Position - 0x68E7
{
	return Global_32163;
}

BOOL func_75(int iParam0) // Position - 0x68F2
{
	return func_72(iParam0, 5, true);
}

int func_76(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x6902
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = -1;

	for (i = 0; i <= 59; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_95(i))
		{
			if (!bParam5 || func_94(i))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_77(i, false), true);
			
				if (distanceBetweenCoords < num && distanceBetweenCoords <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num = distanceBetweenCoords;
					num2 = i;
				}
			}
		}
	}

	return num2;
}

Vector3 func_77(int iParam0, BOOL bParam1) // Position - 0x69A4
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_91(Global_102825);
	
		case 46:
			if (Global_1853747 != _INVALID_PLAYER_INDEX())
				if (func_89(Global_1853747))
					return func_82(2, 2);
				else if (func_81(Global_1853747))
					return func_82(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return 510.1f, 4749.5f, -69f;
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1970473;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_78();
	
		case 59:
			return 560f, -405f, -69.6591f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_78() // Position - 0x70F4
{
	if (!_IS_NULL_VECTOR(Global_1956117))
		return Global_1956117;

	switch (func_79())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_79() // Position - 0x73EF
{
	return Global_2652258.f_2650;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x73FE
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_81(Player plParam0) // Position - 0x7428
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 0) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 1) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 2))
			return true;

	return false;
}

Vector3 func_82(int iParam0, int iParam1) // Position - 0x7480
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1853747 != _INVALID_PLAYER_INDEX())
		if (iParam1 == 3)
			if (func_83(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
				if (func_83(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
				if (func_83(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_83(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x752A
{
	var unk;
	Vector3 vector;
	var unk12;
	Vector3 vector2;

	if (!func_88(iParam3, &unk))
		return false;

	if (!func_88(iParam1, &vector))
		return false;

	if (!bParam4)
		unk12 = { func_86(iParam0) };
	else
		unk12 = { func_85(iParam0) };

	vector2 = { unk12 - unk };
	vector2 = { func_84(vector2, -unk.f_3.f_2) };
	vector2 = { func_84(vector2, vector.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, 0f, vector2) };
	uParam2->f_3 = { unk12.f_3 };
	return true;
}

Vector3 func_84(float fParam0, var uParam1, var uParam2, float fParam3) // Position - 0x75BF
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_85(int iParam0) // Position - 0x7603
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_86(int iParam0) // Position - 0x7787
{
	return func_87(iParam0);
}

struct<6> func_87(int iParam0) // Position - 0x7795
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_88(int iParam0, var uParam1) // Position - 0x825F
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_89(Player plParam0) // Position - 0x82E1
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 3) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 4) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 5))
			return true;

	return false;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x8339
{
	return -1;
}

Vector3 func_91(int iParam0) // Position - 0x8342
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return 520.0001f, 4750f, -70f;
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_92() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_92() // Position - 0x85B9
{
	return func_93(PLAYER::PLAYER_ID());
}

int func_93(Player plParam0) // Position - 0x85C9
{
	return MISC::GET_BITS_IN_RANGE(Global_2657589[plParam0 /*466*/].f_321.f_3, 28, 31);
}

BOOL func_94(int iParam0) // Position - 0x85E6
{
	return func_72(iParam0, 0, false);
}

int func_95(int iParam0) // Position - 0x85F6
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_96() // Position - 0x891F
{
	return Global_100733.f_387 > 0;
}

var func_97() // Position - 0x8930
{
	var unk;

	func_107(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_106(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_105(&unk, CLOCK::GET_CLOCK_HOURS());
	func_100(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_99(&unk, CLOCK::GET_CLOCK_MONTH());
	func_98(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_98(var uParam0, int iParam1) // Position - 0x8976
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_99(var uParam0, int iParam1) // Position - 0x89FC
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_100(var uParam0, int iParam1) // Position - 0x8A2F
{
	int num;
	int num2;

	num = func_104(*uParam0);
	num2 = func_102(*uParam0);

	if (iParam1 < 1 || iParam1 > func_101(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_101(int iParam0, int iParam1) // Position - 0x8A80
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_102(int iParam0) // Position - 0x8B22
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_103(BOOL bParam0, var uParam1, var uParam2) // Position - 0x8B44
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_104(int iParam0) // Position - 0x8B5B
{
	return iParam0 & 15;
}

void func_105(var uParam0, int iParam1) // Position - 0x8B68
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_106(var uParam0, int iParam1) // Position - 0x8BA2
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_107(var uParam0, int iParam1) // Position - 0x8BDD
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x8C19
{
	func_56();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_109(int iParam0) // Position - 0x8C32
{
	int num;
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || IS_XBOX_PLATFORM())
	{
		num = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &num, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || IS_PLAYSTATION_PLATFORM())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPRC_", 24);
		TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
		TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &textLabel);
	}

	return;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x8C8B
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL IS_XBOX_PLATFORM() // Position - 0x8CA1
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

void func_112(char* sParam0, Any anParam1, int iParam2) // Position - 0x8CB7
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, false, true, false);
		TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, anParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
	return;
}

BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x8CF9
{
	if (!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

struct<2> func_114(int iParam0) // Position - 0x8D21
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

void func_115(int iParam0, var uParam1) // Position - 0x916E
{
	switch (iParam0)
	{
		case 0:
			func_116(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 1:
			func_116(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 2:
			func_116(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 3:
			func_116(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 4:
			func_116(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 5:
			func_116(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /*Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry.*/, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 6:
			func_116(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 7:
			func_116(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_117(iParam0), 0, 0);
			break;
	
		case 8:
			func_116(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /*The killer's identity and location have been revealed.*/, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 9:
			func_116(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 10:
			func_116(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 11:
			func_116(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 12:
			func_116(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 13:
			func_116(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 14:
			func_116(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 15:
			func_116(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 16:
			func_116(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 17:
			func_116(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 18:
			func_116(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 19:
			func_116(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 20:
			func_116(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 21:
			func_116(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_117(iParam0), 1, 0);
			break;
	
		case 22:
			func_116(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_117(iParam0), 1, 0);
			break;
	
		case 23:
			func_116(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_117(iParam0), 0, 1);
			break;
	
		case 24:
			func_116(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_117(iParam0), 0, 1);
			break;
	
		case 25:
			func_116(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 26:
			func_116(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 27:
			func_116(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 28:
			func_116(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 29:
			func_116(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 30:
			func_116(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 31:
			func_116(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 32:
			func_116(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 33:
			func_116(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 34:
			func_116(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 35:
			func_116(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 36:
			func_116(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 37:
			func_116(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 38:
			func_116(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /*Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill.*/, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 39:
			func_116(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
	
		case 40:
			func_116(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
	
		case 41:
			func_116(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_117(iParam0), 1, 1);
			break;
	
		case 42:
			func_116(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 43:
			func_116(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 1);
			break;
	
		case 44:
			func_116(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 45:
			func_116(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 46:
			func_116(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 47:
			func_116(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 48:
			func_116(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 49:
			func_116(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /*Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly.*/, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 50:
			func_116(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 51:
			func_116(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 52:
			func_116(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 54:
			func_116(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 55:
			func_116(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 56:
			func_116(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_117(iParam0), 0, 0);
			break;
	
		case 53:
			func_116(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_117(iParam0), 1, 0);
			break;
	
		case 57:
			func_116(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 58:
			func_116(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /*Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~*/, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 59:
			func_116(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 60:
			func_116(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 61:
			func_116(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		case 62:
			func_116(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_117(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_116(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Position - 0xA3B5
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_117(int iParam0) // Position - 0xA446
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

BOOL func_118(Any* panParam0) // Position - 0xA78C
{
	int threadId;

	if (func_148(&(panParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(panParam0->f_9)))
		{
			func_138(true);
			func_136(panParam0, true, func_137(*panParam0));
		}
	
		if (panParam0->f_27)
		{
			if (func_135(*panParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_152();
					SYSTEM::WAIT(0);
				}
			}
		}
	
		func_119(*panParam0);
		threadId = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(panParam0->f_1), panParam0, 61, 54000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(panParam0->f_1));
	
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_274("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::SET_SCRIPT_CAN_START_CUTSCENE(threadId);
		}
		else
		{
			func_274("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
	
		return true;
	}

	return false;
}

void func_119(int iParam0) // Position - 0xA831
{
	var name;

	func_134();

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
	}

	if (func_133(iParam0))
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);

	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	HUD::CLEAR_ADDITIONAL_TEXT(2, true);

	if (Global_44446 == true)
		if (func_131(PLAYER::PLAYER_PED_ID()))
			func_122(PLAYER::PLAYER_PED_ID());

	if (!_IS_MISSION_REPLAY_IN_PROGRESS())
	{
		if (iParam0 < 63)
		{
			func_120(iParam0);
			name = { func_9(iParam0) };
			HUD::SET_MISSION_NAME(true, &name);
		}
	}

	return;
}

void func_120(int iParam0) // Position - 0xA8CC
{
	if (iParam0 < 63)
	{
		func_121();
		Global_78814 = iParam0;
		Global_78813 = 0;
		Global_78816 = 7;
	}

	return;
}

void func_121() // Position - 0xA8F2
{
	Global_78813 != 6;

	if (Global_78818)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_78818 = false;
		Global_23270.f_8892 = 0;
	}

	Global_78813 = 6;
	Global_78815 = -1;
	Global_78814 = -1;
	return;
}

void func_122(Ped pedParam0) // Position - 0xA92A
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_130(pedParam0);

	if (!(num == -1))
	{
		num2 = Global_44232[num /*5*/];
		func_125(1, num2, 1);
		return;
	}

	num3 = func_124(pedParam0);

	if (num3 == -1)
		return;

	func_123(num3);
	return;
}

void func_123(int iParam0) // Position - 0xA983
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!(Global_44206[iParam0 /*5*/].f_1 == 0))
		if (Global_44206[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_124(Ped pedParam0) // Position - 0xAA06
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_125(int iParam0, int iParam1, int iParam2) // Position - 0xAA37
{
	func_126(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_126(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xAA4C
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_128(iParam0, iParam1, iParam2))
		return;

	num = func_127();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_127() // Position - 0xAACE
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_128(int iParam0, int iParam1, int iParam2) // Position - 0xAAFF
{
	if (func_129(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_129(int iParam0, int iParam1, int iParam2) // Position - 0xAB1A
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_130(Ped pedParam0) // Position - 0xAB66
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!(Global_44232[i /*5*/] == -1))
			if (pedParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

BOOL func_131(Vehicle veParam0) // Position - 0xABAF
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (!PED::IS_PED_INJURED(veParam0))
			return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Ped pedParam0) // Position - 0xABCF
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_133(int iParam0) // Position - 0xABF0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return false;
	}

	return true;
}

void func_134() // Position - 0xAC43
{
	if (Global_9058[0 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[0 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[1 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[1 /*2811*/][0 /*281*/].f_259 = 0;

	if (Global_9058[2 /*2811*/][0 /*281*/].f_259 == 2)
		Global_9058[2 /*2811*/][0 /*281*/].f_259 = 0;

	MISC::CLEAR_BIT(&Global_8253, 25);
	MISC::SET_BIT(&Global_8254, 11);
	return;
}

BOOL func_135(int iParam0) // Position - 0xACC0
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return false;
	}

	return true;
}

void func_136(Any* panParam0, BOOL bParam1, BOOL bParam2) // Position - 0xAD13
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_28[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_28[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 5; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_35[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	for (i = 0; i < 6; i = i + 1)
	{
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_41[i]))
			ENTITY::SET_ENTITY_PROOFS(panParam0->f_41[i], bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
	}

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), bParam1, bParam1, bParam1, bParam1, bParam1, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), bParam1);
	
		if (bParam2)
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}

	return;
}

BOOL func_137(int iParam0) // Position - 0xAE08
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return false;
	}

	return true;
}

void func_138(BOOL bParam0) // Position - 0xAE73
{
	Player playerIndex;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (!PLAYER::IS_PLAYER_DEAD(playerIndex))
	{
		if (bParam0)
		{
		}
	
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_EXPLOSIONS);
		PLAYER::SET_PLAYER_CONTROL(playerIndex, bParam0, SPC_REMOVE_PROJECTILES);
	}

	func_139(true, true, false, false, false, false, false);
	return;
}

void func_139(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xAEB2
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_147(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_146())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_145(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_147(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_145(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_143(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_140() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_143(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_140() // Position - 0xAFFF
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0xB019
{
	BOOL flag;

	if (player == PLAYER::PLAYER_ID())
		flag = func_142(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			flag = PLAYER::GET_PLAYER_TEAM(player) == 8;

	return flag;
}

int func_142(int iParam0, BOOL bParam1) // Position - 0xB064
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_51();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_143(Player plParam0) // Position - 0xB0A5
{
	if (_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0))
		return true;

	if (func_144())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_144() // Position - 0xB0E4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_145(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xB0F2
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_146() // Position - 0xB125
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_147(int iParam0) // Position - 0xB14C
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

BOOL func_148(const char* sParam0) // Position - 0xB16F
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
	
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
	
		return true;
	}

	func_274("Attempting to launch invalid script file [TERMINATING]");
	return false;
}

void func_149() // Position - 0xB1AC
{
	Global_20591 = 0;
	func_150();
	return;
}

void func_150() // Position - 0xB1BC
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

BOOL _CONVERSATION_IS_DIALOGUE_IN_PROGRESS() // Position - 0xB213
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_152() // Position - 0xB235
{
	func_157(0);
	func_156();
	func_153();
	return;
}

void func_153() // Position - 0xB24A
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (func_154(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10.5f, 1, 1056964608, false, true, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);

	return;
}

BOOL func_154(Vehicle veParam0, float fParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xB2A2
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_155(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= iParam3)
			return true;

	return false;
}

void func_155(Vehicle veParam0) // Position - 0xB43A
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

void func_156() // Position - 0xB466
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SPRINT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SELECT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_AIM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_HEAVY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ATTACKLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_JUMP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_ENTER, true);
	return;
}

void func_157(int iParam0) // Position - 0xB4B7
{
	if (func_162())
		return;

	if (!(Global_20383.f_1 == 1))
	{
		if (func_161(0))
			func_158(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_158(int iParam0) // Position - 0xB4EA
{
	if (func_162())
		return;

	if (Global_20584)
		if (func_160())
			func_159(true, true);
		else
			func_159(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_146())
		Global_20383.f_1 = 3;

	return;
}

void func_159(BOOL bParam0, BOOL bParam1) // Position - 0xB574
{
	if (bParam0)
	{
		if (func_161(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_160() // Position - 0xB5E8
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_161(int iParam0) // Position - 0xB5F6
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_162() // Position - 0xB64D
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_163(int iParam0) // Position - 0xB65C
{
	if (iParam0 == 52 || iParam0 == 53 || iParam0 == 54 || iParam0 == 55 || iParam0 == 56)
		return true;

	return false;
}

BOOL func_164(int iParam0) // Position - 0xB69D
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_171();

	if (iParam0 == -1)
		return false;

	num = func_166(&(Global_112735[iParam0 /*10*/].f_9), 1, 4, false, 0);

	if (!(num == 1))
		return false;

	func_165(iParam0);
	return true;
}

void func_165(int iParam0) // Position - 0xB6E2
{
	Global_112735[iParam0 /*10*/].f_4 = 1;
	Global_112735[iParam0 /*10*/].f_5 = 0;
	Global_112735[iParam0 /*10*/].f_6 = 0;
	Global_112735[iParam0 /*10*/] = false;
	return;
}

int func_166(int iParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0xB714
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_170(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*iParam0 = Global_43221;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43257 = iParam2;
		Global_43219 = *iParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*iParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *iParam0)
					return 2;
			}
		}
		else if (Global_43219 == *iParam0)
		{
			return 1;
		}
	
		*iParam0 = -1;
	}

	if (*iParam0 == -1)
	{
		if (!_CAN_ENTER_FREEROAM_STATE(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*iParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_167(iParam0, iParam4);
	}

	return 2;
}

void func_167(int iParam0, int iParam1) // Position - 0xB84B
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*iParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *iParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*iParam0 = -1;
	return;
}

BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0xB89A
{
	return func_169(iParam0, Global_43257);
}

BOOL func_169(int iParam0, int iParam1) // Position - 0xB8AB
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_170(int iParam0) // Position - 0xBA8C
{
	if (Global_43257 == 15)
		return false;

	if (_CAN_ENTER_FREEROAM_STATE(iParam0))
		return false;

	return true;
}

int func_171() // Position - 0xBAAE
{
	return func_172(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_172(const char* sParam0, int iParam1) // Position - 0xBABF
{
	int num;
	const char* str;
	Hash hashKey;
	int i;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_115(num, &str);
	
		if (MISC::GET_HASH_KEY(str) == hashKey)
			return num;
	}

	iParam1 == 0;
	return -1;
}

BOOL _IS_MISSION_REPLAY_IN_PROGRESS() // Position - 0xBB08
{
	if (Global_100681 == 10 || Global_100681 == 9)
		return true;

	return false;
}

BOOL func_174(var uParam0, int iParam1) // Position - 0xBB2C
{
	switch (uParam0->f_16)
	{
		case 0:
			if (*uParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.6306f, 4699.115f, 35.38089f, 1812.8776f, 4710.457f, 42.053535f, 23.75f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < 3f)
						{
							if (func_180(2))
							{
								if (func_178(uParam0->f_27))
								{
									func_177(uParam0->f_27, *uParam0);
									func_274("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
				{
					if (func_176(uParam0))
					{
						if (func_180(2))
						{
							if (func_178(uParam0->f_27))
							{
								func_177(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 21)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.01923f, 40.301258f, -1883.0376f, -444.08112f, 50.24509f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.5764f, -443.64337f, 36.405807f, -1874.8258f, -448.0797f, 49.15162f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.3427f, -446.2214f, 35.64637f, -1866.9519f, -456.56006f, 49.044197f, 8.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.9973f, -438.99216f, 44.172462f, -1874.0793f, -443.34204f, 48.691788f, 0.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.8223f, -441.7655f, 44.917503f, -1877.9409f, -439.9522f, 47.289818f, 1.25f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (func_176(uParam0))
						{
							if (func_180(2))
							{
								if (func_178(uParam0->f_27))
								{
									func_177(uParam0->f_27, *uParam0);
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (*uParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.07306f, 1261.0862f, 366.15918f, 780.83826f, 1260.8286f, 351.405f, 17.75f, false, true, 0))
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
					{
						if (func_176(uParam0))
						{
							if (func_180(2))
							{
								if (func_178(uParam0->f_27))
								{
									func_177(uParam0->f_27, *uParam0);
									return true;
								}
							}
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]))
			{
				if (func_176(uParam0))
				{
					if (func_180(2))
					{
						if (func_178(uParam0->f_27))
						{
							func_177(uParam0->f_27, *uParam0);
							return true;
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 2:
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_35[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_35[0], false))
				{
					if (func_180(3))
					{
						func_177(uParam0->f_27, *uParam0);
						return true;
					}
				}
				else if (iParam1 == 1)
				{
					func_175();
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_35[0], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_35[0], true), true) < uParam0->f_15)
					{
						if (func_180(2))
						{
							if (func_178(uParam0->f_27))
							{
								func_177(uParam0->f_27, *uParam0);
								return true;
							}
						}
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_17[0 /*3*/], true) < uParam0->f_15)
			{
				if (func_180(2))
				{
					if (func_178(uParam0->f_27))
					{
						func_177(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], false, true, 0))
			{
				if (func_180(2))
				{
					if (func_178(uParam0->f_27))
					{
						func_177(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 5:
			if (*uParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
								if (func_180(3))
									return true;
						else if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob2")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cargobob3")))
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), uParam0->f_35[0]))
								if (func_180(3))
									return true;
			}
			else if (*uParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.88849f, 371.9034f, 103.98843f, 241.58984f, 359.64575f, 107.34612f, 1.25f, false, true, 0))
					{
						if (func_180(2))
						{
							if (func_178(uParam0->f_27))
							{
								func_177(uParam0->f_27, *uParam0);
								func_274("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return true;
							}
						}
					}
				}
			}
			else if (*uParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.20456f, 277.48663f, 91.553215f, -153.59996f, 277.40607f, 97.338135f, 10f, false, true, 0))
					return false;
			}
			else if (*uParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.9482f, 4143.44f, 42.292946f, 2722.2134f, 4144.5215f, 45.431824f, 10f, false, true, 0))
				{
					if (func_180(2))
					{
						if (func_178(true))
						{
							func_177(1, *uParam0);
							func_274("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return true;
						}
					}
				}
			}
			else if (*uParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.49945f, 358.74545f, 96.373505f, -1021.9401f, 361.88876f, 65.36148f, 30f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.11035f, 68.460175f, -1028.5663f, 395.46133f, 94.57245f, 15f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.75565f, 68.02096f, -1021.4514f, 336.34583f, 93.18714f, 14.5f, false, true, 0))
						{
							if (func_180(2))
							{
								if (func_178(uParam0->f_27))
								{
									func_177(uParam0->f_27, *uParam0);
									func_274("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return true;
								}
							}
						}
					}
				}
			}
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_17[0 /*3*/], uParam0->f_17[1 /*3*/], uParam0->f_24, false, true, 0))
			{
				if (*uParam0 == 45)
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.6965f, 2597.0374f, 45.39052f, 2324.0034f, 2597.185f, 47.749607f, 8.5f, false, true, 0))
						return false;
			
				if (func_180(2))
				{
					if (func_178(uParam0->f_27))
					{
						func_177(uParam0->f_27, *uParam0);
						return true;
					}
				}
			}
			else
			{
				return false;
			}
			break;
	
		case 6:
			break;
	}

	return false;
}

void func_175() // Position - 0xC311
{
	func_27(&(Global_104212.f_2890), &Global_104212, 0, 1, 1, 0);
	return;
}

BOOL func_176(var uParam0) // Position - 0xC32C
{
	float num;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && uParam0->f_27)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
			num = 1f;
		else
			num = 5f;
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15 + num)
			return true;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_28[0], true), true) < uParam0->f_15)
	{
		return true;
	}

	return false;
}

void func_177(int iParam0, var uParam1) // Position - 0xC3BA
{
	if (iParam0 == 1)
	{
		if (!func_135(uParam1))
			return;
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_274("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
		
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_274("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true, false);
			}
		
			func_152();
		}
	}

	return;
}

BOOL func_178(BOOL bParam0) // Position - 0xC41E
{
	Vehicle playersLastVehicle;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return true;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			
				if (func_179(playersLastVehicle))
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
						if (!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(playersLastVehicle) && !ENTITY::IS_ENTITY_IN_AIR(playersLastVehicle) && ENTITY::GET_ENTITY_SPEED(playersLastVehicle) < 1f)
							return true;
					else if (!ENTITY::IS_ENTITY_IN_AIR(playersLastVehicle))
						return true;
			}
		}
	}

	return false;
}

BOOL func_179(Vehicle veParam0) // Position - 0xC4B5
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

BOOL func_180(int iParam0) // Position - 0xC4DF
{
	eCharacter character;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				character = _GET_CURRENT_PLAYER_CHARACTER_0();
			
				if (!func_36(character))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_188() || Global_112695 || Global_32166 || func_187() || func_186(8, -1) || func_96() || func_185() || func_184() || func_183() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_188() || Global_32166 || func_187() || func_186(8, -1) || func_184() || func_96() || func_185() || func_183() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_188() || Global_112695 || Global_32166 || func_187() || func_186(8, -1) || func_184() || func_96() || func_185() || func_183() || Global_113648.f_7690.f_919[character] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_188() || Global_112695 || Global_32166 || func_187() || func_186(8, -1) || func_96() || func_185() || func_183() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 4:
						if (func_188() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_186(8, -1) || func_183() || func_182() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 5:
						if (func_186(8, -1) || func_96() || func_185() || func_182() || func_181())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_188() || Global_32166 || func_187() || func_186(8, -1) || func_185() || func_184() || func_183() || Global_113648.f_7690.f_919[character] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_188() || func_185() || Global_112695 || Global_32166 || func_187() || Global_44446 || func_186(8, -1) || func_184() || func_182() || func_183() || Global_113648.f_7690.f_919[character] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_188() || Global_112695 || Global_32166 || func_187() || func_186(8, -1) || func_184() || func_182() || func_96() || func_185() || func_183())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_181() // Position - 0xCBFC
{
	return Global_100720.f_1;
}

BOOL func_182() // Position - 0xCC0A
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_183() // Position - 0xCC2D
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
		return true;

	return false;
}

BOOL func_184() // Position - 0xCC47
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_185() // Position - 0xCC71
{
	return Global_100733.f_388 > 0;
}

BOOL func_186(int iParam0, int iParam1) // Position - 0xCC82
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

BOOL func_187() // Position - 0xCCBA
{
	return Global_1575060;
}

BOOL func_188() // Position - 0xCCC6
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

int func_189(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, char* sParam5, int iParam6, char* sParam7, int iParam8) // Position - 0xCCE2
{
	var unk;

	if (func_180(2))
	{
		if (!_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_28[0]) && MISC::GET_GAME_TIMER() - uParam0->f_60 > iParam8 && func_195(PLAYER::PLAYER_PED_ID(), uParam1, true) < 20f)
			{
				unk = 16;
				_CONVERSATION_INITIALIZE_ACTOR(&unk, iParam6, uParam0->f_28[0], sParam7, 0, 1);
				_CONVERSATION_ADD_LINE_NO_SUBTITLE(&unk, sParam4, sParam5, 7, 0, 0);
				uParam0->f_60 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		else if (func_190(sParam5))
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				if (func_195(PLAYER::PLAYER_PED_ID(), uParam1, true) >= 20f)
					func_149();
		}
	}

	return 0;
}

BOOL func_190(char* sParam0) // Position - 0xCDA4
{
	var string1;

	string1 = { func_191() };

	if (MISC::ARE_STRINGS_EQUAL(&string1, sParam0))
		return true;

	return false;
}

struct<6> func_191() // Position - 0xCDC4
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
		return Global_21344;

	return unk;
}

void _CONVERSATION_ADD_LINE_NO_SUBTITLE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xCDE8
{
	func_193(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_20591, 0);
	Global_21728 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
	return;
}

void func_193(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xCE23
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0xCE79
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

float func_195(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xCF14
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_196(var uParam0, var uParam1, const char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11) // Position - 0xCF4E
{
	float num;
	float num2;
	float num3;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			if (func_202())
			{
				if (*uParam0 != -1)
					func_200(uParam0);
			}
			else if (*uParam0 == -1)
			{
				if (func_195(PLAYER::PLAYER_PED_ID(), uParam3, true) <= 100f)
					func_199(uParam0, 1);
			}
			else
			{
				if (func_198(*uParam0) == 2)
				{
					CUTSCENE::STOP_CUTSCENE(false);
					CUTSCENE::REMOVE_CUTSCENE();
					func_197(*uParam0, false);
				}
				else
				{
					num = func_195(PLAYER::PLAYER_PED_ID(), fParam6, true);
					num2 = func_195(PLAYER::PLAYER_PED_ID(), fParam9, true);
					num3 = num - num2;
				
					if (num3 < 0f)
						num3 = num3 * -1f;
				
					if (num3 > 0.5f)
					{
						if (num < num2)
						{
							if (*uParam1 != 1)
							{
								CUTSCENE::REMOVE_CUTSCENE();
								CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam2, 5, 8);
								func_197(*uParam0, true);
								*uParam1 = 1;
							}
						}
						else if (*uParam1 != 2)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam2, 6, 8);
							func_197(*uParam0, true);
							*uParam1 = 2;
						}
					}
				}
			
				if (func_195(PLAYER::PLAYER_PED_ID(), uParam3, true) > 120f)
					func_200(uParam0);
			}
		}
	}

	return;
}

void func_197(int iParam0, BOOL bParam1) // Position - 0xD06C
{
	if (iParam0 == -1)
		return;

	if (bParam1)
		if (Global_78554 == iParam0)
			Global_78555 = iParam0;
	else if (Global_78555 == iParam0)
		Global_78555 = -1;

	return;
}

int func_198(int iParam0) // Position - 0xD0A8
{
	if (Global_78554 == iParam0)
		if (Global_78555 == -1)
			if (Global_78553 < MISC::GET_FRAME_COUNT())
				return 1;
	else if (Global_78555 == iParam0)
		return 2;

	return 0;
}

void func_199(var uParam0, int iParam1) // Position - 0xD0E1
{
	BOOL flag;
	int i;

	if (Global_78551 < 5)
	{
		Global_78540[Global_78551 /*2*/] = 0;
		Global_78540[Global_78551 /*2*/].f_1 = iParam1;
		flag = false;
	
		while (!flag)
		{
			flag = true;
		
			for (i = 0; i < Global_78551; i = i + 1)
			{
				if (Global_78540[i /*2*/] == Global_78540[Global_78551 /*2*/])
				{
					Global_78540[Global_78551 /*2*/] = Global_78540[Global_78551 /*2*/] + 1;
					flag = false;
				}
			}
		}
	
		*uParam0 = Global_78540[Global_78551 /*2*/];
		Global_78551 = Global_78551 + 1;
		Global_78552 = 1;
	}
	else
	{
		*uParam0 = -1;
	}

	return;
}

void func_200(var uParam0) // Position - 0xD17F
{
	CUTSCENE::STOP_CUTSCENE(false);
	CUTSCENE::REMOVE_CUTSCENE();
	func_201(uParam0);
	return;
}

void func_201(var uParam0) // Position - 0xD196
{
	BOOL flag;
	int num;
	int i;

	if (*uParam0 == -1)
		return;

	if (Global_78555 == *uParam0)
		func_197(*uParam0, false);

	if (Global_78554 == *uParam0)
		Global_78554 = -1;

	flag = false;
	num = 0;

	while (!flag && num < Global_78551)
	{
		if (Global_78540[num /*2*/] == *uParam0)
			flag = true;
		else
			num = num + 1;
	}

	if (!flag)
		return;

	for (i = num; i <= Global_78551 - 2; i = i + 1)
	{
		Global_78540[i /*2*/] = Global_78540[i + 1 /*2*/];
		Global_78540[i /*2*/].f_1 = Global_78540[i + 1 /*2*/].f_1;
	}

	Global_78540[Global_78551 - 1 /*2*/] = -1;
	Global_78540[Global_78551 - 1 /*2*/].f_1 = 3;
	Global_78551 = Global_78551 - 1;
	Global_78552 = 1;
	Global_78553 = MISC::GET_FRAME_COUNT();
	*uParam0 = -1;
	return;
}

BOOL func_202() // Position - 0xD27E
{
	return Global_97990;
}

void func_203(int iParam0) // Position - 0xD28A
{
	if (iParam0 == -1)
		iParam0 = func_171();

	if (iParam0 == -1)
		return;

	Global_112735[iParam0 /*10*/].f_1 = 1;
	return;
}

BOOL IS_RC_FINE_AND_IN_RANGE(Any* panParam0, BOOL bParam1) // Position - 0xD2B2
{
	var unk;

	if (Global_78558)
	{
		func_274("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return false;
	}

	func_115(*panParam0, &unk);

	if (func_241(*panParam0) || func_239(*panParam0) || Global_78804 == 1)
		return true;

	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_274("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return false;
	}

	if (func_235(*panParam0))
	{
		if (*panParam0 == 19)
			func_234(panParam0->f_28[0]);
	
		func_274("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return false;
	}

	if (panParam0->f_25 == 1)
		if (!func_214(panParam0, true, 0))
			return false;
	else if (panParam0->f_16 == 0)
		if (!func_214(panParam0, false, 0))
			return false;

	if (*panParam0 == 16 || *panParam0 == 9 || *panParam0 == 18 || *panParam0 == 22 || *panParam0 == 32 || *panParam0 == 51)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, true))
		{
			if (*panParam0 == 16)
				func_211(panParam0);
			else
				func_209(panParam0);
		
			return false;
		}
	}
	else if (*panParam0 == 24)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
		{
			func_209(panParam0);
			return false;
		}
	}
	else if (*panParam0 == 6)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, true))
			return false;
	}
	else if (panParam0->f_26 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, true, false))
		{
			func_209(panParam0);
			return false;
		}
	}
	else if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
	{
		if (!CHECK_VEHICLES_OK(panParam0, false, false))
		{
			func_209(panParam0);
			return false;
		}
	}

	if (panParam0->f_16 == 2 || panParam0->f_16 == 1)
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(panParam0->f_35[0]))
			if (!ENTITY::IS_ENTITY_AT_COORD(panParam0->f_35[0], unk.f_6, 8f, 8f, 8f, false, true, 0))
				return false;

	if (*panParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, panParam0->f_17[0 /*3*/], 8f))
		{
			func_274("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return false;
		}
	}

	if (unk.f_4 != 17)
	{
		if (!IS_BIT_SET(unk.f_26, _GET_CURRENT_PLAYER_CHARACTER_0()))
		{
			func_274("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return false;
		}
	}

	if (func_208(&(panParam0->f_48)) && bParam1)
		func_205(panParam0->f_28[0], &(panParam0->f_48), *panParam0);

	return true;
}

void func_205(Ped pedParam0, var uParam1, int iParam2) // Position - 0xD522
{
	int taskSequenceId;
	int taskSequenceId2;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_208(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
					
						if (iParam2 != 21)
						{
							if (func_69(uParam1->f_5, 0f, 0f, 0f, false))
							{
								TASK::TASK_PLAY_ANIM(pedParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
							
								if (func_207(uParam1))
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								else
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
							
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
								TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
								TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(pedParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
					
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
		
			case 2:
				if (!func_207(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_206(iParam2) && !PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if (func_207(uParam1) && uParam1->f_4 == 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
		
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&taskSequenceId2);
			
				if (func_69(uParam1->f_5, 0f, 0f, 0f, false))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, false, false, false);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
			
				TASK::CLOSE_SEQUENCE_TASK(taskSequenceId2);
				TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId2);
				TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId2);
				uParam1->f_4 = 1;
			
				if (func_206(iParam2))
					uParam1->f_3 = 2;
				else
					uParam1->f_3 = 0;
				break;
		
			case 5:
				if (!func_206(iParam2) || PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_69(uParam1->f_5, 0f, 0f, 0f, false))
						TASK::TASK_PLAY_ANIM(pedParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, false, false, false);
					else
						TASK::TASK_PLAY_ANIM_ADVANCED(pedParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				
					uParam1->f_3 = 2;
				}
				break;
		}
	}

	return;
}

BOOL func_206(int iParam0) // Position - 0xD87A
{
	if (iParam0 == 17 || iParam0 == 20)
		return true;

	return false;
}

BOOL func_207(var uParam0) // Position - 0xD89A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
		return false;

	return true;
}

BOOL func_208(var uParam0) // Position - 0xD8B2
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		return false;

	return true;
}

void func_209(var uParam0) // Position - 0xD8D7
{
	int i;
	int taskSequenceId;

	if (*uParam0 == 52)
	{
		func_210(&uParam0->f_41[1]);
		func_210(&uParam0->f_41[2]);
	}

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= uParam0->f_28 - 1; i = i + 1)
		{
			if (func_131(uParam0->f_28[i]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_28[i], false))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_28[i], true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_28[0], false);
				}
			
				PED::SET_PED_KEEP_TASK(uParam0->f_28[i], true);
			
				if (*uParam0 == 34)
				{
					if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
					}
				}
			
				switch (*uParam0)
				{
					case 19:
						func_234(uParam0->f_28[i]);
						break;
				
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
					
						if (i == 0)
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, false, false, false);
						else
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, false, false, false);
					
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
					
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
					
						TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, false, false, false);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[i], taskSequenceId);
						TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
						break;
				
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_28[i]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
						break;
				}
			}
		}
	}

	return;
}

void func_210(Object* pobParam0) // Position - 0xDBDB
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		OBJECT::DELETE_OBJECT(pobParam0);
	}

	return;
}

void func_211(var uParam0) // Position - 0xDC06
{
	int i;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= uParam0->f_28 - 1; i = i + 1)
		{
			if (func_131(uParam0->f_28[i]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[i], BF_CanUseVehicles, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[i], false);
				PED::SET_PED_KEEP_TASK(uParam0->f_28[i], true);
				TASK::TASK_COMBAT_PED(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uParam0->f_28[i]);
			}
		}
	}

	return;
}

BOOL CHECK_VEHICLES_OK(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDC86
{
	int i;
	int num;
	Vehicle playersLastVehicle;
	Vehicle playersLastVehicle2;

	if (bParam1)
		num = uParam0->f_35 - 1;
	else
		num = 0;

	if (func_131(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[i]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_35[i], false))
				{
					func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return false;
				}
			
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_35[i], false))
				{
					func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return false;
				}
			
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_35[i], PLAYER::PLAYER_PED_ID(), false))
				{
					func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return false;
				}
			
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_35[i]) < 850)
				{
					func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return false;
				}
			
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[i], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return false;
						}
					
						playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						if (func_179(playersLastVehicle))
						{
							if (ENTITY::GET_ENTITY_MODEL(playersLastVehicle) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(playersLastVehicle) == joaat("towtruck2"))
							{
								if (func_179(uParam0->f_35[i]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(playersLastVehicle, uParam0->f_35[i]))
									{
										func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return false;
									}
								}
							}
						}
					}
					else
					{
						playersLastVehicle2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					
						if (func_179(playersLastVehicle2))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_35[i], playersLastVehicle2) && ENTITY::GET_ENTITY_SPEED(playersLastVehicle2) > 6f)
							{
								func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return false;
							}
						}
					
						if (*uParam0 == 16)
						{
							if (func_213(PLAYER::PLAYER_PED_ID(), uParam0->f_35[i]))
							{
								func_274("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return false;
							}
						}
					}
				}
			}
		}
	}

	return true;
}

BOOL func_213(Ped pedParam0, Vehicle veParam1) // Position - 0xDE44
{
	Vehicle vehiclePedIsUsing;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(pedParam0);
		
			if (vehiclePedIsUsing == veParam1)
				return true;
		}
	}

	return false;
}

BOOL func_214(var uParam0, BOOL bParam1, int iParam2) // Position - 0xDE74
{
	int i;
	int num;

	if (bParam1)
		num = uParam0->f_28 - 1;
	else
		num = 0;

	if (*uParam0 == 16)
		iParam2 = 1;

	if (*uParam0 == 30)
		iParam2 = 1;

	if (func_131(PLAYER::PLAYER_PED_ID()))
	{
		for (i = 0; i <= num; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[i]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_28[i]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_28[i]))
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							if (_CONVERSATION_IS_DIALOGUE_IN_PROGRESS())
								func_149();
						
							func_274("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return false;
						}
					}
				
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_28[i]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_28[i]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_28[i]))
					{
						if (iParam2 == 0)
							func_209(uParam0);
						else
							func_211(uParam0);
					
						func_274("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return false;
					}
				
					if (PED::IS_PED_RAGDOLL(uParam0->f_28[i]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_28[i], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							func_274("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return false;
						}
					}
				
					if (func_233(*uParam0))
					{
						if (!func_163(*uParam0))
						{
							if (func_228(uParam0->f_28[i], true, false, false, false))
							{
								if (iParam2 == 0)
									func_209(uParam0);
								else
									func_211(uParam0);
							
								func_274("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return false;
							}
						}
					
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[i], true), 15f))
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							func_274("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (func_216(uParam0->f_28[i], 1126825984))
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							func_274("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return false;
						}
					}
				
					if (!func_215(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_28[i], true), 5f))
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							func_274("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return false;
						}
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
								func_209(uParam0);
							else
								func_211(uParam0);
						
							func_274("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return false;
						}
					}
				}
				else
				{
					func_274("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
				
					if (*uParam0 == 34)
					{
						if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(uParam0->f_41[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], true, false);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], false);
						}
					}
				
					return false;
				}
			}
		}
	}

	return true;
}

BOOL func_215(int iParam0) // Position - 0xE130
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 52 || iParam0 == 53)
		return true;

	return false;
}

BOOL func_216(Vehicle veParam0, int iParam1) // Position - 0xE164
{
	float xSize;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
	{
		if (func_227(veParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), veParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam0, xSize, xSize, xSize, false, true, 0))
				if (func_217(veParam0, iParam1))
					return true;
		}
	}

	return false;
}

BOOL func_217(Vehicle veParam0, int iParam1) // Position - 0xE1DA
{
	return func_218(veParam0, PLAYER::PLAYER_PED_ID(), iParam1, 1, 250, 7);
}

BOOL func_218(Vehicle veParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE1F2
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_226(veParam0, pedParam1);

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0) || !_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam1))
	{
		if (num != -1)
			func_225(&iLocal_37[num /*4*/]);
	
		return false;
	}

	if (!func_222(veParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_221();
	
		if (num == -1)
			return false;
	
		iLocal_37[num /*4*/].f_1 = veParam0;
		iLocal_37[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(veParam0, 31086, 0f, 0f, 0f) };
	flag = func_219(&iLocal_37[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_37[num /*4*/].f_3), veParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_37[num /*4*/].f_3 < iParam4;
}

BOOL func_219(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Vehicle veParam6, int iParam7) // Position - 0xE2B3
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_220(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, veParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_78)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		_DOES_ENTITY_EXIST_AND_IS_ALIVE(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_78)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_220(Ped pedParam0, int iParam1) // Position - 0xE3DF
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_221() // Position - 0xE4A4
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/] == 0 && iLocal_37[i /*4*/].f_1 == 0 && iLocal_37[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_222(Vehicle veParam0, Ped pedParam1, int iParam2, int iParam3) // Position - 0xE4EE
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_224(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(veParam0, true)) };

	if (iParam2 < 0.1f || iParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(veParam0) };
	else
		entityForwardVector = { func_224(PED::GET_PED_BONE_COORDS(veParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(veParam0, 31086, 0f, 0f, 0f)) };

	num = func_223(entityForwardVector, unk);

	if (num <= SYSTEM::COS(iParam2 / 2f))
		return false;

	return true;
}

float func_223(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0xE57F
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_224(float fParam0, var uParam1, var uParam2) // Position - 0xE5A0
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_225(var uParam0) // Position - 0xE5DF
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_226(Vehicle veParam0, Ped pedParam1) // Position - 0xE5FA
{
	int i;

	for (i = 0; i < iLocal_37; i = i + 1)
	{
		if (iLocal_37[i /*4*/].f_1 == veParam0 && iLocal_37[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

BOOL func_227(Vehicle veParam0) // Position - 0xE639
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), veParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

BOOL func_228(Vehicle veParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE661
{
	float radius;
	float num;
	int weaponHash;

	radius = 8f;
	num = 15f;

	if (bParam1 == false)
	{
		radius = 1.86f;
		num = 1.86f;
	}

	if (bParam2)
		radius = 2f;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (weaponHash == joaat("WEAPON_PETROLCAN"))
		{
			radius = 3f;
			num = 3f;
		}
	
		if (!bParam2)
		{
			if (func_232(veParam0, bParam1, radius, num))
				return true;
		
			if (func_229(veParam0, num, bParam3, bParam4))
				return true;
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(veParam0, true), radius, true))
						return true;
			}
			else
			{
				if (bParam1)
				{
					radius = 1.86f;
					num = 1.86f;
				}
			
				if (func_232(veParam0, bParam1, radius, num))
					return true;
			}
		
			if (func_229(veParam0, num, bParam3, bParam4))
				return true;
		}
	}

	return false;
}

BOOL func_229(Vehicle veParam0, float fParam1, BOOL bParam2, BOOL bParam3) // Position - 0xE75C
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	num = { entityCoords };
	entityCoords = entityCoords - fParam1;
	entityCoords.f_1 = entityCoords.f_1 - fParam1;
	entityCoords.f_2 = entityCoords.f_2 - fParam1;
	num = num + fParam1;
	num.f_1 = num.f_1 + fParam1;
	num.f_2 = num.f_2 + fParam1;

	if (bParam2)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(veParam0, true), joaat("WEAPON_GRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(veParam0, true), joaat("WEAPON_MOLOTOV"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(veParam0, true), joaat("WEAPON_SMOKEGRENADE"), fParam1, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(veParam0, true), joaat("WEAPON_STICKYBOMB"), 5f, true))
		{
			if (bParam3)
				if (func_230(veParam0, fParam1))
					return true;
				else
					return false;
		
			return true;
		}
	}
	else
	{
		if (bParam3)
			if (func_230(veParam0, fParam1))
				return true;
			else
				return false;
	
		if (MISC::IS_PROJECTILE_IN_AREA(entityCoords, num, true))
			return true;
	}

	return false;
}

BOOL func_230(Vehicle veParam0, float fParam1) // Position - 0xE868
{
	var outProjectile;
	var outCoords;

	if (MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(veParam0, joaat("WEAPON_GRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(veParam0, joaat("WEAPON_SMOKEGRENADE"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(veParam0, joaat("WEAPON_BZGAS"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(veParam0, joaat("WEAPON_STICKYBOMB"), fParam1, &outCoords, &outProjectile, false) || MISC::GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(veParam0, joaat("WEAPON_MOLOTOV"), fParam1, &outCoords, &outProjectile, false))
		if (func_231(veParam0, outCoords, 90f, 0))
			return true;

	return false;
}

BOOL func_231(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5) // Position - 0xE8FD
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_224(uParam1 - ENTITY::GET_ENTITY_COORDS(veParam0, true)) };

	if (fParam4 < 0.1f || fParam4 > 360f)
		return true;

	if (iParam5 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(veParam0) };
	else
		entityForwardVector = { func_224(PED::GET_PED_BONE_COORDS(veParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(veParam0, 31086, 0f, 0f, 0f)) };

	num = func_223(entityForwardVector, unk);

	if (num <= SYSTEM::COS(fParam4 / 2f))
		return false;

	return true;
}

BOOL func_232(Vehicle veParam0, BOOL bParam1, float fParam2, float fParam3) // Position - 0xE98B
{
	if (bParam1)
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam0, fParam3, fParam3, fParam3, false, true, 0))
				return true;

	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(veParam0, true), fParam2, true))
		return true;

	return false;
}

BOOL func_233(int iParam0) // Position - 0xE9D3
{
	if (iParam0 == 2 || iParam0 == 3 || iParam0 == 34 || iParam0 == 11 || iParam0 == 52 || iParam0 == 53)
		return false;

	return true;
}

void func_234(Vehicle veParam0) // Position - 0xEA1D
{
	int taskSequenceId;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
	
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, false, false, false);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(veParam0, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

BOOL func_235(int iParam0) // Position - 0xEABA
{
	if (iParam0 == -1)
		iParam0 = func_171();

	if (iParam0 == -1)
		return true;

	if (func_241(iParam0))
		return false;

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_239(iParam0))
		{
		}
		else
		{
			return true;
		}
	}

	if (func_238() && !func_237())
		return true;

	if (!func_236(iParam0))
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				return true;

	if (!IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 2))
		return true;

	return false;
}

BOOL func_236(int iParam0) // Position - 0xEB4F
{
	if (iParam0 == 5 || iParam0 == 6 || iParam0 == 41 || iParam0 == 60 || iParam0 == 61)
		return true;

	return false;
}

BOOL func_237() // Position - 0xEB8E
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_238() // Position - 0xEBAB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_239(int iParam0) // Position - 0xEBCE
{
	if (func_240() && Global_100681.f_11 == 6 && iParam0 == func_172(&(Global_100681.f_3), 0))
		return true;

	return false;
}

BOOL func_240() // Position - 0xEC02
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

BOOL func_241(int iParam0) // Position - 0xEC40
{
	if (_IS_MISSION_REPEAT_ACTIVE(false))
		if (Global_78805.f_1 == 7)
			if (Global_78805 == iParam0)
				return true;

	return false;
}

BOOL func_242(var uParam0) // Position - 0xEC68
{
	if (!func_243(uParam0))
		return false;

	func_274("Created initial scene");
	return true;
}

BOOL func_243(var uParam0) // Position - 0xEC87
{
	int num;
	int i;
	BOOL flag;

	num = 3;
	num[0] = hLocal_92;
	num[1] = joaat("dune");
	num[2] = joaat("prop_crate_07a");

	switch (iLocal_91)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_27 = 0;
			uParam0->f_26 = 1;
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_9), "sas_1_rcm_concat", 24);
		
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::REQUEST_MODEL(num[i]);
			}
		
			STREAMING::REQUEST_ANIM_DICT("rcmlastone1");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SNIPERRIFLE"), 31, 0);
			iLocal_91 = 1;
			break;
	
		case 1:
			if (!func_246(&num) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmlastone1") || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SNIPERRIFLE")))
				return false;
		
			iLocal_91 = 2;
			break;
	
		case 2:
			flag = true;
			uParam0->f_28[0] = PED::CREATE_PED(PED_TYPE_SPECIAL, hLocal_92, -1299.02f, 4639.86f, 106.66f, 345.7769f, true, true);
		
			if (func_131(uParam0->f_28[0]))
			{
				WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("WEAPON_SNIPERRIFLE"), 100, true, true);
				TASK::TASK_PLAY_ANIM(uParam0->f_28[0], "rcmlastone1", "idle_action_01", 8f, -8f, -1, 1, 0, false, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[0], true);
			}
			else
			{
				flag = false;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				func_244(&uParam0->f_35[0], num[1], -1303.1628f, 4648.085f, 104.9664f, 293.1504f);
			
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 0);
				else
					flag = false;
			}
		
			if (flag)
				iLocal_91 = 3;
			break;
	
		case 3:
			for (i = 0; i <= num - 1; i = i + 1)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(num[i]);
			}
		
			return true;
	}

	return false;
}

void func_244(Vehicle* pveParam0, Hash hParam1, float fParam2, float fParam3, float fParam4, float fParam5) // Position - 0xEE73
{
	func_245(pveParam0);
	*pveParam0 = VEHICLE::CREATE_VEHICLE(hParam1, fParam2, fParam5, true, true, false);

	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*pveParam0, 1084227584);
		ENTITY::SET_ENTITY_HEALTH(*pveParam0, 1000, 0);
	}

	return;
}

void func_245(Vehicle* pveParam0) // Position - 0xEEB5
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (func_179(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

BOOL func_246(var uParam0) // Position - 0xEF51
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->[i]))
			return false;
	}

	return true;
}

BOOL func_247(int iParam0) // Position - 0xEF82
{
	var unk;
	eCharacter character;

	func_115(iParam0, &unk);
	character = _GET_CURRENT_PLAYER_CHARACTER_0();

	if (character == _CHAR_NULL)
		return true;
	else if (character != CHAR_FRANKLIN && character != CHAR_MICHAEL && character != CHAR_TREVOR)
		return true;

	if (!IS_BIT_SET(unk.f_26, character))
		return true;

	return false;
}

BOOL func_248(int iParam0) // Position - 0xEFD3
{
	const char* string2;

	if (Global_78558)
	{
		func_274("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return false;
	}

	if (!Global_113648.f_9087 && !_IS_MISSION_REPEAT_ACTIVE(true))
	{
		func_274("STEP_3_COMMON_CanRCLaunch - Script denied, game flow is not active");
		return false;
	}

	if (!func_249(iParam0))
	{
		Global_112735[iParam0 /*10*/].f_1 = 1;
		func_274("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return false;
	}

	if (Global_100681.f_11 == 6)
	{
		if (Global_100681 < 9)
		{
			func_115(iParam0, &string2);
		
			if (MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), string2))
			{
				func_274("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return false;
			}
		}
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("candidate_controller")) == 0)
	{
		Global_112735[iParam0 /*10*/].f_1 = 1;
		func_274("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return false;
	}

	return true;
}

BOOL func_249(int iParam0) // Position - 0xF08C
{
	var unk;

	func_115(iParam0, &unk);

	if (!_CAN_ENTER_FREEROAM_STATE(4))
	{
		if (func_239(iParam0))
		{
		}
		else
		{
			return false;
		}
	}

	if (func_238() && !func_237())
		return false;

	if (func_255(iParam0))
		return false;

	if (iParam0 == -1)
		iParam0 = func_171();

	if (iParam0 == -1)
		return false;

	if (!func_241(iParam0))
	{
		if (!func_254(iParam0))
			return false;
	
		if (!func_253(iParam0))
			return false;
	
		if (func_252(iParam0))
			return false;
	}

	if (iParam0 == 58)
		if (func_250(5))
			Global_112735[iParam0 /*10*/].f_3 = 0;

	if (Global_112735[iParam0 /*10*/].f_3 == 1)
		return false;

	return true;
}

BOOL func_250(int iParam0) // Position - 0xF14D
{
	int i;
	var interiorType;
	Interior interiorAtCoordsWithType;

	if (Global_100733.f_385 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_250(i))
				return true;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_251(iParam0, &interiorType);
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95719[iParam0 /*10*/].f_3, &interiorType);
	
		if (interiorAtCoordsWithType != 0 && Global_100733.f_385 == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_251(int iParam0, char* sParam1) // Position - 0xF1D2
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

BOOL func_252(int iParam0) // Position - 0xF2B4
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}

BOOL func_253(int iParam0) // Position - 0xF2DF
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 2);
}

BOOL func_254(int iParam0) // Position - 0xF30A
{
	if (iParam0 == 63 || iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 0);
}

BOOL func_255(int iParam0) // Position - 0xF335
{
	if (func_236(iParam0))
		return false;
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			return true;

	return false;
}

void func_256() // Position - 0xF36A
{
	func_274("Running end routines.");
	Global_113366 = Global_113366 - 1;
	return;
}

BOOL func_257(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0xF384
{
	int i;

	if (*uParam0 == 1)
	{
		if (func_258(uParam0->[0], uParam2, fParam5, uParam1))
			return true;
	}
	else
	{
		for (i = 0; i < *uParam0; i = i + 1)
		{
			if (func_258(uParam0->[i], uParam2, fParam5, uParam1))
			{
				i = *uParam0;
				return true;
			}
		}
	}

	func_274("DETERMINE_RC_TO_LAUNCH - Unable to find mission to launch [TERMINATING]");
	return false;
}

BOOL func_258(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, var uParam5) // Position - 0xF3E9
{
	int num;
	char* str;

	num = 0;
	func_115(iParam0, &str);

	if (func_259(str.f_6, uParam1, fParam4, false))
	{
		if (IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 0))
			if (!IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3))
				num = 1;
	
		if (func_241(iParam0))
			num = 1;
	}

	if (num == 1)
	{
		*uParam5 = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam5->f_1), str, 32);
		return true;
	}

	return false;
}

BOOL func_259(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0xF461
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
			if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
				if (MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
					return true;
	else if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			return true;

	return false;
}

void func_260(var uParam0, BOOL bParam1) // Position - 0xF4DC
{
	if (bParam1)
	{
		func_274("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_262(uParam0, 0, false, false);
	}

	func_261(&(uParam0->f_48));

	if (iLocal_93 != -1)
	{
		func_274("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_201(&iLocal_93);
	}

	if (bParam1)
		func_203(*uParam0);

	func_256();
	func_274("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

int func_261(var uParam0) // Position - 0xF532
{
	if (func_208(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}

	return 0;
}

void func_262(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF568
{
	func_269(uParam0, iParam1);
	func_266(uParam0, bParam2);
	func_263(uParam0, bParam3);
	return;
}

void func_263(var uParam0, BOOL bParam1) // Position - 0xF588
{
	func_264(&(uParam0->f_41), bParam1);
	return;
}

void func_264(var uParam0, BOOL bParam1) // Position - 0xF59A
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_210(&uParam0->[i]);
		else
			func_265(&uParam0->[i], false);
	}

	return;
}

void func_265(Object* pobParam0, BOOL bParam1) // Position - 0xF5D8
{
	if (ENTITY::DOES_ENTITY_EXIST(*pobParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*pobParam0))
			ENTITY::DETACH_ENTITY(*pobParam0, true, true);
	
		if (!bParam1)
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(pobParam0);
		else
			OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*pobParam0);
	}

	return;
}

void func_266(var uParam0, BOOL bParam1) // Position - 0xF613
{
	func_267(&(uParam0->f_35), bParam1);
	return;
}

void func_267(var uParam0, BOOL bParam1) // Position - 0xF625
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (bParam1)
			func_245(&uParam0->[i]);
		else
			func_268(&uParam0->[i]);
	}

	return;
}

void func_268(Vehicle* pveParam0) // Position - 0xF662
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_269(var uParam0, int iParam1) // Position - 0xF69A
{
	func_270(&(uParam0->f_28), iParam1);
	return;
}

void func_270(var uParam0, int iParam1) // Position - 0xF6AC
{
	int i;

	i = 0;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		if (iParam1 == 1)
			func_272(&uParam0->[i]);
		else
			func_271(&uParam0->[i], false, 1, 0);
	}

	return;
}

void func_271(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Position - 0xF6ED
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_272(Ped* ppedParam0) // Position - 0xF73D
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

void func_273(int iParam0) // Position - 0xF77E
{
	if (*iParam0 == -1)
		return;

	if (!(*iParam0 == Global_43219))
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = false;
	Global_63360 = 0;
	return;
}

void func_274(char* sParam0) // Position - 0xF7BB
{
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
	return;
}

void func_275(var uParam0) // Position - 0xF7CD
{
	*uParam0 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 32);
	uParam0->f_15 = 12f;
	uParam0->f_16 = 6;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	return;
}

void func_276() // Position - 0xF800
{
	func_274("Running start routines.");
	Global_113366 = Global_113366 + 1;
	return;
}

