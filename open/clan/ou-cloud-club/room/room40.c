// Room : /open/clan/ou-cloud-club/room/room40.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$���$NOR$" );
	set( "build", 10036 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "long", @LONG
����ǽ�ϵĹ�����̨��,�谵������������Ÿ��ܵĿ���ҡ����,
����ϡ�ɼ���ǽ�����ǵ�ɢ���Ű߲���Ѫ��,����ʹ�㵱����Ż,����
�˸е������,����ǰ��Щ����ֵ���Ӱ����Ŀ�ĵ��߶���,���۽���
��͵͵�۲�,�ž�������Щ������֫��ٲ��Ʋ�ȫ��ʳʬ��,��Ȼ����
���������ǻ����Ĺ��ﲻ��Ϊ��,�����Ǳ�������,�����ǿֲ�����
�ݾͿ��������������������,���Ǿ��ٵ͵�ͨ����!!
LONG);
	set( "cmkroom", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room41.c",
  "west" : "/open/clan/ou-cloud-club/room/room39",
]) );
	set( "no_transmit", 1 );
	set( "clan_room", "����ɽׯ" );
	setup();

	}
