inherit ROOM;
void create() {
	set( "short", "��Item���ղ�һ��" );
	set( "object", ([
		"amount4"  : 149,
		"file1"    : "/obj/gift/xiandan",
		"amount6"  : 1,
		"file8"    : "/open/mogi/castle/obj/fire_book",
		"file5"    : "/open/doctor/item/sick_item",
		"amount5"  : 395,
		"amount1"  : 1,
		"amount3"  : 176,
		"amount2"  : 165,
		"file3"    : "/open/doctor/item/ground_item",
		"amount8"  : 1,
		"file4"    : "/open/doctor/item/human_item",
		"file2"    : "/open/doctor/item/sky_item",
		"file6"    : "/open/killer/obj/kill_yar_head",
	]) );
	set( "build", 10040 );
	set( "light_up", 1 );
	set( "owner", "bbsman" );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room342",
		"north"     : "/open/clan/sky-wu-chi/room/room122.c",
	]) );
	set( "long", @LONG
�����ղ��š����������Ӹ����ռ������ĵ�ҩ����ɽ
ѩ�����������Q������������������ĳ�����Ʒ������һ
Щ�����ĵ�ҩ�⣬�����Ҳ�ж���ϡ��ĵ�ҩ��Ҳ����
����������һ�¡�������б��˺��Ӳ��۵ľ�װ�����ǲ�
��Ŀ�����
LONG);
	setup();
	replace_program(ROOM);
}
