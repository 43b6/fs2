// Room : /open/clan/ou-cloud-club/room/room60.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "$HIW$��ħ��$HIR$ʱ�ơ���$NOR$" );
	set( "build", 10046 );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "west" : "/open/clan/ou-cloud-club/room/room59",
]) );
	set( "clan_room", "����ɽׯ" );
	set( "long", @LONG
����ʱ�ӵ���������,�������ƺ��������ľ�ͷ,��ϸ��һ������
����,������,�ƺ��ر��ܸе�ʱ�������,��������������������
ʲô�ش������,����,�����˾��ȼ������,���ǵ����������������
�Ĵ�ʼ�߰�,��ʹ�޷��˽�������Ķ���Ϊ��,Ҳ�ܶ��⸳��ռ�ʱ��
�о�����Ʒ�е�թ��
LONG);
	set( "no_transmit", 1 );
	set( "cmkroom", 1 );
	setup();

	}
