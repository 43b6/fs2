// Room : /open/clan/ou-cloud-club/room/room66.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "west" : "/open/clan/ou-cloud-club/room/room64",
  "up" : "/open/clan/ou-cloud-club/room/room67.c",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
������ͱڿӿӶ�����,�����Ե������˴�������ǽ����,
Ȼ��,��˸��ʶ�ֱ��һ��ǽ,�����������Ṧ�޷��쵽,
ֻҪһ����С��ʧ�����,�������ǰһ������ȱ�ĺ��ǰ�,
ˤ���ķ�����,�����촦,��������������ȥ������!?
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
