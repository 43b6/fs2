// Room: /u/d/dhk/questsfan/room22
inherit ROOM;
#include <ansi.h>
#include <room.h>
#include </open/open.h>

void create ()
{
  set ("short", "���ȹȵ�");
  set ("long", @LONG
�˵ؾ��Ǵ����еľ��ȵ����أ��ش����ȹȵס�����
�������������ַ�Լʮ��֮ң��һ����ͤ��ͤ����һ��ɫ
Ů��˫��΢�ϣ�����˼��ʲô����Ȼ��Ľ�����һ������
�У�������赹������ϸһ�ƣ���Ȼ���ִ˵��ݺύ��
������������Ȼ������һ��ʩչ�ϳ��Ṧ����һԾ�����
û����������ԭȻ������վ֮��������һ����������̣�
�ѵ��������������壬�Ǻ�˭���أ�������ƶ��ϰٽ��
�����أ�

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"room23",
  "westup" : __DIR__"room21",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yun.c" : 1,
]));
  set("outdoors", "/u/d");
set("no_transmit", 1);
  setup();
}
int valid_leave(object who,string dir){
if(who->query("marks/fan-finger")!=1)
   if(dir=="east" && who->query("questsfan/quest_step")!=5)
     {
     message_vision(HIC"��ܿ�����Ķ�$N˵��:���Ȳ��������������ĵط�?����¿����ȥ!!\n"NOR,who);
       return notify_fail("��ܿ�����Ķ���˵��:���Ȳ��������������ĵط�?����¿����ȥ!!\n");
     }
   return :: valid_leave(who,dir);
}
