// Room: /crystal/fantasy/Lbird_shop.c
inherit ROOM;

#include <ansi.h>
#include <room.h>
void create ()
{
  set ("short", "[1;36m��ɳ��[1;35m��[1;33m���������[2;37;0m");
  set ("long", @LONG
�����ǳ�ɳ�������ķ����Ϣ�أ�������Ϊ�˰��������������
��һλСŮ���չ����ţ�Ҳ��Ӧ��������µ���������Ǳ���������
������һֻ��������뿴(sign)��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/marksman/npc/shopgirl" : 1,
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "    ������빺��һֻ��˵Ļ����ڳ�ɳ����������õ����
����ִ�ըۣ�������Ѿ����Ϲ涨�ˣ����������³�����

          1.ѡ����--list.
          2.�ó�Ǯ��������--shop.
          3.������ר������--shop come-sum.

",
]));
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room1-11",
]));
  set("light_up", 1);

  setup();
}
