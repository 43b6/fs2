inherit ROOM;
void create() {
	set( "short", "[1;37m��[1;36m���ڶ�[1;37m��[0m" );
	set( "object", ([
		"amount9"  : 1,
		"file6"    : "/open/tendo/obj/chaosbelt",
		"file4"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"amount10" : 1,
		"amount2"  : 1,
		"file7"    : "/open/wu/npc/obj/armband",
		"file10"   : "/daemon/class/fighter/figring",
		"amount6"  : 1,
		"file8"    : "/open/wind-rain/obj/sun_red_cloth",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"amount1"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"amount4"  : 1,
		"amount8"  : 1,
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file3"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room206",
	]) );
	set( "owner", "roboo" );
	set( "build", 10026 );
	set( "long", @LONG

    [30;47m����������������֮��                [0m------------------------------------
    ------------------------------------[30;47m              ʮ�����˵��赸�ո���Ļ[0m
    [30;47m��ȡ����֮�ĵƻ�                    [0m------------------------------------
    ------------------------------------[30;47m                    ���źڰ��е�ө��[0m
    [30;47m��ɬ�ľ������븹��                  [0m------------------------------------
    ------------------------------------[30;47m                  ����Ĵ�ʹϴȥ��ɬ[0m
    [30;47m���̵ĺ�ɫ����ǰ����                [0m------------------------------------
    ------------------------------------[30;47m                  ��ɫ��ģ����������[0m
    [30;47m��ٵ�����֮�齫���ر�              [0m------------------------------------
    ------------------------------------[30;47m                �����߽�����Ĺ�ذ�Ϣ[0m

LONG);
	setup();
	replace_program(ROOM);
}
