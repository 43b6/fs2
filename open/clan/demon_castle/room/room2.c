// Room : /open/clan/demon_castle/room/room2.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "short", "ħ�Bװ����" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/demon_castle/room/hall",
]) );
	set( "no_transmit", 1 );
	set( "long", @LONG

    �߽��˼�ʯ�ң�����ҫ�۵Ĺ�ã��˸������ԭ���˵ر����ղ���
��ħ����Ҫ����װ����EQ�ң�ֻ���������ϰ��������ϡ����������
���ǽ�������������������ν��ʮ�˰�����������ȫ���ɼ���������
��ħ��ʱ�໨���������Ѫ��������װ�����ռ����ѹֶ�ħ���ܶ���
���£�������ҡ��
(��֪��ʹ�÷�����look eq room)


LONG);
set( "item_desc", ([ /* sizeof() == 1 */
  "eq room" : "  �ڴ�eq�ң�������� list �������� ��֪����ʲô����Ҫ��������
�� list �������� ��֪����ʲô����Ҫ�Ļ��ߣ�
�� list another  ��֪����ʲô����Ҫ�����
�� take + ��Ʒ��   ��ȡ������Ҫ����Ʒ��
�� put  + ��Ʒ��   ������㲻Ҫ����Ʒ .
",
]) );
set( "objects", ([ /* sizeof() == 1 */
  "/open/clan/demon_castle/npc/npc4" : 1,
]) );
	set( "clan_room", "����ɽׯ" );
	set( "no_transmit", 1 );
	set( "eqroom", 1 );
	setup();

	}
