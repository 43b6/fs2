// Room : /open/clan/ou-cloud-club/room/room67.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�����������$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "down" : "/open/clan/ou-cloud-club/room/room66",
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
