inherit ROOM;
void create() {
	set( "short", "˽�ع�" );
	set( "object", ([
		"file6"    : "/daemon/class/blademan/obj/shield",
		"file3"    : "/open/mon/obj/ghost-legging",
		"file1"    : "/daemon/class/fighter/armband",
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount6"  : 1,
		"amount8"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"file4"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"amount10" : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file5"    : "/open/tendo/obj/chaosbelt",
		"amount4"  : 1,
		"amount1"  : 1,
		"file10"   : "/open/sky/obj/lucky_grasslink",
		"amount3"  : 1,
		"file2"    : "/open/mon/obj/ghost-cloak",
	]) );
	set( "owner", "saysay" );
	set( "build", 10181 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room119.c",
	]) );
	set( "long", @LONG
�˴����Ž���ʮ���޵�˽�ط��ߣ����������������ã�����
�ڵ��н��ϸ��¥�Ǵ�����$HIR$Ϧϼ��ɴ$NOR$��ħ���ŵ�$HIC$ħ����$NOR$��������
�����ϵ�$HIY$��������$NOR$��$HIY$ͷ��$NOR$��$HIY$��ϥ$NOR$������ɽ�������$HIR$���ױۻ�$NOR$��$HIY$��
��������$NOR$�����������������$YEL$��������$NOR$��$HIC$��ɲŮ��$NOR$��$HIY$���˲ݻ�$NOR$��

LONG);
	setup();
	replace_program(ROOM);
}
