// Room : /open/clan/ou-cloud-club/room/room36.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ�� $HIR$���$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
��Խһ��Ƭ��᫵�ɭ��ɽ·֮��,�������˶�ħ�ǵĴ���֮ǰ,
����������Ű�,��Ȼ�м����������Ĳ���,�����������ܲ�����
а�������Ĵ����˳�,ֱ��������,��û��һ������ҵ,�����޷�
�Ӵ˳�����,��Ϊ���������ѹ�ȸо�����˵ľ޴�!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "southeast" : "/open/clan/ou-cloud-club/room/room35",
  "enter" : "/open/clan/ou-cloud-club/room/room37",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
