// Room: /u/d/dhk/questsfan/room11
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[0;31m��[0m����");
  set ("long", @LONG
��һ��λ�ڹȿڵĽᾧ��������ɫ�Ĺ�â�����Թ���
˼����һ��Ľᾧ�У��ؾ�ʯ �壬����ʺ͹���ľ��Ŵ�
ͬС��Ҳ��һ��ʯҲ����ʱ���̾����̫�٣����Ͼ��д�
�澰�����侹��һ�μ�ʶ��

LONG);

  set("outdoors", "/u/d");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"room10",
  "east" : __DIR__"room12",
]));

  setup();
}
