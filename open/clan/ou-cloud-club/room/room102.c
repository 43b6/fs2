// Room : /open/clan/ou-cloud-club/room/room102.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
��һ����Ǳ�˴��ʮ��������,��Ȼ��һ��ǽ�Ϸ���һ����
�ɵ�ľ��,����ŵĴ�����ʵ���˷ѽ�,�ѵ�����Ƭˮ��֮�¾�
���ž�˼������������ס����??Ȼ���ź�����ѹ�ȸ�ȴ����
�˸е�����Ĳ���,���������ŵ�ͬʱ,��������ʧȥ��˲��..
LONG);
	set( "cmkroom", 1 );
	set( "clan_room", "����ɽׯ" );
	set( "short", "$HIW$��ħ��$HIR$����ˮ��$NOR$" );
	set( "light_up", 1 );
	set( "exits", ([
		"up"        : "/open/clan/ou-cloud-club/room/room103",
	]) );
	set( "no_clean_up", 0 );
	set( "no_transmit", 1 );
	setup();

	}
