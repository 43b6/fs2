//open/prayer/room/punch1-1 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�����ķ���");
  set ("long", @LONG

    ���������ڵ�λ�ã�����ʥ������ķ��䣬���ǽ��������������Ϣ
�ĵط������ܴ�������Ļ��㣬Ũ���Ļ���ʹ��о�������������԰һ��
����ϸһ�Ż�������Ļ��������Խ������˵�����...... 

LONG);

  set("exits", ([ /* sizeof() == 1 */
        "out" : "/open/prayer/room/punch1",             //����
]));
   set("light_up", 1);

  setup();
}
 
