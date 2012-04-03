inherit ROOM;
void create() {
	set( "short", "ʥ���" );
	set( "owner", "gifa" );
	set( "object", ([
		"file10"   : "/daemon/class/fighter/armband",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"amount9"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/prayer/obj/boris-cloth",
		"amount2"  : 1,
		"amount10" : 1,
		"file8"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"amount6"  : 1,
		"file5"    : "/open/mogi/castle/obj/fire-king-head",
		"file2"    : "/open/capital/guard/gring",
		"amount5"  : 1,
		"amount1"  : 1,
		"amount8"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/magic-manor/obj/evil-kill-claw",
		"file3"    : "/open/ping/questsfan/obj/dagger1",
	]) );
	set( "build", 11313 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room94",
		"west"      : "/open/clan/sky-wu-chi/room/room297",
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "long", @LONG
����ֹ�� ������

���ʣ��½���/�����䡡�������̵���/�����񡡱�����������

�����ˡ����Ǿ�Ȼ��֪��ε���
���Ƕ�Ц�ˡ��Ѿ����벻ͬ���ټ�
���Ǻ���Ҳ���ԡ�ӵ������Ҳ����
��˵��ɫ��ô��������������һ����

�����ˡ�����ڶ���ƴ���ش�����
�ҿ��Ըо����������ڳ���������
�����ߵ�̫�ִ١��Ҹ������ϽŲ�
���������Ի򲻶ԡ����Ҷ��Զ����ִ���

�ܲ����ñ���ֹ����ͣ�����Ҹ�ԭ��
��Ŭ��׷�𡡲ŷ��֊�Ҳһ������

�ܲ����ñ���ֹ�����ص���ʶ�����
������ǲ��ʸ�����Ҳ����ῴ�ø����



LONG);
	setup();
	replace_program(ROOM);
}
