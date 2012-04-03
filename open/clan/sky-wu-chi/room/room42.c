inherit ROOM;
void create() {
	set( "short", "$HIW$��$HIB$����$MAG$����$HIR$��$HIW$��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"file5"    : "/open/prayer/obj/boris-boots",
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount3"  : 1,
		"amount7"  : 1,
		"amount10" : 1,
		"file8"    : "/open/snow/obj/figring",
		"file6"    : "/open/scholar/obj/icefan",
		"amount1"  : 1,
		"amount6"  : 1,
		"amount4"  : 1,
		"file10"   : "/open/tendo/obj/chaosbelt",
		"amount8"  : 1,
		"file1"    : "/open/ping/obj/gold_hand",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file4"    : "/open/gsword/obj/yugem",
		"amount9"  : 1,
	]) );
	set( "build", 10080 );
	set( "owner", "enis" );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room9",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�������������ƣ�����һ�źἸ���������ţ�һ�����ʽ��̵ĹŽ���
�ڼ������۱�������һ�����ã������پ���д�����ƴ�ʫ�˼ֵ���һ
��$HIW$�����͡�$NOR$����$HIY$ʮ��ĥһ��$NOR$��$HIR$˪��δ����$NOR$��$HIC$���հ�ʾ��$NOR$��$HIM$˭�в�ƽ��$NOR$
�����������һ����ᣣ�᣺�͸��Щ��ƹ�,��Χ������¶��һ�ɰ�Ȼ
֮��!!ӳ���������㾪�ȵ��Ƕ������ص��书�鼮,��ʾ�˴���������
������ѧ�������Ĺ�!
LONG);
	setup();
	replace_program(ROOM);
}
