inherit ROOM;
void create() {
	set( "short", "С־�ļ�" );
	set( "owner", "mwf" );
	set( "object", ([
		"amount9"  : 160,
		"amount1"  : 1,
		"file4"    : "/obj/gift/lingzhi",
		"file2"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/quests/snake/npc/obj/snake_gem",
		"amount5"  : 29,
		"file8"    : "/open/fire-hole/obj/w-pill",
		"amount3"  : 1,
		"file5"    : "/open/fire-hole/obj/y-pill",
		"file10"   : "/open/fire-hole/obj/g-pill",
		"amount4"  : 1,
		"file9"    : "/open/fire-hole/obj/r-pill",
		"amount2"  : 1,
		"amount8"  : 38,
		"amount10" : 10,
		"file1"    : "/obj/gift/xiandan",
	]) );
	set( "build", 12169 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room94",
		"enter"     : "/open/clan/13_luck/room/room147",
	]) );
	set( "long", @LONG
�˴�����������[0;1;35m��[1mC[1m��[1m��[0m���ڵ��ϳ����˽��ۣ�������
�����������˺ܾõ����ӣ���ϸһ��ԭ����[0;1;33m��[1mQ[1m��[1mT[1m��[1mN[1m��[1m��[0m��
           ��[0;1;36m��[1mC[1m��[1m��[1m��[1m��[1m��[1m��[0m��[0;1;31m��[1mp[1m��[1m��[1m��[1mM[1m��[1m��[1m��[1m��[1m��[1m��[0m
�ڵ�����һ��ʯ������д�ţ�
      ����������...ֻ��һ��·  
               ��[0;1;31m��[1m��[0m��
            [0;1;36m*[1m^[1m_[1m^[1m*[1m.[1m.[1m��[1mp[1m��[1m��[1m.[1m.[0m
LONG);
	setup();
	replace_program(ROOM);
}
