
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "���ǵ�");
  set ("long", @LONG
������ǵ���ʺ���޹�����һ�����ͱ����ҵ��������Ե�����
ǰ��̫��������һ���ֽ������ľ������ӣ�ʹ��Իʺ����������
�ľ��⣬�����ʺ��ƺ���Ϊ����Ե�޹ʽ���������һ����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/kingwife" : 1,
  "/open/capital/npc/kingirl" : 2,
]));
  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"kr2-5",
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









