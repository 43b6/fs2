inherit ROOM;
void create() {
	set( "short", "$HIC$��$YEL$����$HIW$·$HIC$��$NOR$" );
	set( "exits", ([
		"north"     : "/open/clan/red_fire/room/room138",
		"south"     : "/open/clan/red_fire/room/room127.c",
	]) );
	set( "outdoors", "/open/clan/red_fire" );
	set( "long", @LONG
����������ߵ�һ������$YEL$��Ţ$NOR$��Ұ��$HIW$С·$NOR$����ʱ���ие�һ����
���������$HIR$ð��$HIM$����$NOR$��Ȼʹ�������ǰ������������ȴ��������Ǵ粽��
�У����з�����һ���������ߵ���ͷ�����ڴ�ʱ����ȴ����$HIC$����$NOR$��һ��$HIY$��
��$NOR$��ʹ����Ҫ��ȥ���ߣ�������Ҳ�ӿ��˽Ų�����Ҫ�Ͽ��뿪��ٲ�����
��$WHT$��ط�$NOR$��


LONG);
	setup();
	replace_program(ROOM);
}
