// Room : /open/clan/ou-cloud-club/room/room110.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
�����ˮ�����������,���������ȿ����й�֮����
����,����ֻ������Ӿ�ķ�ʽǰ����,�����ֲ�֪��ˮ������
ʲô������������Ӿ����,�������˵�ս�ľ���,�������
��֪����,��Ȼ�书��ǿ,Ψһ�����㷳�յ�,ֻ�����ǻ�Ūʪ
���ϵĻ������ΰ� :p
LONG);
	set( "cmkroom", 1 );
	set( "short", "$HIR$��ħ��$HIW$����ˮ��$NOR$" );
	set( "owner", "bbsboss" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/open/magic-manor/obj/hwa-je-icer",
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "build", 11112 );
	set( "light_up", 1 );
	set( "exits", ([ /* sizeof() == 2 */
  "east" : "/open/clan/ou-cloud-club/room/room111.c",
  "west" : "/open/clan/ou-cloud-club/room/room106",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	setup();

	}
