inherit ROOM;
void create() {
	set( "short", "������ҽ����" );
	set( "owner", "force" );
	set( "object", ([
		"amount8"  : 1,
		"file4"    : "/open/mogi/castle/obj/lochagem",
		"file6"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/dragon/obj/scale",
		"amount9"  : 1,
		"file8"    : "/open/mogi/dragon/obj/scale",
		"amount4"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount10" : 1,
		"amount6"  : 1,
	]) );
	set( "build", 10023 );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room71",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�㿴�������Ϸ�����һ���Ҷ�����ĸ�������֡�$HIR$���ֻش�$NOR$����
�㲻�����Բ��룬���������ҽ��Ӧ���Ǹ�$HIW$�ݽ�ɫ$NOR$�����߽���ߣ�
ǽ�������Ž�״�����ǳ���ҽ����ҽ���߳������⣬������һ��$HIC$��
Ŀ��$NOR$������д�ţ�
������������$HIW$û�����������������������
�������������㲡���������������������
�������������������������������������$NOR$

�㿴��$HIC$��Ŀ��$NOR$�������룬������Ҹ�����$HIR$�ڵ�$NOR$�����������ȥ���
ҽԺ��

LONG);
	setup();
	replace_program(ROOM);
}
