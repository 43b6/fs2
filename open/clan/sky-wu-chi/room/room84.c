// Room : /open/clan/sky-wu-chi/room/room84.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "clan_room", "����޼�" );
	set( "short", "ͨ�����" );
	set( "light_up", 1 );
	set( "object", ([
		"amount4"  : 1,
		"file4"    : "/open/ping/obj/cloud",
		"amount2"  : 1,
		"file1"    : "/open/ping/questsfan/obj/key",
		"amount1"  : 1,
		"file2"    : "/open/ping/questsfan/obj/key",
	]) );
	set( "owner", "aow" );
	set( "build", 10240 );
	set( "long", @LONG
��ֱ��ͨ����һֱͨ����ͷ����������û���κ���Ʒ 
����ȴ���Ÿ߼��ĵ�̺������ͨ����ͨ��ǰ�κ����Ƚϲ�
�������ͨ���ˡ��ƺ��о��������������࣬�����㲻��
��������������ʼ����ȥ����ͨ����ǽ�ڣ������ǲ�����ʲ
ô����֮��Ļ����㷢�֡�

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 2 */
  "south" : "/open/clan/sky-wu-chi/room/room79",
  "north" : "/open/clan/sky-wu-chi/room/room88.c",
]) );
	set( "cmkroom", 1 );
	setup();

	}
