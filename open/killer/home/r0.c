#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "רҵɱ��ѵ����");
  set("long", @LONG
  ������һϵ�е�ѵ���γ̣��ɳ������߼���Ӧ�о��С�
  ��һ¥���ǳ����࣬�ʺ��½�ɱ����ذ����ϰ��
  �ڶ�¥���Ǹ߼��࣬һ���½�ɱ�ֿɲ�Ҫ�Ҵ���

LONG);
    set("light_up", 10);
   set("exits", ([
   "north": __DIR__"waterm.c",
    "west": __DIR__"r12",
    "east": __DIR__"r11.c",
      "up": __DIR__"r0u.c",
   "south": __DIR__"boardrm.c",
    ]));
   set("objects",([
         "/open/killer/npc/train_d.c":  3,
           ]));
 setup();
}