// made by chun,copy and re-edit by ccat
#include <room.h>
#include "/open/open.h"

inherit "/std/room/shop";

void create ()
{
  set ("short", "���ֻ�ר����");
  set ("long", @LONG
  ������ɱ���ǽ������ֻ��ĺõط�,��������Թ���(value),����(sell),
  �������(buy),�����Բ쿴������ʲô��Ʒ����(list).
  �����ɷ���ʽ������û���ϰ壬���������ڰ��м��ӣ�������ֻ�ʧ�١�

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r18.c",
]));

  set("light_up", 1);

  setup();
}