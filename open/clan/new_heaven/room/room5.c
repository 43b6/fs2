// Room : /open/clan/new_heaven/room/room5.c
 inherit "/open/clan/claneqshop.c";

void create()
{
        seteuid(getuid());
	set( "short", "����������������" );
	set( "no_clean_up", 1 );
	set( "no_transmit", 1 );
	set( "light_up", 1 );
	set( "long", @LONG
�����ð��ڵ��������߼ķ���, �����(look post)�����
ʹ�÷���
LONG);
	set( "eqroom", 1 );
	set( "exits", ([ /* sizeof() == 1 */
  "east" : "/open/clan/new_heaven/room/hall",
]) );
	set( "item_desc", ([ /* sizeof() == 1 */
  "post" : "
  �ڴ�eq�ң�������� list <��������> ��֪����ʲô����Ҫ��������
                  �� list <��������> ��֪����ʲô����Ҫ�Ļ��ߣ�
                  �� list <another>  ��֪����ʲô����Ҫ�����
                  �� take + ��Ʒ��   ��ȡ������Ҫ����Ʒ��
                  �� put  + ��Ʒ��   ������㲻Ҫ����Ʒ .
",
]) );
	set( "cmkroom", 1 );
	set( "clan_room", "������" );
	set( "have_reborn", 1 );
	setup();

	}
