inherit ROOM;
void create() {
	set( "short", "$HIC$��ҽҩ����ר��$NOR$" );
	set( "owner", "peiyi" );
	set( "object", ([
		"file4"    : "/open/mon/obj/ghost-legging",
		"amount8"  : 15,
		"amount2"  : 1,
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file3"    : "/open/mon/obj/ghost-helmet",
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount4"  : 1,
		"amount5"  : 1,
		"file2"    : "/open/magic-manor/obj/fire-ball",
		"amount10" : 1,
		"amount1"  : 1,
		"file1"    : "/open/magic-manor/obj/wood-ball",
		"file7"    : "/open/doctor/pill/ice_pill",
		"file9"    : "/open/doctor/pill/ff_pill",
		"file10"   : "/open/capital/guard/gring",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"amount3"  : 1,
		"amount7"  : 198,
		"amount9"  : 123,
		"amount6"  : 1,
	]) );
	set( "build", 10231 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room226",
	]) );
	set( "long", @LONG
    ��򿪱��ߵ�С���ӣ�ӭ���˱Ƕ�������һ���󵭵�����ĵ�ҩζ
�����������������С��������ղص�������ҩ����������ϸ�Ĺ۲죬
���Է�����ʵ���滹����һЩ�ܡ��ҳ�����ҩ�����ǻָ��������ָ�״
̬�ȵ�ƽ���ɼ���ҩ����ҩƷ���Աߣ�Ҳ����һЩ��Ȥ�ı���ر��
����������������õı����һЩ������С�������θ��أ������
�����Ƚ���������̽������������ģ���һЩ���㿴Ҳû�����Ķ�����
�������˺�����Щ�Ǵ��������ġ�
LONG);
	setup();
	replace_program(ROOM);
}
