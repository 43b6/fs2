#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "�μҾ�����");
  set("long", @LONG
��Ϊ�μҵ��ӣ����������һ������ү�м�����һ�㣬�ر�Ϊ��
���ǳ���ѵ������ϣ�������ڶ���֮�⣬���ܶ����Լ������ǡ�
  

LONG);
    set("light_up", 10);
   set("exits", ([
   "down": __DIR__"tr3",
    "up": __DIR__"tr1",
   
    ]));
   set("objects",([
         "/open/ping/npc/train2.c":  3,
           ]));
 setup();
}
