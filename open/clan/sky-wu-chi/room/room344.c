inherit ROOM;
void create() {
	set( "short", "��Pill���ղ�һ��" );
	set( "owner", "bbsman" );
	set( "object", ([
		"amount4"  : 4,
		"amount2"  : 130,
		"amount6"  : 193,
		"amount7"  : 1,
		"file3"    : "/open/doctor/pill/sky_pill",
		"file7"    : "/open/mogi/castle/obj/sholo-shield",
		"amount3"  : 156,
		"file5"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 155,
		"file2"    : "/open/doctor/pill/gnd_pill",
		"file1"    : "/open/doctor/pill/human_pill",
		"amount5"  : 1,
		"file4"    : "/open/ping/obj/poison_pill",
		"file6"    : "/open/doctor/pill/ice_pill",
	]) );
	set( "build", 12378 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room122.c",
		"north"     : "/open/clan/sky-wu-chi/room/room290",
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
