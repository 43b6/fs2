// Room: /open/capital/room/king/kr2-6
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "�е¹�");
  set ("long", @LONG
��������������õĺ󹬳е¹���Ŀǰ��������һ�ٶ�λ��
��ס�����棬ÿ����ŵȴ������ӣ�����������������û�ȥ������
�����ӣ��������Ͻ����Խ���ģ���ǰ�Ǽ�λ̫����Ǳ����ල����
�����Է�ֹ�з�������������������鷢����
LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/capital/npc/nobird.c" : 1,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"kr2-6",
]));

  setup();
}
void init()
{
        add_action("do_exert","exert");
}
int do_exert(string str)
{
 object me;
 me=this_player();
 if(str=="roar"){
 message_vision(HIC"�ʹ����������Ķ���˵:�ʳǽ�������������������������!!!\n"NOR,me);
 return 1;
                }
 else
 {
 return 0;
 }
}
