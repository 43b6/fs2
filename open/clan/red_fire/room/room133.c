inherit ROOM;
void create() {
	set( "short", "$HIM$���$HIW$��$HIR$ɱ��$HIC$��$NOR$" );
	set( "object", ([
		"amount4"  : 40000,
		"file4"    : "/open/killer/obj/hate_knife",
		"file3"    : "/open/killer/obj/hate_knife",
		"amount5"  : 50000,
		"file2"    : "/open/killer/obj/hate_knife",
		"amount6"  : 50000,
		"amount2"  : 30000,
		"amount3"  : 20000,
		"file6"    : "/open/killer/obj/hate_knife",
		"file5"    : "/open/killer/obj/hate_knife",
	]) );
	set( "owner", "pipi" );
	set( "build", 10020 );
	set( "exits", ([
		"east"      : "/open/clan/red_fire/room/room85",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG

һ��������������ܣ��Ͼ�������һ�ſŵ�$HIR$��ͷ$NOR$������ϸһ�����ϵ�$HIR$��ͷ$NOR$
��$HIC$����$NOR$�ж��Ǻպ���������������е�$HIC$��$NOR$ȴ�W�����Դ˵����˵ĺ��澿
���Ǻη������ܽ��������ֵ�$HIR$��ͷ$NOR$ȡ������$HIY$����$NOR$����ǰһ�ߣ���Ȼһ�����
ǿ��$HIM$ѹ$HIY$��$HIC$��$NOR$����Ϣ����$HIM$��Ϯ$NOR$������ѹ�ȵ���Դ�����������������ɢ������
�ģ��ѵ������Ǵ˼�����ˡ���������������Լ�$HIW$����$NOR$��$HIR$��ͷ$NOR$��Ψһ���뷨
���ǿ���......��


LONG);
	setup();
	replace_program(ROOM);
}
