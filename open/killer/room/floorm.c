#include <room.h>
#include <ansi.h>
inherit ROOM;
 void create()
{
  set("short", "¥�ݼ�");
  set("long", @LONG
  ���Եĵƻ�˳��¥��һֱ����ȥ���ƺ�ͨ���ļ�Ϊ��Ҫ�ĵط���
  ����û����ò�Ҫ�Ҵ����������Ƿ��ܿ����Լ��ĺ������أ�
  ¥�����ƺ�����������ͨ��������ɱ�����������㲻����һ̽������
  �������������ҩζ����ֵ�ζ�����ƺ��������С�
  ������ɱ���ǵ���ӵ��з��������ᣬ��Ҫ���˿���ȥ������
LONG);
    set("light_up", 10);
   set("exits", ([
   "north": __DIR__"boardrm.c",
    "west": __DIR__"r19",
    "east": __DIR__"r18.c",
      "up": __DIR__"ru0.c",
   "south": __DIR__"r17.c",
    ]));
   set("objects",([
         "/open/killer/npc/guard.c":  2,
           ]));
 setup();
}