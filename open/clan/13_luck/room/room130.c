inherit ROOM;
void create() {
	set( "short", "�����" );
	set( "object", ([
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file3"    : "/open/magic-manor/obj/hwa-je-icer",
		"file10"   : "/open/magic-manor/obj/magic-sign",
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount4"  : 1,
		"amount1"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"amount2"  : 1,
		"amount10" : 1,
		"file5"    : "/open/magic-manor/obj/hwa-je-icer",
		"amount8"  : 1,
		"file6"    : "/open/magic-manor/obj/hwa-je-icer",
		"file7"    : "/open/magic-manor/obj/hwa-je-icer",
		"file4"    : "/open/magic-manor/obj/hwa-je-icer",
		"file9"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "owner", "binch" );
	set( "build", 10109 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room134.c",
		"north"     : "/open/clan/13_luck/room/room232",
	]) );
	set( "long", @LONG

[0;1m [1m [1m [1m [1;32m��[1m��[1m��[1mI[1m��[1mI[1m��[1m��[1m��[1mj[1m��[1mA[1m��[1mo[1m��[1md[1m��[1m��[1m��[1mU[1m��[1m@[1m��[1mI[1;36;44m��[1m��[1m��[1m��[1;32;40m��[1mA[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1m��[0m
[0;1;32m��[1m��[1m��[1mA[1m��[1m��[1m��[1mD[1m��[1mN[1m��[1mo[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m|[1m��[1mB[1m��[1my[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m\[1m��[1m��[1m��[1md[1m��[1mU[1m��[1mF[1m��[1m��[1m��[1mA[1m��[1m][1m��[1md[1m��[1mU[1m��[1mF[1m��[1mL[0m
[0;1;32m��[1m��[1;33m��[1m��[1m��[1m��[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m@[1m��[1m��[1;32m��[1mA[1m��[1mb[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1mL[1m��[1m|[1m��[1m\[1m��[1mF[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1mA[1m��[1m��[1m��[1mb[1m��[1m��[1m��[1mH[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1mw[1m��[1mg[1;37;43m��[1m��[1m��[1ms[0m
[0;1;37;43m��[1m��[1m��[1mH[1;32;40m��[1mF[1m��[1mA[1m��[1mb[1m��[1mo[1m��[1m��[1m��[1mH[1m��[1mL[1m��[1m��[1m��[1m`[1m��[1mu[1m��[1m��[1m��[1m��[1m��[1mL[1m��[1m��[1m��[1m��[1m��[1m@[1m��[1my[1m��[1m��[1m��[1mA[0;1;4;5;36;45m��[1;4;5m��[0;1;32;40m [1m~[1;35m��[1ml[1m��[1mD[1m��[1m��[1m��[1mN[1m��[1m��[1m��[1m��[1m��[1mN[1m��[1mR[1;32m��[1mC[0m


LONG);
	setup();
	replace_program(ROOM);
}
