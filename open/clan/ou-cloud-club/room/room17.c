// Room : /open/clan/ou-cloud-club/room/room17.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG

���Ƶ��ķ��䣬���ڰ���ʮ���ѽ�������һ�������ǽ���
ʮ���޳����������彣��ԭ���Ѿ����ڴ����н�ħ֮�Ƶ�
���Ƶ������������Ŵ��˼���ݽ�����������Ը��Ϊ���ܣ�
��������ħ���Ƶ��Ѿ����˳�������Ϊ���ǽ�һ����������
֮�����ﵽ�����޽��������н�֮������߾��硣

LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "clan_room", "����ɽׯ" );
	set( "cmkroom", 1 );
	set( "short", "$HIY$ħ��ڣ$NOR$" );
	set( "owner", "mekyn" );
	set( "exits", ([ /* sizeof() == 1 */
		"west"      : "/open/clan/ou-cloud-club/room/room199",
		"east"      : "/open/clan/ou-cloud-club/room/room15.c",
]) );
	set( "light_up", 1 );
	setup();

	}
