// Room : /open/clan/ou-cloud-club/room/room29.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$˿��֮·$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
���СС��ɳ���������ǰ,��������ϡ���Կ���������һ��
����,��������,�ѵ��ǻþ���,����Ǻ�����¥��,��������,�Թ�
������֪������ͼ��Խ�������ɳĮ���˱���������Ի�,������
�����ƣ,���ڻ�Į,��...���Ǽӽ��Ų���·��!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room27",
  "west" : "/open/clan/ou-cloud-club/room/room30.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
