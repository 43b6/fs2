// Room : /open/clan/ou-cloud-club/room/room34.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$˿��֮·$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
��;�ľ��󽥽�����Щ��ɫ�ĵ�׺��,����ɳĮ�е�����,����
��Ϊ�����Ѿ��ӽ����к���,������ȥ���Ƕ�ŷ��,��ȫ��ͬ���й�
��ӡ�ȵ���һ�ֹ�������,��˵�������弰����ѧ�ڴ˷ǳ�ʢ��,��
����һ����,������������,��ɫ����,����Ǻ�بŷ½�Ķ�觺�.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/ou-cloud-club/room/room31",
		"west"      : "/open/clan/ou-cloud-club/room/room35.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
