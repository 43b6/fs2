inherit ROOM;
void create() {
	set( "short", "�����׵�ר��MOB��" );
	set( "owner", "mudu" );
	set( "object", ([
		"file1"    : "/open/main/obj/m_cloak",
		"amount9"  : 1,
		"amount1"  : 1,
		"amount2"  : 1,
		"amount3"  : 1,
		"file5"    : "/open/gsword/obj1/ring",
		"amount5"  : 1,
		"file4"    : "/open/gsword/obj1/ring",
		"file2"    : "/open/main/obj/bird_legging",
		"amount4"  : 1,
		"file9"    : "/open/mogi/castle/obj/fire-king-head",
		"file3"    : "/open/gsword/obj/dragon-sword",
	]) );
	set( "build", 10028 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room209",
	]) );
	set( "long", @LONG
����$HIR$��³��$NOR$���������ĵط�����������Ȩ������������
������������ʿ����ļ�����������������Ի�󷨣�ʹ����
��һһ����$YEL$���ǲ���$NOR$��״̬������ֻ������$HIR$��³��$NOR$һ�ˣ���
��������ר��������
LONG);
	setup();
	replace_program(ROOM);
}
