inherit ROOM;
void create() {
	set( "short", "�쳾��" );
	set( "light_up", 1 );
	set( "exits", ([
		"down"      : "/open/clan/13_luck/room/room129",
		"up"        : "/open/clan/13_luck/room/room115.c",
		"out"       : "/open/clan/13_luck/room/room40.c",
	]) );
	set( "long", @LONG

$HIC$���ϰ���һ���裬����һ����������ζɢ�������ܣ����ָо�������
����Ʈ��Ļ�ѩ�ڿ������������£���������������˼������⣬˪
ѩ������$HIR$���쳾�ӡ�$HIC$���ݶ���ʮ������������پ����ڴˣ�̤���ſ�
��ǰһ�����㲻����Ȼһ����ԭ��ǽ�ϸ߹��˶��������ǡ�$NOR$

       $HIW$��������Ⱥ�ۺ���࡫��$NOR$
                               $HIW$����$HIY$ʮ������$HIW$��Ⱥ�ۡ���$NOR$

LONG);
	setup();
	replace_program(ROOM);
}
