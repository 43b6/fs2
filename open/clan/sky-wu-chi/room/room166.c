inherit ROOM;
void create() {
	set( "short", "ɽ��С·" );
	set( "object", ([
		"file8"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file9"    : "/open/ping/obj/gold_hand",
		"amount2"  : 1,
		"file4"    : "/open/dancer/obj/maple_ribbon",
		"amount6"  : 4,
		"amount3"  : 1,
		"amount9"  : 1,
		"file2"    : "/open/killer/obj/k_ring",
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"file10"   : "/open/ping/obj/chilin_legging",
		"file5"    : "/daemon/class/dancer/bee_flute",
		"file6"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 1,
		"amount10" : 1,
		"amount1"  : 31,
		"file7"    : "/daemon/class/blademan/obj/shield",
		"file1"    : "/open/marksman/obj/super_pill",
		"amount8"  : 1,
		"amount7"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10880 );
	set( "owner", "herononame" );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/room163",
	]) );
	set( "long", @LONG
�����Ǵ���ɽ���£��������ľ���˵���ﲻ���羰��
������˵�������ɳ�ûร�����㻳�ų�ʥ�������������
�����������ܿ�����˵�е����ɣ�����ɽ���С·�ϣ�����
�����˴��к�ͯ��˵�Ļ������ϴ�����ɽ�Ͽ���һλ������
����Ү����������úÿ�ร�������Ů�·�һ�������뵽
�⣬�㲻���ӿ��˽Ų�����ɽ����ȥ��
LONG);
	setup();
	replace_program(ROOM);
}
