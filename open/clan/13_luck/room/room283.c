inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "konanii" );
	set( "object", ([
		"amount9"  : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/wind-rain/obj/sun_red_cloth",
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"amount5"  : 1,
		"file5"    : "/open/mogi/castle/obj/lochagem",
		"file9"    : "/daemon/class/blademan/obj/shield",
		"amount3"  : 1,
		"amount1"  : 1,
		"file4"    : "/open/wu/npc/obj/armband",
		"file6"    : "/open/tendo/obj/chaosbelt",
		"file2"    : "/daemon/class/fighter/figring",
	]) );
	set( "build", 10044 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room267",
	]) );
	set( "long", @LONG

    ���������������ĵط����ǳ������Ű�������ȫ�ž���������
�ţ������ڹ���ɾ����ܵ����Ŷ��߻���ħ�����ܳ����Ÿ�ʽ��ˮ��
����˵�������������о��Եİ���������������һЩ�ĸ������ߣ���
װ�������������°빦����Ч����


LONG);
	setup();
	replace_program(ROOM);
}
