inherit ROOM;
void create() {
	set( "short", "$HIC$��$HIR$��Ҷ$HIM$��$HIG$��$HIY$��$HIC$��$NOR$" );
	set( "exits", ([
		"northeast" : "/open/clan/red_fire/room/room142.c",
		"northwest" : "/open/clan/red_fire/room/room138",
		"southwest" : "/open/clan/red_fire/room/room150",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
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
