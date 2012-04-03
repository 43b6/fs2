inherit ROOM;
void create() {
	set( "short", "$CYN$����$NOR$��$MAG$��$YEL$��$HIW$ի$NOR$" );
	set( "build", 10095 );
	set( "owner", "welo" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room164.c",
		"east"      : "/open/clan/red_fire/room/room68.c",
		"west"      : "/open/clan/red_fire/room/room116.c",
		"north"     : "/open/clan/red_fire/room/room135.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
����$CYN$����$NOR$˼������ĵط������ŵİ����������֮
��$RED$����$NOR$�㿪ʼƽ������������������һ��$HIW$СԲ��$NOR$������
��������ȼ�յ�$YEL$̴��$NOR$��һ���˱ǵ���ζ������ȴ���ּ�
��$MAG$����$NOR$���Ա߷����ݲ��õĲ�ߣ������ķÿͿ�������
���ݲ����죬$CYN$����$NOR$�Ǹ��ܺÿ͵�$YEL$��ʿ$NOR$��������׼���ź�
�����ϺõĲ�Ҷ���Ա��ڿ�������֮ʱ���Ժú��д���
�ǣ�ǽ�Ϲ����������Ĵ��ֻ�̯�ռ�������$CYN$�Ż�ī��$NOR$��
�㶨��һ�����Թԡ�����Ȼ����$HIW$������$NOR$��$HIW$����֮$NOR$���˵�
ī����Ӧ����$MAG$��Ʒ$NOR$�ɡ�
LONG);
	setup();
	replace_program(ROOM);
}
