inherit ROOM;
void create() {
	set( "short", "$HIC$��С�������䡿$NOR$" );
	set( "owner", "peiyi" );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "object", ([
		"file4"    : "/obj/gift/bingtang",
		"amount8"  : 1,
		"file6"    : "/open/doctor/pill/g_pill",
		"amount2"  : 1,
		"file3"    : "/open/doctor/pill/taii_pill",
		"amount5"  : 1,
		"file8"    : "/open/mogi/dragon/obj/key",
		"amount4"  : 1,
		"file2"    : "/open/killer/obj/k_ring",
		"amount10" : 1,
		"amount1"  : 1,
		"file1"    : "/open/poison/obj/feather",
		"file7"    : "/obj/gift/bingtang",
		"file9"    : "/open/mogi/castle/obj/lochagem",
		"file10"   : "/obj/gift/hobowdan",
		"file5"    : "/open/killer/obj/k_ring",
		"amount3"  : 287,
		"amount7"  : 1,
		"amount6"  : 287,
		"amount9"  : 1,
	]) );
	set( "build", 11616 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room303.c",
		"south"     : "/open/clan/sky-wu-chi/room/room74.c",
		"east"      : "/open/clan/sky-wu-chi/room/room311.c",
		"west"      : "/open/clan/sky-wu-chi/room/room302.c",
	]) );
	set( "long", @LONG
�ò����׼������СС�Ŀռ䣬�������ܶ���Ů���ӵ����ССֻ������һ
����ת��Ŀռ����Ȼ�ܷŵ�����ǧ�׵ķ�װ��ֻ��ΪС��ķ�װҲ��СС�ġ�
�ڽ��ŵ����ֱ��������ŵ��¼ܣ�����ŵ���С�����ʱ����ƯƯ�·�����Щ�е�
����С����˵��ղأ���û�д�������ǰ��������Ĺ��ӣ�����ŵ���С�������
���ﻹ��һЩ���˵���Ʒ��������һ��ҽҩ�䣬�������һЩ�����ҩ�����һ
ЩС�������صı����������ֱ�����ŵ���С������ʱ���������װ������һЩ
���з�������ڵ��Ǻü��ŵ�Ь�ӣ���ʽ����������ɫ��
LONG);
	setup();
	replace_program(ROOM);
}
