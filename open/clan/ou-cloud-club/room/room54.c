// Room : /open/clan/ou-cloud-club/room/room54.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�������$NOR$" );
	set( "build", 10203 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/room49",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
ǰ����һ����ֱ�ĳ�ʥ����,ÿ��ʮ�ױ����һ���ֳֶָ�
�Լ�������������ʿ����,Ҫ��ֹ�κ���ǰ��,Ҳ�����ǰ��ص�
������һ�����������֮Դ��!!����Ըо���ǿ�ҵ��ڽ���Ϣ
,ȴ�޷�ȷ�����Դ���ʾ���Ϊ��ʥ����а��.
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
