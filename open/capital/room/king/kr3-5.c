// Room: /open/capital/room/king/kr3-5
#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��Ϣͤ");
	set( "build", 24 );
  set ("long", @LONG
����ƽ�����Ϻ󹬼����Ǿۻ�ĵط�������ٻ�ƬҰ�����Ʈ��
����ʱ����Ҳ������Ŵ����˵���һ�Ĺ��Ҵ��£��㿴��ͤ���ʯ
���ϰ���һЩ�վ�ƿ���Ʊ�����֪��˭���˵غȾ��������ˡ�
LONG);

  set("outdoors", "/open/capital");
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"kr3-6",
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
