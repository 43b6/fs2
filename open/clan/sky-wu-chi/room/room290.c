inherit ROOM;
void create() {
	set( "short", "��Pill���ղض���" );
	set( "owner", "bbsman" );
	set( "object", ([
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount7"  : 1,
		"amount3"  : 12,
		"amount2"  : 1,
		"file4"    : "/open/doctor/pill/gnd_pill",
		"file3"    : "/open/doctor/pill/human_pill",
		"amount6"  : 6,
		"file7"    : "/open/mogi/castle/obj/sspill",
		"amount5"  : 1,
		"amount1"  : 2,
		"file6"    : "/open/doctor/pill/gnd_pill",
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file1"    : "/open/doctor/pill/sky_pill",
		"amount4"  : 10,
	]) );
	set( "build", 10072 );
	set( "light_up", 1 );
	set( "exits", ([
		"south"     : "/open/clan/sky-wu-chi/room/room344",
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
