// Room: /u/b/bss/guilty_room
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
����һ��������������Χ�����ļ���, ����ס�Ķ���һЩ����
�񼫵��ﷸ, ����������ΪΥ����player_rules��������bugs����
������, ��ǰ����ʦ�������˵����Щ�������purge,����������
��һ���ñ�ԩ, ��Ҫ����, ����������ôһ�䷿��, ����Ҫ����
��������ߵĹܵ�
��䷿������˵��û�취��ȥ�Ŷ�,���˭���ҵ�������ȥ�Ļ�,�ҾͻὫ������
Ҫ���ߵ�����post
LONG);

  set("no_fight", 1);
  set("exits", ([ /* sizeof() == 1 */
]));
  set("no_magic", 1);
  set("light_up", 1);

  set("valid_startroom",1);
  set("no_transmit",1);
  set("guilty_room",1);
  setup();
  call_other("/obj/board/guilty_b","???");
}
