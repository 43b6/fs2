// Room : /open/clan/ou-cloud-club/room/room53.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����о���$NOR$" );
	set( "build", 10815 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "down" : "/open/clan/ou-cloud-club/room/room19",
  "up" : "/open/clan/ou-cloud-club/room/room52",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
���ƺ�������������һ��һ��Э���Ĵ�����е��ת��,
������ӵ���ƾ���ʷ�Ĺű�֮�������Ե�ͻأ,�����ǵ¹���
�����һֱʹ��ħ��������,�����Ի�еȡ��ħ�������İ�!!
�����������н����о��Լ���Щװ�õĴ�����!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
