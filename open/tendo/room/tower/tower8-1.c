
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","����");
        set("long", @LONG
����һ���տ����ɾ�������ʮ�ּ򵥣�ֻ��һ�Ŵ���һЩ�򵥼�
��ķ��䣬������ע�⵽�����ߵ�ǽ(wall)�ͱ�ĵط���ǽ��ɫ�е�
��ͬ��������--��������Ϊ�ص��Ĺ�ϵ��!!�����ҵĻ����˸����ʹ
�����ȷ������Ʋ⡣
LONG);
set("item_desc", ([ /* sizeof() == 1 */
"wall" : "�㷢�����ǽ�ֵֹģ��ƺ������ƶ���
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"tower8.c",
]));
  set("no_transmit",1);
  setup();
}
void init()
{
        add_action("do_push","push");
}

int do_push(string str)
{
        object who;
        who = this_player();

        if(str!="wall"){return 0;}
        tell_object(who,"[1;33m�����������һ��ǽ����ǽȴ���ٵ�ת��һȦ��Ҳ��������ת"+"�˽�ȥ��[0m\n");
        who->move("/open/tendo/room/tower/tower8-2");
        tell_room(this_object(),"[1;33m�㿴����ͷ��ǽ��[1;37m"+who->query("name")+"[1;33mһ��֮��"
				+"[1;33mת����һȦ����[1;37m"+who->query("name")+"[1;33mҲ��ǽ��"+
				"[1;33mת�˽�ȥ��[0m\n");
        return 1;
}


