inherit ROOM;
void create() {
	set( "short", "�Ͽ�һ��¥" );
	set( "object", ([
		"amount5"  : 1,
		"file5"    : "/open/firedancer/npc/eq/r_cape",
		"amount8"  : 1,
		"file9"    : "/obj/gift/xisuidan",
		"file7"    : "/open/firedancer/npc/eq/r_belt",
		"file1"    : "/open/firedancer/npc/eq/r_head",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/firedancer/npc/eq/r_boots",
		"amount6"  : 1,
		"amount3"  : 1,
		"file4"    : "/open/firedancer/npc/eq/r_cloth",
		"file3"    : "/open/firedancer/npc/eq/r_finger",
		"amount9"  : 1,
		"file2"    : "/open/firedancer/npc/eq/r_hands",
		"amount2"  : 1,
		"file8"    : "/open/firedancer/npc/eq/r_armbands",
		"amount1"  : 1,
	]) );
	set( "owner", "adeyzit" );
	set( "build", 11631 );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room243",
	]) );
	set( "long", @LONG

 M U D�ؾ�����Ϸ������Ҳ��Ҫ��������һ��Ҳ����Ҫ�����������
����ĸ�ĸ��������ţ����Ů�ѣ���ļ�ͥ�������ǻ��ǲ�������
����������FS�ϲ�����ս������ͬŬ���������ɹ�������ɳ���...
[0;1;35m��[1mP[1m��[1m��[1m��[1m��[1m��[1mQ[1m��[1m��[1m��[1m��[1m��[1mA[1;37m [1;36m��[1m@[1m��[1mP[1m��[1mV[1m��[1mO[1m��[1mh[1m��[1mP[1m��[1m��[1;37m [1m [1;33m��[1mp[1m��[1m��[1m��[1m^[1m��[1mQ[1m��[1m��[1m��[1mw[1m��[1m��[1;37m [1;32m��[1mW[1m��[1m��[1m��[1mw[1m��[1m��[1m��[1mo[1m��[1m@[1m��[1m��[0m
[0;1;32;42m��[1m@[1m��[1m��[1m��[1m`[1m��[1mO[1m��[1m��[1m��[1m��[1m��[1mY[1;37;40m [1;35;41m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mO[1m��[1m��[1m��[1m��[1;37;40m [1m [1;36;44m��[1m��[1m��[1mQ[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1m��[1mL[1;37;40m [1;31;47m��[1mn[1m��[1m_[1m��[1m��[1m��[1m��[0;1;5;33;40m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m@[0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [0m
[0;1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [1m [0;1;5;33m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mN[1;5m��[1;5m��[1;5m��[1;5mH[0m

LONG);
	setup();
	replace_program(ROOM);
}
