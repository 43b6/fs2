#include <ansi.h>
#include <room.h>
inherit ROOM;

void create ()
{
  set ("short", "����������");
	set( "build", 2 );
  set ("long", @LONG
������ܸɸɾ�����, ֻ�������������һ�ų�����ľ��Բ��, ��
��һ��̴ľ�����������һ��, ˫�۲�ŭ����, ��Ȼ��һ�ɵ���������
, ��ر���ƽ�ϳ���, ��������, ��һ�޶���ƽ����--�����ơ���Ҳ��

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"np13.c",
  "north" : __DIR__"np23.c",
]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/daemon/class/scholar/master_duan" : 1,
]));
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/duan_b.c","???");
}


void init()
{
        add_action("do_search", "search");
        if(this_player()->query("family/family_name")=="�μ�")
        {
         if(!this_player()->query("bss/have_tell"))
         tell_object(this_player(),BLINK+HIY"�뵽�μҽ��������������!!\n"NOR);
         this_player()->set("bss/have_tell",1);
        }
}

int do_search()
{
        object who;
        who = this_player();

        tell_object(who,"\n�����𰵿�, һת��, ��û�ڰ���֮��\n\n");
        who->move(__DIR__"np20");
        tell_room(this_object(),who->query("name")+"��֪������ʲô����, ͻȻ��ʧ�ڴ���֮�С�\n");
        return 1;
}
