// Room : /open/clan/ou-cloud-club/room/room30.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIY$�������� $HIW$����$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
��������һ�����ȵĳ���,������������ڳ�����ɹ��������
�Ĺ�ϵ,Ƥ���������Ǻڵö�,���Ҹ��ַ����������,ԭ��,����
���Ƿ�̵ķ�Դ��--����,���ŷ��������֮����,��Ȼ���Բ���
,һ·�ϴ����ɼ��������ĵ�ɮ��,���˸е�Ũ����ڽ���Ϣ.
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"east"      : "/open/clan/ou-cloud-club/room/room29",
		"west"      : "/open/clan/ou-cloud-club/room/room31.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
