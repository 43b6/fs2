inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��Ҷ$HIM$��$HIG$��$HIY$��$HIC$��$NOR$" );
	set( "outdoors", "/open/clan/red_fire" );
	set( "exits", ([
		"northeast" : "/open/clan/red_fire/room/room144.c",
		"northwest" : "/open/clan/red_fire/room/room149",
		"southwest" : "/open/clan/red_fire/room/room139.c",
	]) );
	set( "long", @LONG
                ������
        ��������������������$HIM$������$HIR$��$HIG$Ҷ$HIY$��$HIM$������$NOR$��

        ��һ̤����Ƭ$HIR$��$HIG$Ҷ$HIY$��$NOR$֮�У��������ܵ�$HIR$��Ҷ$NOR$��ͣ��$HIW$Ʈ��$NOR$������Ŀ��Ͼ
        �����ֲ����$HIC$��$HIM$��$HIR$��$HIY$��$NOR$�ķ��򣬴˿���ӽ��Ų�ֻ����ٵ�ͨ������
        ��������һ��·֮�󣬲�������ط��е�һ��$WHT$�־�$NOR$�������ܵľ�ɫ��
        Ȼ��ȫһ������......��


LONG);
	setup();
	replace_program(ROOM);
}
