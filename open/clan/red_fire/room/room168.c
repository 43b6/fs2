inherit ROOM;
void create() {
	set( "short", "$HIR$С����$NOR$��$HIM$�뷿$NOR$" );
	set( "build", 10318 );
	set( "owner", "kitty" );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room82",
	]) );
	set( "long", @LONG

������$HIR$С����$NOR$��$HIM$�뷿$NOR$,��һ�߽��������￴����ȫ��$HIR$С����$NOR$��
�����Ա��$HIC$���ٰ�$NOR$��$HIR$������$NOR$��$RED$�����$NOR$��$HIM$������$NOR$��$HIB$���ٸ�$NOR$��$HIG$����
��$NOR$�ȡ����ﻶӭ$HIR$С����$NOR$�ĺ��������档��������㻳�ж����
�����ٺ�....$HIR$С����$NOR$һ���˿ɲ��Ǻ��۸��ģ����ǿ��ǻ����
���$HIY$èצ$NOR$��ࡡ�


LONG);
	setup();
	replace_program(ROOM);
}
