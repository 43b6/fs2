// Room : /open/clan/ou-cloud-club/room/room31.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$YEL$˿��֮·$NOR$" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
����Ӧ��ŷ�Ǵ�½�����ĵش���!!�������ﲻ���������̶�
��ʾ��������Ҫ����ҵ��·,��Խ����ǰ��,Խ�ܼ������಻ͬ��
���������İ�����,��Щ�˴�����۾�,������ͦ,Ƥ���Ժ�,��
����ĸߴ�֮��,�����Բ�ͨ,̸�¼�ȴ�ܿ�����һ�㲻ʶ��֮��
Ұƥ��,�����Թ��������쳯�Ϲ�,���ĳ����Ĺ���Ҫ����������
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
		"west"      : "/open/clan/ou-cloud-club/room/room34",
		"east"      : "/open/clan/ou-cloud-club/room/room30.c",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
