// Room : /open/clan/ou-cloud-club/room/room65.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$�󾺼���$NOR$" );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/ou-cloud-club/room/room64",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
���Ƶĵĵذ�,���ذ����Լ����п���ۼ���ʯ��,��ʾ
�������Ϲ�ʱ�ڸ񶷻���������ʹ�ó��ż�,����¹�����
�����������������,������ĥ���似?���߽�����Ϊ����
սʿ�����ಫ�����ֳ���!?�Ȳ������,���Ѽ�����ǰ�в���
����սʿ��ȫ����װ,�۾�����ıȻ���,������ĵ���,�ƺ�
��ȫû��ע�⵽...
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
