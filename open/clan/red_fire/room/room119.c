inherit ROOM;
void create() {
	set( "short", "$HIR$޹$HIG$��$HIC$ˮ$HIY$�$NOR$" );
	set( "build", 524 );
	set( "light_up", 1 );
	set( "owner", "haur" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room75",
	]) );
	set( "long", @LONG
����С������˼���ĵط�....
����������ŵ�ԭ��...ľͷ...��ʯ...���Եȵ�...
�������������ڸ��µĶ�������...��С���������������ڴ���...

ѩԭ�������...���йµ���һ��...������Ӱ������...��Х����������...
LONG);
	setup();
	replace_program(ROOM);
}
