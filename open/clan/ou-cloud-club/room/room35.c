// Room : /open/clan/ou-cloud-club/room/room35.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$��������  $HIW$����������$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
��ǰ�����ĵĶ�觺�������ȥ,����,���ذ���һ��ɽ�¶��±�
,ȴ������һ�����ϳǱ�,�Ǳ��Ͽ������ܲ�,ż�����µļ�������
��������������һ����֮��,�������ϵĳǱ�,������δ֪��
а��ǿ������,������һ������Ŀ��´���...
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room34",
  "northwest" : "/open/clan/ou-cloud-club/room/room36.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
