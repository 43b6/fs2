// Room : /open/clan/ou-cloud-club/room/room55.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 10015 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room56.c",
  "west" : "/open/clan/ou-cloud-club/room/room19",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
�δ�δ��������������,����Ȼ����ǽ�Ϲ��˳�ǧ�ϰ�
��ʽ���������Ĺ���ʱ��,������ͷƤ�����,������ÿһ����,
�����벻���ָ����ͬ��ʱ��,�����Ӵ��һ�ѹ��ϻ�е,��֪
��Ϊʲô������ڻ���Ķ�ħ����,����������ħ��Ҳ���ں�
Щ��ʱ���������...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
